
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct hnae3_knic_private_info {unsigned int rss_size; unsigned int num_tqps; int num_tc; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct hclgevf_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int,int) ;
 struct hclgevf_dev* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hnae3_handle*,unsigned int*,int *,int ) ;
 int FUNC_4 (struct hclgevf_dev*,unsigned int) ;
 int FUNC_5 (struct hnae3_handle*,unsigned int) ;
 unsigned int* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_3, u32 VAR_4,
    bool VAR_5)
{
 struct hclgevf_dev *VAR_6 = FUNC_2(VAR_3);
 struct hnae3_knic_private_info *VAR_7 = &VAR_3->kinfo;
 u16 VAR_8 = VAR_7->rss_size;
 u16 VAR_9 = VAR_7->num_tqps;
 u32 *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_5(VAR_3, VAR_4);

 VAR_12 = FUNC_4(VAR_6, VAR_7->rss_size);
 if (VAR_12)
  return VAR_12;


 if (VAR_5)
  goto out;


 VAR_10 = FUNC_6(VAR_2, sizeof(u32), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_10[VAR_11] = VAR_11 % VAR_7->rss_size;

 VAR_12 = FUNC_3(VAR_3, VAR_10, ((void*)0), 0);
 if (VAR_12)
  FUNC_0(&VAR_6->pdev->dev, "set rss indir table fail, ret=%d\n",
   VAR_12);

 FUNC_7(VAR_10);

out:
 if (!VAR_12)
  FUNC_1(&VAR_6->pdev->dev,
    "Channels changed, rss_size from %u to %u, tqps from %u to %u",
    VAR_8, VAR_7->rss_size,
    VAR_9, VAR_7->rss_size * VAR_7->num_tc);

 return VAR_12;
}

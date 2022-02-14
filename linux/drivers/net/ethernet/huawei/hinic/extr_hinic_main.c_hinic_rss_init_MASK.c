
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hinic_dev {int rss_hash_engine; int rss_type; int num_rss; int rss_tmpl_idx; } ;
typedef int default_rss_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct hinic_dev*,int,int ) ;
 int FUNC_2 (struct hinic_dev*,int ,int ) ;
 int FUNC_3 (struct hinic_dev*,int ,int *) ;
 int FUNC_4 (struct hinic_dev*,int ,int *) ;
 int FUNC_5 (struct hinic_dev*,int ,int ) ;
 int * FUNC_6 (int,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct hinic_dev *VAR_4)
{
 u8 VAR_5[VAR_3];
 u8 VAR_6 = VAR_4->rss_tmpl_idx;
 u32 *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_6(VAR_2, sizeof(u32), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(VAR_5, sizeof(VAR_5));
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_7[VAR_9] = FUNC_0(VAR_9, VAR_4->num_rss);

 VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_5);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_4->rss_type);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_2(VAR_4, VAR_6,
     VAR_4->rss_hash_engine);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_1(VAR_4, 1, VAR_6);
 if (VAR_8)
  goto out;

out:
 FUNC_7(VAR_7);
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct hclge_fd_rule {int queue_id; int location; } ;
struct hclge_fd_key_cfg {int tuple_active; } ;
struct TYPE_4__ {int max_key_length; struct hclge_fd_key_cfg* key_cfg; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__ fd_cfg; } ;
typedef int key_y ;
typedef int key_x ;
typedef int __le32 ;
struct TYPE_6__ {int key_length; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct hclge_fd_key_cfg*,int *,int *,struct hclge_fd_rule*) ;
 int FUNC_3 (int,size_t*,size_t*,struct hclge_fd_rule*) ;
 int FUNC_4 (struct hclge_dev*,size_t,int,int ,size_t*,int) ;
 int FUNC_5 (size_t*,int ,int) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_4, u8 VAR_5,
       struct hclge_fd_rule *VAR_6)
{
 struct hclge_fd_key_cfg *VAR_7 = &VAR_4->fd_cfg.key_cfg[VAR_5];
 u8 VAR_8[VAR_0], VAR_9[VAR_0];
 u8 *VAR_10, *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15;

 FUNC_5(VAR_8, 0, sizeof(VAR_8));
 FUNC_5(VAR_9, 0, sizeof(VAR_9));
 VAR_10 = VAR_8;
 VAR_11 = VAR_9;

 for (VAR_12 = 0 ; VAR_12 < VAR_2; VAR_12++) {
  bool VAR_16;
  u32 VAR_17;

  VAR_14 = VAR_3[VAR_12].key_length / 8;
  VAR_17 = VAR_7->tuple_active & FUNC_0(VAR_12);

  VAR_16 = FUNC_3(VAR_17, VAR_10,
           VAR_11, VAR_6);
  if (VAR_16) {
   VAR_10 += VAR_14;
   VAR_11 += VAR_14;
  }
 }

 VAR_15 = VAR_4->fd_cfg.max_key_length / 8 -
   VAR_1 / 8;

 FUNC_2(VAR_7,
       (__le32 *)(VAR_8 + VAR_15),
       (__le32 *)(VAR_9 + VAR_15),
       VAR_6);

 VAR_13 = FUNC_4(VAR_4, VAR_5, 0, VAR_6->location, VAR_9,
       1);
 if (VAR_13) {
  FUNC_1(&VAR_4->pdev->dev,
   "fd key_y config fail, loc=%d, ret=%d\n",
   VAR_6->queue_id, VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_4, VAR_5, 1, VAR_6->location, VAR_8,
       1);
 if (VAR_13)
  FUNC_1(&VAR_4->pdev->dev,
   "fd key_x config fail, loc=%d, ret=%d\n",
   VAR_6->queue_id, VAR_13);
 return VAR_13;
}

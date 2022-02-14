
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev_index; } ;
struct TYPE_5__ {TYPE_1__* uio_dev; int name; } ;
struct tcmu_dev {TYPE_3__ se_dev; TYPE_2__ uio_info; } ;
struct sk_buff {int dummy; } ;
typedef enum tcmu_genl_cmd { ____Placeholder_tcmu_genl_cmd } tcmu_genl_cmd ;
struct TYPE_4__ {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 void* FUNC_1 (struct sk_buff*,int ,int ,int *,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct tcmu_dev *VAR_7,
       enum tcmu_genl_cmd VAR_8,
       struct sk_buff **VAR_9, void **VAR_10)
{
 struct sk_buff *VAR_11;
 void *VAR_12;
 int VAR_13 = -VAR_0;

 VAR_11 = FUNC_0(VAR_2, VAR_1);
 if (!VAR_11)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_11, 0, 0, &VAR_6, 0, VAR_8);
 if (!VAR_12)
  goto free_skb;

 VAR_13 = FUNC_2(VAR_11, VAR_3, VAR_7->uio_info.name);
 if (VAR_13 < 0)
  goto free_skb;

 VAR_13 = FUNC_3(VAR_11, VAR_5, VAR_7->uio_info.uio_dev->minor);
 if (VAR_13 < 0)
  goto free_skb;

 VAR_13 = FUNC_3(VAR_11, VAR_4, VAR_7->se_dev.dev_index);
 if (VAR_13 < 0)
  goto free_skb;

 *VAR_9 = VAR_11;
 *VAR_10 = VAR_12;
 return VAR_13;

free_skb:
 FUNC_4(VAR_11);
 return VAR_13;
}

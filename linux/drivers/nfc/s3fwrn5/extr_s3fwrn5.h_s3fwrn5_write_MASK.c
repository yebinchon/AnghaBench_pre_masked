
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct s3fwrn5_info {int phy_id; TYPE_1__* phy_ops; } ;
struct TYPE_2__ {int (* write ) (int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct s3fwrn5_info *VAR_1, struct sk_buff *VAR_2)
{
 if (!VAR_1->phy_ops->write)
  return -VAR_0;

 return VAR_1->phy_ops->write(VAR_1->phy_id, VAR_2);
}

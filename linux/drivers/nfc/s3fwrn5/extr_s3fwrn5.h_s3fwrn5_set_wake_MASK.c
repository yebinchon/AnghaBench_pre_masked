
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3fwrn5_info {int phy_id; TYPE_1__* phy_ops; } ;
struct TYPE_2__ {int (* set_wake ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct s3fwrn5_info *VAR_1, bool VAR_2)
{
 if (!VAR_1->phy_ops->set_wake)
  return -VAR_0;

 VAR_1->phy_ops->set_wake(VAR_1->phy_id, VAR_2);

 return 0;
}

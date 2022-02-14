
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3fwrn5_info {int phy_id; TYPE_1__* phy_ops; } ;
typedef enum s3fwrn5_mode { ____Placeholder_s3fwrn5_mode } s3fwrn5_mode ;
struct TYPE_2__ {int (* set_mode ) (int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct s3fwrn5_info *VAR_1,
 enum s3fwrn5_mode VAR_2)
{
 if (!VAR_1->phy_ops->set_mode)
  return -VAR_0;

 VAR_1->phy_ops->set_mode(VAR_1->phy_id, VAR_2);

 return 0;
}

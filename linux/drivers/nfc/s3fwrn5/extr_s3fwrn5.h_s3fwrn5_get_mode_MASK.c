
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3fwrn5_info {int phy_id; TYPE_1__* phy_ops; } ;
typedef enum s3fwrn5_mode { ____Placeholder_s3fwrn5_mode } s3fwrn5_mode ;
struct TYPE_2__ {int (* get_mode ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum s3fwrn5_mode FUNC_1(struct s3fwrn5_info *VAR_1)
{
 if (!VAR_1->phy_ops->get_mode)
  return -VAR_0;

 return VAR_1->phy_ops->get_mode(VAR_1->phy_id);
}

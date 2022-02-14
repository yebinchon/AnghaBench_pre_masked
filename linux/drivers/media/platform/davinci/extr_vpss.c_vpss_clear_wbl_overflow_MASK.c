
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vpss_wbl_sel { ____Placeholder_vpss_wbl_sel } vpss_wbl_sel ;
struct TYPE_3__ {int (* clear_wbl_overflow ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(enum vpss_wbl_sel VAR_2)
{
 if (!VAR_1.hw_ops.clear_wbl_overflow)
  return -VAR_0;

 return VAR_1.hw_ops.clear_wbl_overflow(VAR_2);
}

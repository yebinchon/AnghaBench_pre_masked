
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum vpss_ccdc_source_sel { ____Placeholder_vpss_ccdc_source_sel } vpss_ccdc_source_sel ;
struct TYPE_3__ {int (* select_ccdc_source ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(enum vpss_ccdc_source_sel VAR_2)
{
 if (!VAR_1.hw_ops.select_ccdc_source)
  return -VAR_0;

 VAR_1.hw_ops.select_ccdc_source(VAR_2);
 return 0;
}

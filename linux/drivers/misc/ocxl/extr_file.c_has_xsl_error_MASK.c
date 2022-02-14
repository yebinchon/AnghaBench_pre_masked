
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct ocxl_context {int xsl_error_lock; TYPE_1__ xsl_error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ocxl_context *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->xsl_error_lock);
 VAR_1 = !!VAR_0->xsl_error.addr;
 FUNC_1(&VAR_0->xsl_error_lock);

 return VAR_1;
}

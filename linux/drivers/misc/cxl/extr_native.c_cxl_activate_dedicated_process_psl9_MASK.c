
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int num_procs; int current_mode; TYPE_1__* native; int dev; } ;
struct TYPE_2__ {int * spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxl_afu*) ;
 scalar_t__ FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*,int ,int) ;
 int FUNC_4 (int *,char*) ;

int FUNC_5(struct cxl_afu *VAR_7)
{
 FUNC_4(&VAR_7->dev, "Activating dedicated process mode\n");
 VAR_7->num_procs = 1;
 if (VAR_7->native->spa == ((void*)0)) {
  if (FUNC_1(VAR_7, VAR_0))
   return -VAR_6;
 }
 FUNC_0(VAR_7);

 FUNC_3(VAR_7, VAR_4, VAR_5);
 FUNC_3(VAR_7, VAR_1, VAR_2 | VAR_3);

 VAR_7->current_mode = VAR_0;

 return FUNC_2(VAR_7);
}

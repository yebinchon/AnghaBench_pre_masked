
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int num_procs; int current_mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (struct cxl_afu*,int ,int) ;
 int FUNC_2 (struct cxl_afu*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct cxl_afu *VAR_14)
{
 FUNC_3(&VAR_14->dev, "Activating dedicated process mode\n");

 FUNC_1(VAR_14, VAR_8, VAR_9);

 FUNC_1(VAR_14, VAR_6, 0);
 FUNC_1(VAR_14, VAR_11, 0);
 FUNC_1(VAR_14, VAR_5, 0xFFFFFFFFFFFFFFFFULL);
 FUNC_1(VAR_14, VAR_7, FUNC_4(VAR_12));
 FUNC_1(VAR_14, VAR_3, 0);
 FUNC_1(VAR_14, VAR_10, FUNC_4(VAR_13));

 FUNC_2(VAR_14, VAR_2, 0);
 FUNC_2(VAR_14, VAR_0, 0);
 FUNC_2(VAR_14, VAR_1, 0);

 VAR_14->current_mode = VAR_4;
 VAR_14->num_procs = 1;

 return FUNC_0(VAR_14);
}

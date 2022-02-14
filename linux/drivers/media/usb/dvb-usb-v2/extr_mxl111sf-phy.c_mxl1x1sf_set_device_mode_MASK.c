
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int device_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,int,int) ;
 int FUNC_1 (struct mxl111sf_state*,int,int,int) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_2("(%s)", VAR_0 == VAR_2 ?
  "MXL_SOC_MODE" : "MXL_TUNER_MODE");


 VAR_3 = FUNC_0(VAR_1, 0x03,
     VAR_0 == VAR_2 ? 0x01 : 0x00);
 if (FUNC_3(VAR_3))
  goto fail;

 VAR_3 = FUNC_1(VAR_1,
          0x7d, 0x40, VAR_0 == VAR_2 ?
          0x00 :

          0x40);

 if (FUNC_3(VAR_3))
  goto fail;

 VAR_1->device_mode = VAR_2;
fail:
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvi_ctrl_device {int (* pfnInit ) (unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;} ;


 struct dvi_ctrl_device* VAR_0 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

int FUNC_1(unsigned char VAR_1,
     unsigned char VAR_2,
     unsigned char VAR_3,
     unsigned char VAR_4,
     unsigned char VAR_5,
     unsigned char VAR_6,
     unsigned char VAR_7,
     unsigned char VAR_8,
     unsigned char VAR_9,
     unsigned char VAR_10)
{
 struct dvi_ctrl_device *VAR_11;

 VAR_11 = VAR_0;
 if (VAR_11->pfnInit) {
  return VAR_11->pfnInit(VAR_1,
      VAR_2,
      VAR_3,
      VAR_4,
      VAR_5,
      VAR_6,
      VAR_7,
      VAR_8,
      VAR_9,
      VAR_10);
 }
 return -1;
}

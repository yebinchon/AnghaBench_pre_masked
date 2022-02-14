
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int tuner_type; } ;


 int VAR_0 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct saa7134_dev*,int,int) ;
 int FUNC_2 (struct saa7134_dev*,int,int) ;
 int FUNC_3 (struct saa7134_dev*,int,int) ;

int FUNC_4(void *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct saa7134_dev *VAR_5 = VAR_1;

 if (VAR_5 != ((void*)0)) {
  switch (VAR_5->tuner_type) {
  case 130:
   return FUNC_1(VAR_5, VAR_3, VAR_4);
  case 129:
   return FUNC_2(VAR_5, VAR_3, VAR_4);
  case 128:
   return FUNC_3(VAR_5, VAR_3, VAR_4);
  }
 } else {
  FUNC_0("saa7134: Error - device struct undefined.\n");
  return -VAR_0;
 }
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct us_data*,char*,int) ;
 int FUNC_2 (struct us_data*,unsigned char*) ;
 int FUNC_3 (struct us_data*,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 unsigned char *VAR_9 = VAR_5->iobuf;
 for (VAR_7=0; VAR_7<1200+VAR_6*60; VAR_7++) {

   VAR_8 = FUNC_2(VAR_5, VAR_9);

  if (VAR_8!=VAR_4)
   return VAR_1;
  if (*VAR_9 & 0x01) {
   VAR_8 = FUNC_3(VAR_5, VAR_0, 0x10, VAR_9);
   return VAR_2;
  }
  if (*VAR_9 & 0x20)
   return VAR_2;

  if ((*VAR_9 & 0x80)==0x00) {
   FUNC_1(VAR_5, "Waited not busy for %d steps\n", VAR_7);
   return VAR_3;
  }

  if (VAR_7<500)
   FUNC_0(10);
  else if (VAR_7<700)
   FUNC_0(50);
  else if (VAR_7<1200)
   FUNC_0(100);
  else
   FUNC_0(1000);
 }

 FUNC_1(VAR_5, "Waited not busy for %d minutes, timing out\n",
       VAR_6);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbat_info {int devicetype; } ;
struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct us_data*,char*) ;
 int FUNC_2 (struct us_data*) ;
 int FUNC_3 (struct us_data*,unsigned char*) ;
 int FUNC_4 (struct us_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_7,
     struct usbat_info *VAR_8)
{
 int VAR_9;
 unsigned char VAR_10;

 if (!VAR_7 || !VAR_8)
  return VAR_4;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 != VAR_5)
  return VAR_9;
 FUNC_0(500);







 VAR_9 = FUNC_4(VAR_7, VAR_0, VAR_1, 0xA1);
  if (VAR_9 != VAR_6)
   return VAR_4;

 VAR_9 = FUNC_3(VAR_7, &VAR_10);
  if (VAR_9 != VAR_6)
   return VAR_4;


 if (VAR_10 == 0xA1 || !(VAR_10 & 0x01)) {

  FUNC_1(VAR_7, "Detected HP8200 CDRW\n");
  VAR_8->devicetype = VAR_3;
 } else {

  FUNC_1(VAR_7, "Detected Flash reader/writer\n");
  VAR_8->devicetype = VAR_2;
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbat_info {int sense_key; int sense_asc; int sense_ascq; } ;
struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*) ;
 int FUNC_3 (struct us_data*,unsigned char*) ;
 int FUNC_4 (struct us_data*,unsigned char*) ;
 int FUNC_5 (struct us_data*,unsigned char*) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_7,
       struct usbat_info *VAR_8)
{
 int VAR_9;
 unsigned char *VAR_10 = VAR_7->iobuf;

 VAR_9 = FUNC_5(VAR_7, VAR_10);
 if (VAR_9 != VAR_6)
  return VAR_3;


 VAR_9 = FUNC_4(VAR_7, VAR_10);
 if (VAR_9 == VAR_2) {
  VAR_8->sense_key = 0x02;
  VAR_8->sense_asc = 0x3A;
  VAR_8->sense_ascq = 0x00;
  return VAR_4;
 }


 VAR_9 = FUNC_3(VAR_7, VAR_10);
 if (VAR_9 == VAR_1) {


  VAR_9 = FUNC_2(VAR_7);
  if (VAR_9 != VAR_5)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 != VAR_5)
   return VAR_9;

  FUNC_0(50);

  VAR_9 = FUNC_5(VAR_7, VAR_10);
  if (VAR_9 != VAR_6)
   return VAR_3;

  VAR_8->sense_key = VAR_0;
  VAR_8->sense_asc = 0x28;
  VAR_8->sense_ascq = 0x00;
  return VAR_4;
 }

 return VAR_5;
}

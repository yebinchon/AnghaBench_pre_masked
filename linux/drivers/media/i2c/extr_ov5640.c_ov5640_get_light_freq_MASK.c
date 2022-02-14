
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov5640_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_3)
{

 int VAR_4, VAR_5 = 0;
 u8 VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 if (VAR_4)
  return VAR_4;

 if (VAR_6 & 0x80) {

  VAR_4 = FUNC_0(VAR_3, VAR_0,
          &VAR_7);
  if (VAR_4)
   return VAR_4;
  if (VAR_7 & 0x04) {

   VAR_5 = 50;
  } else {

   VAR_5 = 60;
  }
 } else {

  VAR_4 = FUNC_0(VAR_3, VAR_2,
          &VAR_7);
  if (VAR_4)
   return VAR_4;

  if (VAR_7 & 0x01) {

   VAR_5 = 50;
  } else {

  }
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cedrus_dev {int dummy; } ;
typedef enum cedrus_codec { ____Placeholder_cedrus_codec } cedrus_codec ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cedrus_dev*,int ,int ) ;

int FUNC_1(struct cedrus_dev *VAR_6, enum cedrus_codec VAR_7)
{
 u32 VAR_8 = 0;





 VAR_8 |= VAR_5;
 VAR_8 |= VAR_2;

 switch (VAR_7) {
 case 128:
  VAR_8 |= VAR_4;
  break;

 case 129:
  VAR_8 |= VAR_3;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_6, VAR_1, VAR_8);

 return 0;
}

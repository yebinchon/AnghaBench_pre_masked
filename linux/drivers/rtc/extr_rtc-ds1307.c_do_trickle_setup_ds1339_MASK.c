
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ds1307 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static u8 FUNC_1(struct ds1307 *VAR_5, u32 VAR_6, bool VAR_7)
{
 u8 VAR_8 = (VAR_7) ? VAR_3 :
  VAR_4;

 switch (VAR_6) {
 case 250:
  VAR_8 |= VAR_0;
  break;
 case 2000:
  VAR_8 |= VAR_1;
  break;
 case 4000:
  VAR_8 |= VAR_2;
  break;
 default:
  FUNC_0(VAR_5->dev,
    "Unsupported ohm value %u in dt\n", VAR_6);
  return 0;
 }
 return VAR_8;
}

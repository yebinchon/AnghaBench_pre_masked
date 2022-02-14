
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_7, u8 VAR_8)
{
 switch (VAR_8) {
 case 128:
  FUNC_3(VAR_7, VAR_1,
   VAR_4, VAR_3);
  FUNC_3(VAR_7, VAR_6, VAR_5, 0);
  break;
 case 129:
  FUNC_3(VAR_7, VAR_1,
   VAR_4, VAR_2);
  FUNC_3(VAR_7, VAR_6, VAR_5,
   VAR_5);
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_8);
 return FUNC_2(VAR_7, 100);
}

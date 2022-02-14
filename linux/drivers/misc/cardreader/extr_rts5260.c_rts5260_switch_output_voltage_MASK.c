
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


 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtsx_pcr*,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rtsx_pcr *VAR_9, u8 VAR_10)
{
 switch (VAR_10) {
 case 128:
  FUNC_1(VAR_9, VAR_5,
     VAR_3, VAR_3);
  FUNC_1(VAR_9, VAR_6,
     VAR_2, VAR_1);
  FUNC_1(VAR_9, VAR_8, VAR_7, 0);
  break;
 case 129:
  FUNC_1(VAR_9, VAR_5,
     VAR_3, VAR_3);
  FUNC_1(VAR_9, VAR_6,
     VAR_2, VAR_0);
  FUNC_1(VAR_9, VAR_8, VAR_7,
     VAR_7);
  break;
 default:
  return -VAR_4;
 }


 FUNC_0(VAR_9, VAR_10);

 return 0;
}

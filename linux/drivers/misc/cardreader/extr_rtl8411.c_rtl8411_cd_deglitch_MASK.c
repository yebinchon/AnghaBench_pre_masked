
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtsx_pcr*,char*,unsigned int) ;
 unsigned int FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*,int ,int,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct rtsx_pcr *VAR_14)
{
 unsigned int VAR_15;

 VAR_15 = FUNC_3(VAR_14, VAR_11);
 VAR_15 &= VAR_3;
 if (!VAR_15) {

  FUNC_4(VAR_14, VAR_7,
    VAR_5, VAR_6);

  FUNC_4(VAR_14, VAR_8, 0xe0, 0x00);
  return 0;
 }

 if (FUNC_0(VAR_15) > 1) {
  FUNC_4(VAR_14, VAR_4,
    VAR_1, VAR_0);
  FUNC_1(100);

  VAR_15 = FUNC_3(VAR_14, VAR_11);
  if (VAR_15 & VAR_10)
   VAR_15 = VAR_10;
  else if (VAR_15 & VAR_13)
   VAR_15 = VAR_13;
  else
   VAR_15 = 0;

  FUNC_4(VAR_14, VAR_4,
    VAR_1, VAR_2);

  FUNC_2(VAR_14, "After CD deglitch, card_exist = 0x%x\n",
   VAR_15);
 }

 if (VAR_15 & VAR_10) {

  FUNC_4(VAR_14, VAR_8, 0xe0, 0x40);
  FUNC_4(VAR_14, VAR_7,
    VAR_5, VAR_9);
 } else if (VAR_15 & VAR_13) {

  FUNC_4(VAR_14, VAR_8, 0xe0, 0x80);
  FUNC_4(VAR_14, VAR_7,
    VAR_5, VAR_12);
 }

 return VAR_15;
}

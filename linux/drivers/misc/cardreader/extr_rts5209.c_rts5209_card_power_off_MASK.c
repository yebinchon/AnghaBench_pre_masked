
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_pcr {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_12, int VAR_13)
{
 u8 VAR_14, VAR_15;

 VAR_14 = VAR_9;
 VAR_15 = VAR_10;

 if ((VAR_12->flags & VAR_4) && (VAR_13 == VAR_8)) {
  VAR_14 = VAR_2;
  VAR_15 = VAR_3;
 }

 FUNC_1(VAR_12);
 FUNC_0(VAR_12, VAR_11, VAR_0,
   VAR_14 | VAR_6, VAR_15 | VAR_5);
 FUNC_0(VAR_12, VAR_11, VAR_7,
   VAR_1, 0x06);
 return FUNC_2(VAR_12, 100);
}

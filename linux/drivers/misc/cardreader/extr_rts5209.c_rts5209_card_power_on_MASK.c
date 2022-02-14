
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
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_12, int VAR_13)
{
 int VAR_14;
 u8 VAR_15, VAR_16, VAR_17;

 VAR_15 = VAR_9;
 VAR_16 = VAR_8;
 VAR_17 = VAR_10;

 if ((VAR_12->flags & VAR_5) && (VAR_13 == VAR_7)) {
  VAR_15 = VAR_3;
  VAR_16 = VAR_2;
  VAR_17 = VAR_4;
 }

 FUNC_1(VAR_12);
 FUNC_0(VAR_12, VAR_11, VAR_0,
   VAR_15, VAR_16);
 FUNC_0(VAR_12, VAR_11, VAR_6,
   VAR_1, 0x04);
 VAR_14 = FUNC_2(VAR_12, 100);
 if (VAR_14 < 0)
  return VAR_14;


 FUNC_3(150);

 FUNC_1(VAR_12);
 FUNC_0(VAR_12, VAR_11, VAR_0, VAR_15, VAR_17);
 FUNC_0(VAR_12, VAR_11, VAR_6,
   VAR_1, 0x00);
 return FUNC_2(VAR_12, 100);
}

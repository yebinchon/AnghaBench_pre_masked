
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static int FUNC_4(struct rtsx_pcr *VAR_21)
{
 int VAR_22;

 FUNC_1(VAR_21);

 FUNC_0(VAR_21, VAR_20, VAR_3,
    VAR_0, VAR_5);

 FUNC_0(VAR_21, VAR_20, VAR_4, 0xFF, 0x00);
 FUNC_0(VAR_21, VAR_20, VAR_11,
    VAR_1, VAR_1);
 FUNC_0(VAR_21, VAR_20, VAR_12, 0xFF, 0xFF);
 FUNC_0(VAR_21, VAR_20, VAR_14,
    VAR_15, VAR_15);
 FUNC_0(VAR_21, VAR_20, VAR_17,
    VAR_13, VAR_13);
 FUNC_0(VAR_21, VAR_20, VAR_16,
    VAR_19, VAR_18);

 if (VAR_21->flags & VAR_9)
  FUNC_0(VAR_21, VAR_20, VAR_10, 0xB0, 0xB0);
 else
  FUNC_0(VAR_21, VAR_20, VAR_10, 0xB0, 0x80);

 FUNC_0(VAR_21, VAR_20, VAR_6,
    VAR_8, VAR_7);

 VAR_22 = FUNC_3(VAR_21, VAR_2);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_2(VAR_21);

 return 0;
}

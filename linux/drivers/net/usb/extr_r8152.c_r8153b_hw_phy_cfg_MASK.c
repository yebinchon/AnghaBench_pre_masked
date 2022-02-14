
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int eee_ckdiv; int eee_cmod_lv; int _10m_ckdiv; int eee_plloff_giga; int _250m_ckdiv; } ;
struct r8152 {int flags; scalar_t__ eee_en; TYPE_1__ ups_info; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int) ;
 int FUNC_3 (struct r8152*,int,int) ;
 int FUNC_4 (struct r8152*,int ,int ,int) ;
 int FUNC_5 (struct r8152*,int) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (struct r8152*,int) ;
 int FUNC_8 (struct r8152*,int) ;
 int FUNC_9 (struct r8152*,int) ;
 int FUNC_10 (struct r8152*,int ) ;
 int FUNC_11 (struct r8152*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct r8152*,int ) ;
 int FUNC_14 (struct r8152*,int ,int) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct r8152 *VAR_20)
{
 u32 VAR_21;
 u16 VAR_22;


 FUNC_7(VAR_20, 0);


 FUNC_11(VAR_20, 0);

 FUNC_10(VAR_20, FUNC_15(VAR_4, &VAR_20->flags));

 VAR_22 = FUNC_13(VAR_20, VAR_18);
 VAR_22 |= VAR_16;
 FUNC_14(VAR_20, VAR_18, VAR_22);
 VAR_22 = FUNC_2(VAR_20, VAR_9);
 VAR_22 |= VAR_13;
 FUNC_3(VAR_20, VAR_9, VAR_22);






 VAR_21 = FUNC_5(VAR_20, 0x7d);
 VAR_22 = (u16)(((VAR_21 & 0x1fff0) >> 1) | (VAR_21 & 0x7));
 if (VAR_22 != 0xffff)
  FUNC_3(VAR_20, VAR_7, VAR_22);





 VAR_21 = FUNC_2(VAR_20, 0xc426);
 VAR_21 &= 0x3fff;
 if (VAR_21) {
  u32 VAR_23;

  VAR_23 = (16000000 / VAR_21) & VAR_17;
  VAR_21 = FUNC_1(VAR_20, VAR_6, VAR_19);
  VAR_21 = (VAR_21 & ~VAR_17) | VAR_23;
  FUNC_4(VAR_20, VAR_6, VAR_19, VAR_21);
 }

 VAR_21 = FUNC_1(VAR_20, VAR_5, VAR_15);
 VAR_21 |= VAR_12;
 FUNC_4(VAR_20, VAR_5, VAR_15, VAR_21);


 if (!FUNC_8(VAR_20, 1)) {
  VAR_22 = FUNC_2(VAR_20, VAR_10);
  VAR_22 |= VAR_0;
  FUNC_3(VAR_20, VAR_10, VAR_22);
  VAR_20->ups_info.eee_ckdiv = 1;

  VAR_22 = FUNC_2(VAR_20, VAR_8);
  VAR_22 |= VAR_3 | VAR_2 | VAR_1;
  FUNC_3(VAR_20, VAR_8, VAR_22);
  VAR_20->ups_info.eee_cmod_lv = 1;
  VAR_20->ups_info._10m_ckdiv = 1;
  VAR_20->ups_info.eee_plloff_giga = 1;

  FUNC_3(VAR_20, VAR_11, 0);
  FUNC_3(VAR_20, VAR_11, FUNC_0(5));
  VAR_20->ups_info._250m_ckdiv = 1;

  FUNC_8(VAR_20, 0);
 }

 if (VAR_20->eee_en)
  FUNC_11(VAR_20, 1);

 FUNC_7(VAR_20, 1);
 FUNC_6(VAR_20);
 FUNC_9(VAR_20, 1);

 FUNC_12(VAR_14, &VAR_20->flags);
}

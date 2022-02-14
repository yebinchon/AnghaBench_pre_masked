
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum qm_dc_portal { ____Placeholder_qm_dc_portal } qm_dc_portal ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(enum qm_dc_portal VAR_4, int VAR_5, u8 VAR_6)
{
 FUNC_0(!VAR_5 || VAR_4 == VAR_1 ||
      VAR_4 == VAR_2);
 if ((VAR_3 & 0xFF00) >= VAR_0)
  FUNC_2(FUNC_1(VAR_4),
       (VAR_5 ? 0x1000 : 0) | (VAR_6 & 0x3ff));
 else
  FUNC_2(FUNC_1(VAR_4),
       (VAR_5 ? 0x100 : 0) | (VAR_6 & 0x1f));
}

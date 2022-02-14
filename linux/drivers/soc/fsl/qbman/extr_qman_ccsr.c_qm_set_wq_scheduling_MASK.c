
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum qm_wq_class { ____Placeholder_qm_wq_class } qm_wq_class ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(enum qm_wq_class VAR_0,
     u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
     u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 FUNC_1(FUNC_0(VAR_0), ((VAR_1 & 0xff) << 24) |
      ((VAR_2 & 0x7) << 20) | ((VAR_3 & 0x7) << 16) |
      ((VAR_4 & 0x7) << 12) | ((VAR_5 & 0x7) << 8) |
      ((VAR_6 & 0x7) << 4) | (VAR_7 & 0x7));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum i2400m_brh_opcode { ____Placeholder_i2400m_brh_opcode } i2400m_brh_opcode ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline
__le32 FUNC_1(enum i2400m_brh_opcode VAR_5, unsigned VAR_6,
     unsigned VAR_7)
{
 return FUNC_0(
  VAR_3
  | (VAR_7 ? VAR_0 : 0)
  | VAR_2
  | (VAR_6 ? VAR_4 : 0)
  | (VAR_5 & VAR_1));
}

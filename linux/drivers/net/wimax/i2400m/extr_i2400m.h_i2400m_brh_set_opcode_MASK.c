
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bootrom_header {int command; } ;
typedef enum i2400m_brh_opcode { ____Placeholder_i2400m_brh_opcode } i2400m_brh_opcode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline
void FUNC_2(struct i2400m_bootrom_header *VAR_1,
      enum i2400m_brh_opcode VAR_2)
{
 VAR_1->command = FUNC_0(
  (FUNC_1(VAR_1->command) & ~VAR_0)
  | (VAR_2 & VAR_0));
}

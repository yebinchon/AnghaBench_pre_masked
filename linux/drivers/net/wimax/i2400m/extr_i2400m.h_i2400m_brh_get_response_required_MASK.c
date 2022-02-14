
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bootrom_header {int command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline
unsigned FUNC_1(
 const struct i2400m_bootrom_header *VAR_1)
{
 return FUNC_0(VAR_1->command) & VAR_0;
}

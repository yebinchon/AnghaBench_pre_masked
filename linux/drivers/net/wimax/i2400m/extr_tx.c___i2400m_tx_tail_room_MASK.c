
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {size_t tx_in; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline
size_t FUNC_1(struct i2400m *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3;

 if (FUNC_0(VAR_1->tx_in == 0))
  return VAR_0;
 VAR_3 = VAR_1->tx_in % VAR_0;
 VAR_2 = VAR_0 - VAR_3;
 VAR_2 %= VAR_0;
 return VAR_2;
}

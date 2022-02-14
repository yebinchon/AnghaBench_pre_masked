
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_pld {int val; } ;
typedef enum i2400m_pt { ____Placeholder_i2400m_pt } i2400m_pt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline
enum i2400m_pt FUNC_1(const struct i2400m_pld *VAR_2)
{
 return (VAR_0 & FUNC_0(VAR_2->val))
  >> VAR_1;
}

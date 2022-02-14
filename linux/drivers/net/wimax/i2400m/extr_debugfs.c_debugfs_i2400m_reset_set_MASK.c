
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i2400m {int dummy; } ;
typedef enum i2400m_reset_type { ____Placeholder_i2400m_reset_type } i2400m_reset_type ;


 int VAR_0 ;



 int FUNC_0 (struct i2400m*,int) ;

__attribute__((used)) static
int FUNC_1(void *VAR_1, u64 VAR_2)
{
 int VAR_3;
 struct i2400m *VAR_4 = VAR_1;
 enum i2400m_reset_type VAR_5 = VAR_2;
 switch(VAR_5) {
 case 128:
 case 129:
 case 130:
  VAR_3 = FUNC_0(VAR_4, VAR_5);
  if (VAR_3 >= 0)
   VAR_3 = 0;
  break;
 default:
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct qla_hw_data*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct qla_hw_data *VAR_2, uint32_t VAR_3, uint8_t VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
 int VAR_7;
 uint8_t VAR_8;
 uint32_t VAR_9;

 VAR_7 = 1;


 VAR_4 &= VAR_1;
 for (VAR_9 = 3000000; VAR_9; VAR_9--) {
  VAR_8 = FUNC_2(VAR_2, VAR_3);
  if ((VAR_8 & VAR_1) == VAR_4) {
   VAR_7 = 0;
   break;
  }

  if (VAR_5 != 0x40 && VAR_5 != 0xda) {
   if ((VAR_8 & VAR_0) && VAR_9 > 2)
    VAR_9 = 2;
  }
  FUNC_3(10);
  FUNC_0();
  FUNC_1();
 }
 return VAR_7;
}

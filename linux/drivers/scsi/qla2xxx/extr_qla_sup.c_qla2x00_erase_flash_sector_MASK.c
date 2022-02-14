
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;


 int FUNC_0 (struct qla_hw_data*,int,int,int,int) ;
 int FUNC_1 (struct qla_hw_data*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct qla_hw_data *VAR_0, uint32_t VAR_1,
    uint32_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{

 FUNC_1(VAR_0, 0x5555, 0xaa);
 FUNC_1(VAR_0, 0x2aaa, 0x55);
 FUNC_1(VAR_0, 0x5555, 0x80);
 FUNC_1(VAR_0, 0x5555, 0xaa);
 FUNC_1(VAR_0, 0x2aaa, 0x55);
 if (VAR_3 == 0x1f && VAR_4 == 0x13)
  FUNC_1(VAR_0, VAR_1 & VAR_2, 0x10);
 else
  FUNC_1(VAR_0, VAR_1 & VAR_2, 0x30);

 FUNC_2(150);


 return FUNC_0(VAR_0, VAR_1, 0x80, VAR_3, VAR_4);
}

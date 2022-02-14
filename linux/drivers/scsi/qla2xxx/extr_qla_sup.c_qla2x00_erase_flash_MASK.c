
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qla_hw_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*,int,int,int ,int ) ;
 int FUNC_2 (struct qla_hw_data*,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct qla_hw_data *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{

 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, 0xaaa, 0xaa);
  FUNC_2(VAR_0, 0x555, 0x55);
  FUNC_2(VAR_0, 0xaaa, 0x80);
  FUNC_2(VAR_0, 0xaaa, 0xaa);
  FUNC_2(VAR_0, 0x555, 0x55);
  FUNC_2(VAR_0, 0xaaa, 0x10);
 } else {
  FUNC_2(VAR_0, 0x5555, 0xaa);
  FUNC_2(VAR_0, 0x2aaa, 0x55);
  FUNC_2(VAR_0, 0x5555, 0x80);
  FUNC_2(VAR_0, 0x5555, 0xaa);
  FUNC_2(VAR_0, 0x2aaa, 0x55);
  FUNC_2(VAR_0, 0x5555, 0x10);
 }

 FUNC_3(150);


 return FUNC_1(VAR_0, 0x00, 0x80, VAR_1, VAR_2);
}

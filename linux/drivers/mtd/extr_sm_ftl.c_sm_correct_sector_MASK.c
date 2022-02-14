
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sm_oob {int ecc2; int ecc1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_3, struct sm_oob *VAR_4)
{
 uint8_t VAR_5[3];

 FUNC_1(VAR_3, VAR_2, VAR_5,
        FUNC_0(VAR_0));
 if (FUNC_2(VAR_3, VAR_5, VAR_4->ecc1, VAR_2,
    FUNC_0(VAR_0)) < 0)
  return -VAR_1;

 VAR_3 += VAR_2;

 FUNC_1(VAR_3, VAR_2, VAR_5,
        FUNC_0(VAR_0));
 if (FUNC_2(VAR_3, VAR_5, VAR_4->ecc2, VAR_2,
    FUNC_0(VAR_0)) < 0)
  return -VAR_1;
 return 0;
}

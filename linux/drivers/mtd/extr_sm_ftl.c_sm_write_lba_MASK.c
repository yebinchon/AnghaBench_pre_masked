
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sm_oob {int* lba_copy1; int* lba_copy2; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct sm_oob *VAR_0, uint16_t VAR_1)
{
 uint8_t VAR_2[2];

 FUNC_0(VAR_1 >= 1000);

 VAR_2[0] = 0x10 | ((VAR_1 >> 7) & 0x07);
 VAR_2[1] = (VAR_1 << 1) & 0xFF;

 if (FUNC_1(*(uint16_t *)VAR_2) & 0x01)
  VAR_2[1] |= 1;

 VAR_0->lba_copy1[0] = VAR_0->lba_copy2[0] = VAR_2[0];
 VAR_0->lba_copy1[1] = VAR_0->lba_copy2[1] = VAR_2[1];
}

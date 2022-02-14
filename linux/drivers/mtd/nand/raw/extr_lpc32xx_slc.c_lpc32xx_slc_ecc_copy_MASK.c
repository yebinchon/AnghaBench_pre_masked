
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint32_t *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (VAR_2 * 3); VAR_3 += 3) {
  uint32_t VAR_4 = VAR_1[VAR_3 / 3];
  VAR_4 = ~(VAR_4 << 2) & 0xFFFFFF;
  VAR_0[VAR_3 + 2] = (uint8_t)(VAR_4 & 0xFF);
  VAR_4 >>= 8;
  VAR_0[VAR_3 + 1] = (uint8_t)(VAR_4 & 0xFF);
  VAR_4 >>= 8;
  VAR_0[VAR_3] = (uint8_t)(VAR_4 & 0xFF);
 }
}

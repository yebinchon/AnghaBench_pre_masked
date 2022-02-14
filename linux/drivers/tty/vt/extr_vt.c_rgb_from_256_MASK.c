
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rgb {int r; int g; int b; } ;



__attribute__((used)) static void FUNC_0(int VAR_0, struct rgb *VAR_1)
{
 if (VAR_0 < 8) {
  VAR_1->r = VAR_0&1 ? 0xaa : 0x00;
  VAR_1->g = VAR_0&2 ? 0xaa : 0x00;
  VAR_1->b = VAR_0&4 ? 0xaa : 0x00;
 } else if (VAR_0 < 16) {
  VAR_1->r = VAR_0&1 ? 0xff : 0x55;
  VAR_1->g = VAR_0&2 ? 0xff : 0x55;
  VAR_1->b = VAR_0&4 ? 0xff : 0x55;
 } else if (VAR_0 < 232) {
  VAR_1->r = (VAR_0 - 16) / 36 * 85 / 2;
  VAR_1->g = (VAR_0 - 16) / 6 % 6 * 85 / 2;
  VAR_1->b = (VAR_0 - 16) % 6 * 85 / 2;
 } else
  VAR_1->r = VAR_1->g = VAR_1->b = VAR_0 * 10 - 2312;
}

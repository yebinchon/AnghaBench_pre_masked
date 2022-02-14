
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 int VAR_1 = 1;

 if (!VAR_0)
  return 0;
 if (!(VAR_0 & 0xffff)) {
  VAR_0 >>= 16;
  VAR_1 += 16;
 }
 if (!(VAR_0 & 0xff)) {
  VAR_0 >>= 8;
  VAR_1 += 8;
 }
 if (!(VAR_0 & 0xf)) {
  VAR_0 >>= 4;
  VAR_1 += 4;
 }
 if (!(VAR_0 & 3)) {
  VAR_0 >>= 2;
  VAR_1 += 2;
 }
 if (!(VAR_0 & 1)) {
  VAR_0 >>= 1;
  VAR_1 += 1;
 }
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;
 int FUNC_0 (char*,unsigned char const,...) ;

int FUNC_1(const unsigned char *VAR_1)
{
 int VAR_2 = 1, VAR_3;

 if (VAR_1[0] == VAR_0) {
  VAR_2 = 2 + VAR_1[1];
  if (VAR_2 == 2)
   VAR_2 += 256;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   FUNC_0("%02x ", VAR_1[VAR_3]);

 } else if (VAR_1[0] & 0x80) {
  FUNC_0("%02x ", VAR_1[0]);

 } else if ((VAR_1[0] < 0x1f) || (VAR_1[0] == 0x55)) {
  FUNC_0("%02x ", VAR_1[0]);

 } else if (VAR_1[0] <= 0x2f) {
  FUNC_0("%02x %02x", VAR_1[0], VAR_1[1]);
  VAR_2 = 2;
 } else
  FUNC_0("%02x ", VAR_1[0]);
 return VAR_2;
}

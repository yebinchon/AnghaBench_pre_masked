
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(const int VAR_1[], const char* VAR_2)
{
 static const unsigned char VAR_3[6] = {0x80, 0x11, 0x00, 0x00, 0x00, 0x00};
 static const unsigned char VAR_4[6] = {0x80, 0x16, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_5[7];
 int VAR_6;

 FUNC_2(1);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_5[3] != 0xf1) {
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (VAR_6)
   return VAR_6;
  return -VAR_0;
 }
 FUNC_3(1000);
 return FUNC_1(VAR_1, VAR_2);
}

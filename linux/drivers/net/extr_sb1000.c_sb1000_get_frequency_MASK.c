
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int const*,char const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(const int VAR_0[], const char* VAR_1, int* VAR_2)
{
 static const unsigned char VAR_3[6] = {0x80, 0x44, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_4[7];
 int VAR_5;

 FUNC_3(1000);
 if ((VAR_5 = FUNC_2(VAR_0, VAR_1)))
  return VAR_5;
 if ((VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4)))
  return VAR_5;
 *VAR_2 = ((VAR_4[1] << 8 | VAR_4[2]) << 8 | VAR_4[3]) << 8 | VAR_4[4];
 return FUNC_1(VAR_0, VAR_1);
}

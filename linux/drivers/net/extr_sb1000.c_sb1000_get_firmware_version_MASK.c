
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const int VAR_1[], const char* VAR_2,
 unsigned char VAR_3[], int VAR_4)
{
 static const unsigned char VAR_5[6] = {0x80, 0x23, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_6[7];
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_1, VAR_2)))
  return VAR_7;
 if ((VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6)))
  return VAR_7;
 if (VAR_6[0] != 0xa3)
  return -VAR_0;
 VAR_3[0] = VAR_6[1];
 VAR_3[1] = VAR_6[2];
 if (VAR_4)
  return FUNC_1(VAR_1, VAR_2);
 else
  return 0;
}

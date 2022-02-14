
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;

__attribute__((used)) static int
FUNC_1(const int VAR_1[], const char* VAR_2)
{
 static const unsigned char VAR_3[6] = {0x80, 0x1f, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_4[7];
 int VAR_5;


 if ((VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4)))
  return VAR_5;
 if (VAR_4[1] != VAR_4[3] || VAR_4[2] != VAR_4[4])
  return -VAR_0;
 return 0;
}

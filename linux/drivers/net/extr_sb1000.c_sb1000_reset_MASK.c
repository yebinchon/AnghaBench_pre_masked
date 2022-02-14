
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(const int VAR_1[], const char* VAR_2)
{
 static const unsigned char VAR_3[6] = {0x80, 0x16, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_4[7];
 int VAR_5, VAR_6;

 VAR_5 = VAR_1[1] + 6;
 FUNC_2(0x4, VAR_5);
 FUNC_1(VAR_5);
 FUNC_4(1000);
 FUNC_2(0x0, VAR_5);
 FUNC_1(VAR_5);
 FUNC_3(1);
 FUNC_2(0x4, VAR_5);
 FUNC_1(VAR_5);
 FUNC_4(1000);
 FUNC_2(0x0, VAR_5);
 FUNC_1(VAR_5);
 FUNC_4(0);

 if ((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4)))
  return VAR_6;
 if (VAR_4[3] != 0xf0)
  return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*,char const*,unsigned char const*,unsigned char*) ;
 int FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int const*,char const*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(const int VAR_0[], const char* VAR_1, const short VAR_2[])
{
 static const unsigned char VAR_3[6] = {0x80, 0x2e, 0x00, 0x00, 0x00, 0x00};

 unsigned char VAR_4[7];
 short VAR_5;
 int VAR_6;
 unsigned char VAR_7[6] = {0x80, 0x31, 0x00, 0x00, 0x00, 0x00};
 unsigned char VAR_8[6] = {0x80, 0x32, 0x00, 0x00, 0x00, 0x00};
 unsigned char VAR_9[6] = {0x80, 0x33, 0x00, 0x00, 0x00, 0x00};
 unsigned char VAR_10[6] = {0x80, 0x34, 0x00, 0x00, 0x00, 0x00};

 FUNC_3(1000);
 if ((VAR_6 = FUNC_2(VAR_0, VAR_1)))
  return VAR_6;

 VAR_5 = VAR_2[0];
 VAR_7[3] = VAR_5 & 0xff;
 VAR_5 >>= 8;
 VAR_7[2] = VAR_5 & 0xff;
 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_7, VAR_4)))
  return VAR_6;

 VAR_5 = VAR_2[1];
 VAR_8[3] = VAR_5 & 0xff;
 VAR_5 >>= 8;
 VAR_8[2] = VAR_5 & 0xff;
 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_8, VAR_4)))
  return VAR_6;

 VAR_5 = VAR_2[2];
 VAR_9[3] = VAR_5 & 0xff;
 VAR_5 >>= 8;
 VAR_9[2] = VAR_5 & 0xff;
 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_9, VAR_4)))
  return VAR_6;

 VAR_5 = VAR_2[3];
 VAR_10[3] = VAR_5 & 0xff;
 VAR_5 >>= 8;
 VAR_10[2] = VAR_5 & 0xff;
 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_10, VAR_4)))
  return VAR_6;

 if ((VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4)))
  return VAR_6;
 return FUNC_1(VAR_0, VAR_1);
}

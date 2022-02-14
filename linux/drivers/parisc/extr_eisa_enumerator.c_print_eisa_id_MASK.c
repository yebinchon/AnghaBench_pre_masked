
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (char*,char*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, u_int32_t VAR_1)
{
 char VAR_2[4];
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1 & 0xff;
 VAR_1 >>= 8;
 VAR_4 = VAR_1 & 0xff;
 VAR_1 >>= 8;
 VAR_2[3] = '\0';
 VAR_2[2] = '@' + (VAR_1 & 0x1f);
 VAR_1 >>= 5;
 VAR_2[1] = '@' + (VAR_1 & 0x1f);
 VAR_1 >>= 5;
 VAR_2[0] = '@' + (VAR_1 & 0x1f);
 VAR_1 >>= 5;

 FUNC_0(VAR_0, "%s%02X%02X", VAR_2, VAR_4, VAR_3);
}

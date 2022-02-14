
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;


 int FUNC_0 (char*,int ,char const*,int,int) ;

char *FUNC_1(u32 VAR_0, u32 VAR_1, char *VAR_2, uint VAR_3)
{
 const char *VAR_4;

 VAR_4 = ((VAR_0 > 0xa000) || (VAR_0 < 0x4000)) ? "BCM%d/%u" : "BCM%x/%u";
 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, VAR_1);
 return VAR_2;
}

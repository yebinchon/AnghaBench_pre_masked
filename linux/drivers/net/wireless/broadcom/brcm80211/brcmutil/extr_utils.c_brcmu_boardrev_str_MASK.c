
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char,int) ;

char *FUNC_1(u32 VAR_1, char *VAR_2)
{
 char VAR_3;

 if (VAR_1 < 0x100) {
  FUNC_0(VAR_2, VAR_0, "%d.%d",
    (VAR_1 & 0xf0) >> 4, VAR_1 & 0xf);
 } else {
  VAR_3 = (VAR_1 & 0xf000) == 0x1000 ? 'P' : 'A';
  FUNC_0(VAR_2, VAR_0, "%c%03x", VAR_3, VAR_1 & 0xfff);
 }
 return VAR_2;
}

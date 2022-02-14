
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (unsigned char*,int ,size_t) ;
 int FUNC_1 (unsigned char*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_6, size_t VAR_7,
          bool VAR_8)
{
 if (VAR_7 < VAR_4)
  return -VAR_3;
 FUNC_0(VAR_6, 0, VAR_4);
 VAR_6[2] = VAR_5;
 if (VAR_8) {
  VAR_6[0] = VAR_0;
  VAR_6[3] = VAR_1;
 } else {
  VAR_6[0] = VAR_2;
 }
 VAR_6[4] = VAR_4 - 5;
 FUNC_1(VAR_6 + 8, "DELLPSEUDO DEVICE .", VAR_4 - 8);
 return 0;
}

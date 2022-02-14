
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_1, unsigned char *VAR_2)
{
 unsigned char VAR_3;

 if ((((unsigned long) VAR_1[1 + 6]) & ~0x01) != 0)

  return;
 if ((unsigned short) VAR_1[1 + 10] != 0)
  return;
 VAR_3 = VAR_1[1 + 6] & 0x01;
 FUNC_0(&VAR_1[1 + 6], VAR_2, VAR_0);
 VAR_1[8] |= VAR_3;
}

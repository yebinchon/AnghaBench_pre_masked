
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int format_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int ,unsigned char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_3, int VAR_4, int VAR_5)
{
 unsigned char VAR_6[] = {0x3, 0x16, 0, 0, 0, 0, 0, 0,
         0, 0, 0, 0, 0, 0, 0, 0,
         0, 0, 0, 0, 0x40, 0, 0, 0};

 FUNC_0(VAR_3, VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_2, VAR_3 + 10);
 FUNC_2(VAR_1, VAR_3 + 12);
 if (VAR_0)
  VAR_3[20] |= 0x20;
 if (1 == VAR_4)
  FUNC_1(VAR_3 + 2, 0, sizeof(VAR_6) - 2);
 return sizeof(VAR_6);
}

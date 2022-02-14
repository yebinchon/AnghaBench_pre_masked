
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sas_pcd_m_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (scalar_t__,unsigned char*) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_2, int VAR_3, int VAR_4,
         int VAR_5)
{
 unsigned char VAR_6[] = {0x59, 0x1, 0, 0x64, 0, 0x6, 0, 2,
      0, 0, 0, 0, 0x10, 0x9, 0x8, 0x0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0x2, 0, 0, 0, 0, 0, 0, 0,
      0x88, 0x99, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 1, 0, 0, 0x10, 0x9, 0x8, 0x0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0x3, 0, 0, 0, 0, 0, 0, 0,
      0x88, 0x99, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
  };
 int VAR_7, VAR_8;

 FUNC_3(VAR_0, VAR_6 + 16);
 FUNC_3(VAR_1 + 1, VAR_6 + 24);
 FUNC_3(VAR_0, VAR_6 + 64);
 FUNC_3(VAR_1 + 1, VAR_6 + 72);
 VAR_7 = VAR_5 + 1;
 VAR_8 = VAR_7 + 1;
 FUNC_0(VAR_2, VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_7, VAR_2 + 20);
 FUNC_2(VAR_8, VAR_2 + 48 + 20);
 if (1 == VAR_3)
  FUNC_1(VAR_2 + 4, 0, sizeof(VAR_6) - 4);
 return sizeof(VAR_6);
}

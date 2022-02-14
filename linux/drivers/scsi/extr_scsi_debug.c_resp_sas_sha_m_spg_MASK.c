
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sas_sha_m_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, int VAR_1)
{
 unsigned char VAR_2[] = {0x59, 0x2, 0, 0xc, 0, 0x6, 0x10, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
  };

 FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
 if (1 == VAR_1)
  FUNC_1(VAR_0 + 4, 0, sizeof(VAR_2) - 4);
 return sizeof(VAR_2);
}

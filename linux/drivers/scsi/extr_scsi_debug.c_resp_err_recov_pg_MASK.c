
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int err_recov_pg ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, int VAR_1, int VAR_2)
{
 unsigned char VAR_3[] = {0x1, 0xa, 0xc0, 11, 240, 0, 0, 0,
     5, 0, 0xff, 0xff};

 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));
 if (1 == VAR_1)
  FUNC_1(VAR_0 + 2, 0, sizeof(VAR_3) - 2);
 return sizeof(VAR_3);
}

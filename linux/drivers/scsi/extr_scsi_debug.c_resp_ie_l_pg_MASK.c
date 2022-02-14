
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ie_l_pg ;


 unsigned char VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_2)
{
 unsigned char VAR_3[] = {0x0, 0x0, 0x3, 0x3, 0x0, 0x0, 38,
  };

 FUNC_0(VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_1[2] & 0x4) {
  VAR_2[4] = VAR_0;
  VAR_2[5] = 0xff;
 }
 return sizeof(VAR_3);
}

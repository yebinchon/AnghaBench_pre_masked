
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_4)
{
 FUNC_0(VAR_4, 0, 0x4);
 VAR_4[0] = 0;
 if (VAR_1)
  VAR_4[1] = 1 << 7;
 if (VAR_2)
  VAR_4[1] |= 1 << 6;
 if (VAR_3)
  VAR_4[1] |= 1 << 5;
 if (VAR_0 && FUNC_1())
  VAR_4[1] |= (VAR_0 & 0x7) << 2;



 return 0x4;
}

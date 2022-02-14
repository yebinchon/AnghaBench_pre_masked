
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (int,int*,unsigned char*,unsigned char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0,
         unsigned char *VAR_1,
         uint32_t VAR_2, uint32_t VAR_3)
{
 int VAR_4[8];
 int VAR_5;

 for (VAR_5=0; VAR_5<8; VAR_5++)
  VAR_4[VAR_5] = VAR_0[VAR_5];

 FUNC_0(256, VAR_4, VAR_0+8, VAR_1, VAR_2-8,
       VAR_3);
 return 0;
}

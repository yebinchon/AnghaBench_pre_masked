
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, u64 VAR_1, u32 VAR_2)
{
 if (VAR_1 <= 0xffffffff)
  return FUNC_2(VAR_0 + 3, VAR_1, VAR_2) + 3;

 *VAR_0++ = 1;
 VAR_0 += 2;
 *VAR_0++ = 16;
 FUNC_1(VAR_1, VAR_0);
 VAR_0 += 12;
 FUNC_0(VAR_2, VAR_0);

 return 17;
}

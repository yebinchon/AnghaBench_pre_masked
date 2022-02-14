
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int*,size_t) ;
 int FUNC_1 (void*,int,int*,size_t) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2,
       size_t VAR_3)
{
 u8 *VAR_4 = (u8 *)VAR_2;
 u8 VAR_5 = VAR_4[0];
 ++VAR_4;
 --VAR_3;

 if (VAR_5 > 0xa0)
  return FUNC_1(VAR_1, VAR_5, VAR_4, VAR_3);

 if (VAR_3 > 2)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_5, VAR_4, VAR_3);
}

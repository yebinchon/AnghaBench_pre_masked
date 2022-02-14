
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (void*,int*,int) ;
 int FUNC_1 (void*,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u8 VAR_3[2];

 FUNC_1(VAR_0, VAR_1, 0);
 VAR_2 = FUNC_0(VAR_0, VAR_3, 2);
 if (VAR_2 < 0)
  return VAR_2;

 return (VAR_3[0] << 8) | VAR_3[1];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

u16 FUNC_3(u64 VAR_3)
{
 u16 VAR_4;

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (!FUNC_2(VAR_4))
  VAR_4 = FUNC_0(VAR_1, VAR_3);

 return (VAR_4 & 0xff) | FUNC_0(VAR_2, VAR_3) << 8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct esas2r_adapter {int flash_ver; } ;
typedef int bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*,int *,scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

bool FUNC_4(struct esas2r_adapter *VAR_4)
{
 u8 VAR_5[256];
 u16 *VAR_6;
 u16 *VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u32 VAR_10;

 VAR_10 = sizeof(VAR_5);
 VAR_6 = (u16 *)(VAR_5 + VAR_10);
 VAR_7 = (u16 *)VAR_5 + 2;

 if (!FUNC_1(VAR_4, VAR_5, VAR_3 - VAR_10, VAR_10))
  goto invalid_rev;

 while (VAR_6 >= VAR_7) {
  VAR_6--;
  VAR_8 = FUNC_2(*VAR_6);
  VAR_6--;
  VAR_9 = FUNC_2(*VAR_6);
  VAR_6 -= VAR_9 / 2;

  if (VAR_8 == VAR_0
      || VAR_8 == VAR_2
      || VAR_6 < VAR_7)
   continue;

  if (VAR_8 == VAR_1)
   VAR_4->flash_ver = FUNC_3(*(u32 *)VAR_6);

  break;
 }

invalid_rev:
 return FUNC_0(VAR_4);
}

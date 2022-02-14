
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rio_mport*,int,int*) ;
 int FUNC_3 (struct rio_mport*,int ,int ,int,int*) ;

u32
FUNC_4(struct rio_mport * VAR_2, int VAR_3, u16 VAR_4,
        u8 VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 if (VAR_3)
  FUNC_2(VAR_2, VAR_0, &VAR_7);
 else
  FUNC_3(VAR_2, VAR_4, VAR_5,
      VAR_0, &VAR_7);

 VAR_8 = VAR_7 & VAR_1;

 while (VAR_8) {
  if (VAR_3)
   FUNC_2(VAR_2, VAR_8,
       &VAR_9);
  else
   FUNC_3(VAR_2, VAR_4, VAR_5,
       VAR_8, &VAR_9);
  if (FUNC_0(VAR_9) == VAR_6)
   return VAR_8;

  VAR_8 = FUNC_1(VAR_9);
  if (!VAR_8)
   break;
 }

 return 0;
}

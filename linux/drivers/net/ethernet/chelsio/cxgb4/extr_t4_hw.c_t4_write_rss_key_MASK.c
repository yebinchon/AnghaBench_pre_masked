
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,void*,int,int ,int) ;
 int FUNC_7 (struct adapter*,int ,int) ;

void FUNC_8(struct adapter *VAR_5, const u32 *VAR_6, int VAR_7,
        bool VAR_8)
{
 u8 VAR_9 = 16;
 u32 VAR_10 = FUNC_5(VAR_5, VAR_3);





 if ((FUNC_0(VAR_5->params.chip) > VAR_0) &&
     (VAR_10 & VAR_1) && (FUNC_1(VAR_10) == 3))
  VAR_9 = 32;

 FUNC_6(VAR_5, (void *)VAR_6, 10, VAR_4, VAR_8);

 if (VAR_7 >= 0 && VAR_7 < VAR_9) {
  if (VAR_9 > 16)
   FUNC_7(VAR_5, VAR_3,
         FUNC_2(VAR_7 >> 4) |
         FUNC_4(VAR_7) | VAR_2);
  else
   FUNC_7(VAR_5, VAR_3,
         FUNC_3(VAR_7) | VAR_2);
 }
}

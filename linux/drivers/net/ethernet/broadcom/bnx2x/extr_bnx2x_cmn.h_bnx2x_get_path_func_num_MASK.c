
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int config; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline u8 FUNC_6(struct bnx2x *VAR_3)
{
 u8 VAR_4 = 0, VAR_5;


 if (FUNC_1(VAR_3))
  return 1;




 if (FUNC_2(VAR_3)) {
  if (FUNC_3(VAR_3))
   VAR_4 = 4;
  else
   VAR_4 = 2;
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_0 / 2; VAR_5++) {
   u32 VAR_6 =
    FUNC_4(VAR_3,
       VAR_2[FUNC_0(VAR_3) + 2 * VAR_5].
       config);
   VAR_4 +=
    ((VAR_6 & VAR_1) ? 0 : 1);
  }
 }

 FUNC_5(!VAR_4);

 return VAR_4;
}

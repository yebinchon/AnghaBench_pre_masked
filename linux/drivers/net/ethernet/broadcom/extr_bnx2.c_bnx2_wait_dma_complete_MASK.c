
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_11)
{
 u32 VAR_12;
 int VAR_13;





 if ((FUNC_0(VAR_11) == VAR_0) ||
     (FUNC_0(VAR_11) == VAR_1)) {
  FUNC_2(VAR_11, VAR_2,
   VAR_6 |
   VAR_3 |
   VAR_5 |
   VAR_4);
  VAR_12 = FUNC_1(VAR_11, VAR_2);
  FUNC_4(5);
 } else {
  VAR_12 = FUNC_1(VAR_11, VAR_7);
  VAR_12 &= ~VAR_8;
  FUNC_2(VAR_11, VAR_7, VAR_12);
  VAR_12 = FUNC_1(VAR_11, VAR_7);

  for (VAR_13 = 0; VAR_13 < 100; VAR_13++) {
   FUNC_3(1);
   VAR_12 = FUNC_1(VAR_11, VAR_9);
   if (!(VAR_12 & VAR_10))
    break;
  }
 }

 return;
}

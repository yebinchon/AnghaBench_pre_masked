
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*,int) ;

__attribute__((used)) static inline void FUNC_4(struct bnx2x *VAR_3)
{
 int VAR_4;
 int VAR_5;


 for (VAR_5 = VAR_2; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  if (VAR_5 == FUNC_1(VAR_3))
   continue;

  VAR_4 = FUNC_3(VAR_3, VAR_5);
  FUNC_2(VAR_3, VAR_1 +
         (VAR_0 + VAR_4)*4, 1);
 }
}

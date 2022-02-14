
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt {int flags; scalar_t__ wol; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*,int) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1)
{
 u16 VAR_2 = 0;

 VAR_1->wol = 0;
 if (!FUNC_0(VAR_1) || !(VAR_1->flags & VAR_0))
  return;

 do {
  VAR_2 = FUNC_1(VAR_1, VAR_2);
 } while (VAR_2 && VAR_2 != 0xffff);
}

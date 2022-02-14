
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int cas_flags; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cas *VAR_4, const int VAR_5)
{
 if (VAR_5 == 0) {
  FUNC_1(VAR_2, VAR_4->regs + VAR_3);
  return;
 }

 if (VAR_4->cas_flags & VAR_0) {
  switch (VAR_5) {
  default:
   break;
  }
 }
}

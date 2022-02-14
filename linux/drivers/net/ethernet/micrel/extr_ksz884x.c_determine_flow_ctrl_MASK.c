
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ksz_port {scalar_t__ force_link; } ;
struct ksz_hw {int overrides; int ksz_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ksz_hw*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_4, struct ksz_port *VAR_5,
 u16 VAR_6, u16 VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (VAR_4->overrides & VAR_0)
  return;

 VAR_8 = VAR_9 = 0;
 if (VAR_5->force_link)
  VAR_8 = VAR_9 = 1;
 if (VAR_7 & VAR_3) {
  if (VAR_6 & VAR_3) {
   VAR_8 = VAR_9 = 1;
  } else if ((VAR_7 & VAR_1) &&
    (VAR_6 & VAR_2) ==
    VAR_1) {
   VAR_9 = 1;
  }
 } else if (VAR_7 & VAR_1) {
  if ((VAR_6 & VAR_2) == VAR_2)
   VAR_8 = 1;
 }
 if (!VAR_4->ksz_switch)
  FUNC_0(VAR_4, VAR_8, VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_command {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct mmc_command *VAR_9, u32 *VAR_10)
{
 if (VAR_9->flags & VAR_8) {
  if (VAR_9->flags & VAR_5)
   *VAR_10 |= VAR_2;
  *VAR_10 |= VAR_4;

  if (!(VAR_9->flags & VAR_7))
   *VAR_10 |= VAR_3;

  if (VAR_9->flags & VAR_6)
   *VAR_10 |= VAR_1;
 } else {
  *VAR_10 |= VAR_0;
 }
}

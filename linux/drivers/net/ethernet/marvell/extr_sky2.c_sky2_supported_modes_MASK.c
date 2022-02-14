
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sky2_hw const*) ;

__attribute__((used)) static u32 FUNC_1(const struct sky2_hw *VAR_7)
{
 if (FUNC_0(VAR_7)) {
  u32 VAR_8 = VAR_6
   | VAR_5
   | VAR_4
   | VAR_3;

  if (VAR_7->flags & VAR_0)
   VAR_8 |= VAR_2
    | VAR_1;
  return VAR_8;
 } else
  return VAR_2
   | VAR_1;
}

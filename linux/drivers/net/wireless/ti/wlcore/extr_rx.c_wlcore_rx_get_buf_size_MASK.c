
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct wl1271 *VAR_5,
      u32 VAR_6)
{
 if (VAR_5->quirks & VAR_4)
  return (VAR_6 & VAR_0) >>
         VAR_1;

 return (VAR_6 & VAR_2) >> VAR_3;
}

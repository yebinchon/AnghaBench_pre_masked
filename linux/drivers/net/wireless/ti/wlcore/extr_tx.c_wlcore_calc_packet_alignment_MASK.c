
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int quirks; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

unsigned int FUNC_1(struct wl1271 *VAR_4,
       unsigned int VAR_5)
{
 if ((VAR_4->quirks & VAR_3) ||
     !(VAR_4->quirks & VAR_2))
  return FUNC_0(VAR_5, VAR_0);
 else
  return FUNC_0(VAR_5, VAR_1);
}

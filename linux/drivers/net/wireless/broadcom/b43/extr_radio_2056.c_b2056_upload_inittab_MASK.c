
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct b43_wldev {int dummy; } ;
struct b2056_inittab_entry {int flags; unsigned int ghz5; unsigned int ghz2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_2, bool VAR_3,
     bool VAR_4, u16 VAR_5,
     const struct b2056_inittab_entry *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8;
 u16 VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_6++) {
  if (!(VAR_6->flags & VAR_0))
   continue;
  if ((VAR_6->flags & VAR_1) || VAR_4) {
   if (VAR_3)
    VAR_9 = VAR_6->ghz5;
   else
    VAR_9 = VAR_6->ghz2;
   FUNC_0(VAR_2, VAR_5 | VAR_8, VAR_9);
  }
 }
}

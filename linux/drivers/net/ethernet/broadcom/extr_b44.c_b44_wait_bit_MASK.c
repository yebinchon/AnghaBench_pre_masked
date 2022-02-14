
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b44 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct b44*,unsigned long) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int,unsigned long,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct b44 *VAR_1, unsigned long VAR_2,
   u32 VAR_3, unsigned long VAR_4, const int VAR_5)
{
 unsigned long VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  u32 VAR_7 = FUNC_0(VAR_1, VAR_2);

  if (VAR_5 && !(VAR_7 & VAR_3))
   break;
  if (!VAR_5 && (VAR_7 & VAR_3))
   break;
  FUNC_3(10);
 }
 if (VAR_6 == VAR_4) {
  if (FUNC_1())
   FUNC_2(VAR_1->dev, "BUG!  Timeout waiting for bit %08x of register %lx to %s\n",
       VAR_3, VAR_2, VAR_5 ? "clear" : "set");

  return -VAR_0;
 }
 return 0;
}

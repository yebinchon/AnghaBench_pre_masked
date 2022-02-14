
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {unsigned long sp_state; int dev; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static inline bool FUNC_5(struct bnx2x *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = 5000;

 while (VAR_2--) {
  FUNC_3();
  FUNC_1(VAR_0->dev);
  if (!(VAR_0->sp_state & VAR_1)) {
   FUNC_2(VAR_0->dev);
   return 1;
  }
  FUNC_2(VAR_0->dev);

  FUNC_4(1000, 2000);
 }

 FUNC_3();

 FUNC_1(VAR_0->dev);
 if (VAR_0->sp_state & VAR_1) {
  FUNC_0("Filtering completion timed out. sp_state 0x%lx, mask 0x%lx\n",
     VAR_0->sp_state, VAR_1);
  FUNC_2(VAR_0->dev);
  return 0;
 }
 FUNC_2(VAR_0->dev);

 return 1;
}

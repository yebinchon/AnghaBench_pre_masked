
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_sl {int idle_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpsw_sl*,int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct cpsw_sl *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_2(VAR_4);

 do {
  FUNC_4(100, 200);
 } while (!(FUNC_0(VAR_3, VAR_0) &
    VAR_3->idle_mask) && FUNC_3(VAR_5, VAR_2));

 if (!(FUNC_0(VAR_3, VAR_0) & VAR_3->idle_mask)) {
  FUNC_1(VAR_3->dev, "cpsw_sl failed to soft-reset.\n");
  return -VAR_1;
 }

 return 0;
}

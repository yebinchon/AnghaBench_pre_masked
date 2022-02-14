
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_sl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpsw_sl*,int ) ;
 int FUNC_1 (struct cpsw_sl*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct cpsw_sl *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_2 + FUNC_3(VAR_4);


 FUNC_1(VAR_3, VAR_0, VAR_1);


 do {
  FUNC_5(100, 200);
 } while ((FUNC_0(VAR_3, VAR_0) &
    VAR_1) &&
    FUNC_4(VAR_5, VAR_2));

 if (FUNC_0(VAR_3, VAR_0) & VAR_1)
  FUNC_2(VAR_3->dev, "cpsw_sl failed to soft-reset.\n");
}

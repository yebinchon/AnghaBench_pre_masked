
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct omap_udc {int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct omap_udc *VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 VAR_7 |= VAR_4;
 FUNC_5(VAR_7, VAR_5);
 if (!FUNC_1(&VAR_6->gadget) && !FUNC_0()) {
  u32 VAR_8;

  VAR_8 = FUNC_2(VAR_1);
  VAR_8 |= VAR_0;
  FUNC_4(VAR_8, VAR_1);
 }
 FUNC_5(VAR_2, VAR_3);
}

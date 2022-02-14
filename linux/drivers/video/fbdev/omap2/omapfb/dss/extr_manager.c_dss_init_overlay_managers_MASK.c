
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {char* name; int overlays; int id; int supported_outputs; int supported_displays; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct omap_overlay_manager* FUNC_5 (int,int,int ) ;
 struct omap_overlay_manager* VAR_5 ;
 int VAR_6 ;

int FUNC_6(void)
{
 int VAR_7;

 VAR_6 = FUNC_2();

 VAR_5 = FUNC_5(VAR_6, sizeof(struct omap_overlay_manager),
      VAR_0);

 FUNC_0(VAR_5 == ((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  struct omap_overlay_manager *VAR_8 = &VAR_5[VAR_7];

  switch (VAR_7) {
  case 0:
   VAR_8->name = "lcd";
   VAR_8->id = VAR_2;
   break;
  case 1:
   VAR_8->name = "tv";
   VAR_8->id = VAR_1;
   break;
  case 2:
   VAR_8->name = "lcd2";
   VAR_8->id = VAR_3;
   break;
  case 3:
   VAR_8->name = "lcd3";
   VAR_8->id = VAR_4;
   break;
  }

  VAR_8->supported_displays =
   FUNC_3(VAR_8->id);
  VAR_8->supported_outputs =
   FUNC_4(VAR_8->id);

  FUNC_1(&VAR_8->overlays);
 }

 return 0;
}

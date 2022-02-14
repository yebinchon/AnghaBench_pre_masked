
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_overlay {char* name; int id; int supported_modes; int caps; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct omap_overlay*,struct platform_device*) ;
 struct omap_overlay* FUNC_6 (int,int,int ) ;
 int VAR_5 ;
 struct omap_overlay* VAR_6 ;

void FUNC_7(struct platform_device *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_5 = FUNC_2();

 VAR_6 = FUNC_6(VAR_5, sizeof(struct omap_overlay),
      VAR_0);

 FUNC_0(VAR_6 == ((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
  struct omap_overlay *VAR_10 = &VAR_6[VAR_8];

  switch (VAR_8) {
  case 0:
   VAR_10->name = "gfx";
   VAR_10->id = VAR_1;
   break;
  case 1:
   VAR_10->name = "vid1";
   VAR_10->id = VAR_2;
   break;
  case 2:
   VAR_10->name = "vid2";
   VAR_10->id = VAR_3;
   break;
  case 3:
   VAR_10->name = "vid3";
   VAR_10->id = VAR_4;
   break;
  }

  VAR_10->caps = FUNC_3(VAR_10->id);
  VAR_10->supported_modes =
   FUNC_4(VAR_10->id);

  VAR_9 = FUNC_5(VAR_10, VAR_7);
  if (VAR_9)
   FUNC_1("failed to create sysfs file\n");
 }
}

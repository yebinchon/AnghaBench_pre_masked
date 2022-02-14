
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_overlay_manager {int id; } ;
struct mgr_priv_data {int info_dirty; int shadow_info_dirty; int enabled; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mgr_priv_data* FUNC_4 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_5 (struct omap_overlay_manager*) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct omap_overlay_manager *VAR_2)
{
 unsigned long VAR_3 = FUNC_6(500);
 struct mgr_priv_data *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_8(&VAR_1, VAR_6);

 if (FUNC_5(VAR_2)) {
  FUNC_9(&VAR_1, VAR_6);
  return 0;
 }

 if (!VAR_4->enabled) {
  FUNC_9(&VAR_1, VAR_6);
  return 0;
 }

 FUNC_9(&VAR_1, VAR_6);

 VAR_7 = FUNC_2();
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_1(VAR_2->id);

 VAR_8 = 0;
 while (1) {
  bool VAR_9, VAR_10;

  FUNC_8(&VAR_1, VAR_6);
  VAR_10 = VAR_4->info_dirty;
  VAR_9 = VAR_4->shadow_info_dirty;
  FUNC_9(&VAR_1, VAR_6);

  if (!VAR_10 && !VAR_9) {
   VAR_7 = 0;
   break;
  }






  if (VAR_8++ == 3) {
   FUNC_0("mgr(%d)->wait_for_go() not finishing\n",
     VAR_2->id);
   VAR_7 = 0;
   break;
  }

  VAR_7 = FUNC_7(VAR_5, VAR_3);
  if (VAR_7 == -VAR_0)
   break;

  if (VAR_7) {
   FUNC_0("mgr(%d)->wait_for_go() timeout\n", VAR_2->id);
   break;
  }
 }

 FUNC_3();

 return VAR_7;
}

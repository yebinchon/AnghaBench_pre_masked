
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ovl_priv_data {int info_dirty; int shadow_info_dirty; } ;
struct omap_overlay {int id; TYPE_1__* manager; } ;
struct mgr_priv_data {int enabled; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mgr_priv_data* FUNC_4 (TYPE_1__*) ;
 struct ovl_priv_data* FUNC_5 (struct omap_overlay*) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,unsigned long) ;
 scalar_t__ FUNC_8 (struct omap_overlay*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct omap_overlay *VAR_2)
{
 unsigned long VAR_3 = FUNC_6(500);
 struct ovl_priv_data *VAR_4;
 struct mgr_priv_data *VAR_5;
 u32 VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_2->manager)
  return 0;

 VAR_5 = FUNC_4(VAR_2->manager);

 FUNC_9(&VAR_1, VAR_7);

 if (FUNC_8(VAR_2)) {
  FUNC_10(&VAR_1, VAR_7);
  return 0;
 }

 if (!VAR_5->enabled) {
  FUNC_10(&VAR_1, VAR_7);
  return 0;
 }

 FUNC_10(&VAR_1, VAR_7);

 VAR_8 = FUNC_2();
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_1(VAR_2->manager->id);

 VAR_4 = FUNC_5(VAR_2);
 VAR_9 = 0;
 while (1) {
  bool VAR_10, VAR_11;

  FUNC_9(&VAR_1, VAR_7);
  VAR_11 = VAR_4->info_dirty;
  VAR_10 = VAR_4->shadow_info_dirty;
  FUNC_10(&VAR_1, VAR_7);

  if (!VAR_11 && !VAR_10) {
   VAR_8 = 0;
   break;
  }






  if (VAR_9++ == 3) {
   FUNC_0("ovl(%d)->wait_for_go() not finishing\n",
     VAR_2->id);
   VAR_8 = 0;
   break;
  }

  VAR_8 = FUNC_7(VAR_6, VAR_3);
  if (VAR_8 == -VAR_0)
   break;

  if (VAR_8) {
   FUNC_0("ovl(%d)->wait_for_go() timeout\n", VAR_2->id);
   break;
  }
 }

 FUNC_3();

 return VAR_8;
}

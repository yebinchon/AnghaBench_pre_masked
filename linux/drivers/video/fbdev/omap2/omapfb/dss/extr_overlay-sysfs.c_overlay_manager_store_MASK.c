
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_manager {int (* apply ) (struct omap_overlay_manager*) ;int name; } ;
struct omap_overlay {int (* unset_manager ) (struct omap_overlay*) ;int (* set_manager ) (struct omap_overlay*,struct omap_overlay_manager*) ;struct omap_overlay_manager* manager; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct omap_overlay_manager* FUNC_5 (int) ;
 int FUNC_6 (struct omap_overlay*) ;
 int FUNC_7 (struct omap_overlay_manager*) ;
 int FUNC_8 (struct omap_overlay*,struct omap_overlay_manager*) ;
 int FUNC_9 (struct omap_overlay_manager*) ;
 scalar_t__ FUNC_10 (char const*,int ) ;

__attribute__((used)) static ssize_t FUNC_11(struct omap_overlay *VAR_1, const char *VAR_2,
  size_t VAR_3)
{
 int VAR_4, VAR_5;
 struct omap_overlay_manager *VAR_6 = ((void*)0);
 struct omap_overlay_manager *VAR_7;
 int VAR_8 = VAR_3;

 if (VAR_2[VAR_3-1] == '\n')
  --VAR_8;

 if (VAR_8 > 0) {
  for (VAR_4 = 0; VAR_4 < FUNC_4(); ++VAR_4) {
   VAR_6 = FUNC_5(VAR_4);

   if (FUNC_10(VAR_2, VAR_6->name))
    break;

   VAR_6 = ((void*)0);
  }
 }

 if (VAR_8 > 0 && VAR_6 == ((void*)0))
  return -VAR_0;

 if (VAR_6)
  FUNC_0("manager %s found\n", VAR_6->name);

 if (VAR_6 == VAR_1->manager)
  return VAR_3;

 VAR_7 = VAR_1->manager;

 VAR_5 = FUNC_2();
 if (VAR_5)
  return VAR_5;


 if (VAR_7) {
  VAR_5 = VAR_1->unset_manager(VAR_1);
  if (VAR_5) {
   FUNC_1("detach failed\n");
   goto err;
  }

  VAR_5 = VAR_7->apply(VAR_7);
  if (VAR_5)
   goto err;
 }

 if (VAR_6) {
  VAR_5 = VAR_1->set_manager(VAR_1, VAR_6);
  if (VAR_5) {
   FUNC_1("Failed to attach overlay\n");
   goto err;
  }

  VAR_5 = VAR_6->apply(VAR_6);
  if (VAR_5)
   goto err;
 }

 FUNC_3();

 return VAR_3;

err:
 FUNC_3();
 return VAR_5;
}

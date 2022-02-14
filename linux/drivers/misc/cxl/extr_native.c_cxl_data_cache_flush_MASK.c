
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cxl {int dev; TYPE_1__* native; } ;
struct TYPE_4__ {int (* link_ok ) (struct cxl*,int *) ;} ;
struct TYPE_3__ {scalar_t__ no_data_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (struct cxl*,int ) ;
 int FUNC_2 (struct cxl*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 unsigned long VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct cxl*,int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct cxl *VAR_10)
{
 u64 VAR_11;
 unsigned long VAR_12 = VAR_9 + (VAR_7 * VAR_4);






 if (VAR_10->native->no_data_cache) {
  FUNC_4("No PSL data cache. Ignoring cache flush req.\n");
  return 0;
 }

 FUNC_4("Flushing data cache\n");
 VAR_11 = FUNC_1(VAR_10, VAR_0);
 VAR_11 |= VAR_1;
 FUNC_2(VAR_10, VAR_0, VAR_11);

 VAR_11 = FUNC_1(VAR_10, VAR_0);
 while ((VAR_11 & VAR_3) != VAR_2) {
  if (FUNC_6(VAR_9, VAR_12)) {
   FUNC_3(&VAR_10->dev, "WARNING: cache flush timed out!\n");
   return -VAR_5;
  }

  if (!VAR_8->link_ok(VAR_10, ((void*)0))) {
   FUNC_3(&VAR_10->dev, "WARNING: link down when flushing cache\n");
   return -VAR_6;
  }
  FUNC_0();
  VAR_11 = FUNC_1(VAR_10, VAR_0);
 }

 VAR_11 &= ~VAR_1;
 FUNC_2(VAR_10, VAR_0, VAR_11);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nd_region {int dev; scalar_t__ ro; } ;
struct nd_namespace_io {int bb; } ;
struct device {int dummy; } ;
struct nd_btt {TYPE_1__* ndns; struct device dev; } ;
struct btt {unsigned long long rawsize; int lbasize; int sector_size; scalar_t__ init_state; unsigned long long num_arenas; int * phys_bb; struct nd_region* nd_region; int init_lock; int arena_list; struct nd_btt* nd_btt; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct btt*) ;
 int FUNC_2 (struct btt*) ;
 int FUNC_3 (struct btt*) ;
 int FUNC_4 (struct btt*) ;
 int FUNC_5 (struct device*,char*,unsigned long long,unsigned long long) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*,char*,int ) ;
 struct btt* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct btt*) ;
 int FUNC_12 (int *) ;
 struct nd_namespace_io* FUNC_13 (int *) ;

__attribute__((used)) static struct btt *FUNC_14(struct nd_btt *VAR_3, unsigned long long VAR_4,
  u32 VAR_5, u8 *VAR_6, struct nd_region *VAR_7)
{
 int VAR_8;
 struct btt *VAR_9;
 struct nd_namespace_io *VAR_10;
 struct device *VAR_11 = &VAR_3->dev;

 VAR_9 = FUNC_10(VAR_11, sizeof(struct btt), VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->nd_btt = VAR_3;
 VAR_9->rawsize = VAR_4;
 VAR_9->lbasize = VAR_5;
 VAR_9->sector_size = ((VAR_5 >= 4096) ? 4096 : 512);
 FUNC_0(&VAR_9->arena_list);
 FUNC_12(&VAR_9->init_lock);
 VAR_9->nd_region = VAR_7;
 VAR_10 = FUNC_13(&VAR_3->ndns->dev);
 VAR_9->phys_bb = &VAR_10->bb;

 VAR_8 = FUNC_11(VAR_9);
 if (VAR_8) {
  FUNC_6(VAR_11, "init: error in arena_discover: %d\n", VAR_8);
  return ((void*)0);
 }

 if (VAR_9->init_state != VAR_2 && VAR_7->ro) {
  FUNC_9(VAR_11, "%s is read-only, unable to init btt metadata\n",
    FUNC_8(&VAR_7->dev));
  return ((void*)0);
 } else if (VAR_9->init_state != VAR_2) {
  VAR_9->num_arenas = (VAR_4 / VAR_0) +
   ((VAR_4 % VAR_0) ? 1 : 0);
  FUNC_5(VAR_11, "init: %d arenas for %llu rawsize\n",
    VAR_9->num_arenas, VAR_4);

  VAR_8 = FUNC_4(VAR_9);
  if (VAR_8) {
   FUNC_7(VAR_11, "init: create_arenas: %d\n", VAR_8);
   return ((void*)0);
  }

  VAR_8 = FUNC_3(VAR_9);
  if (VAR_8) {
   FUNC_6(VAR_11, "init: error in meta_init: %d\n", VAR_8);
   return ((void*)0);
  }
 }

 VAR_8 = FUNC_1(VAR_9);
 if (VAR_8) {
  FUNC_6(VAR_11, "init: error in blk_init: %d\n", VAR_8);
  return ((void*)0);
 }

 FUNC_2(VAR_9);

 return VAR_9;
}

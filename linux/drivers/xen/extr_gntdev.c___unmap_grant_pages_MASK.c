
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int flags; int addr; } ;
struct gntdev_grant_map {TYPE_2__* unmap_ops; int * pages; int * kunmap_ops; TYPE_1__ notify; } ;
struct gntab_unmap_queue_data {int count; int * pages; int * kunmap_ops; TYPE_2__* unmap_ops; } ;
struct TYPE_4__ {int handle; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gntab_unmap_queue_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct gntdev_grant_map *VAR_5, int VAR_6,
          int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct gntab_unmap_queue_data VAR_10;

 if (VAR_5->notify.flags & VAR_3) {
  int VAR_11 = (VAR_5->notify.addr >> VAR_1);
  if (VAR_11 >= VAR_6 && VAR_11 < VAR_6 + VAR_7) {

   uint8_t *VAR_12 = FUNC_2(FUNC_1(VAR_5->pages[VAR_11]));
   VAR_12[VAR_5->notify.addr & (VAR_2-1)] = 0;
   VAR_5->notify.flags &= ~VAR_3;
  }
 }

 VAR_10.unmap_ops = VAR_5->unmap_ops + VAR_6;
 VAR_10.kunmap_ops = VAR_4 ? VAR_5->kunmap_ops + VAR_6 : ((void*)0);
 VAR_10.pages = VAR_5->pages + VAR_6;
 VAR_10.count = VAR_7;

 VAR_9 = FUNC_0(&VAR_10);
 if (VAR_9)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_5->unmap_ops[VAR_6+VAR_8].status)
   VAR_9 = -VAR_0;
  FUNC_3("unmap handle=%d st=%d\n",
   VAR_5->unmap_ops[VAR_6+VAR_8].handle,
   VAR_5->unmap_ops[VAR_6+VAR_8].status);
  VAR_5->unmap_ops[VAR_6+VAR_8].handle = -1;
 }
 return VAR_9;
}

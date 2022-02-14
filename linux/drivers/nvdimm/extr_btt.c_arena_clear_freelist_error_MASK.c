
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef size_t u32 ;
struct arena_info {unsigned long sector_size; int err_lock; TYPE_1__* freelist; } ;
struct TYPE_2__ {size_t block; scalar_t__ has_err; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct arena_info*,unsigned long,void*,unsigned long,int ) ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct arena_info*,size_t) ;

__attribute__((used)) static int FUNC_7(struct arena_info *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->freelist[VAR_2].has_err) {
  void *VAR_4 = FUNC_5(FUNC_0(0));
  u32 VAR_5 = VAR_1->freelist[VAR_2].block;
  u64 VAR_6 = FUNC_6(VAR_1, VAR_5);
  unsigned long VAR_7 = VAR_1->sector_size;

  FUNC_3(&VAR_1->err_lock);

  while (VAR_7) {
   unsigned long VAR_8 = FUNC_2(VAR_7, VAR_0);

   VAR_3 = FUNC_1(VAR_1, VAR_6, VAR_4,
    VAR_8, 0);
   if (VAR_3)
    break;
   VAR_7 -= VAR_8;
   VAR_6 += VAR_8;
   if (VAR_7 == 0)
    VAR_1->freelist[VAR_2].has_err = 0;
  }
  FUNC_4(&VAR_1->err_lock);
 }
 return VAR_3;
}

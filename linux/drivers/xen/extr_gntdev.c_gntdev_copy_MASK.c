
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gntdev_copy_batch {unsigned int nr_ops; int * status; TYPE_1__* ops; } ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct gntdev_copy_batch*) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gntdev_copy_batch *VAR_2)
{
 unsigned int VAR_3;

 FUNC_3(VAR_2->ops, VAR_2->nr_ops);
 FUNC_2(VAR_2);





 for (VAR_3 = 0; VAR_3 < VAR_2->nr_ops; VAR_3++) {
  s16 VAR_4 = VAR_2->ops[VAR_3].status;
  s16 VAR_5;

  if (VAR_4 == VAR_1)
   continue;

  if (FUNC_0(VAR_5, VAR_2->status[VAR_3]))
   return -VAR_0;

  if (VAR_5 != VAR_1)
   continue;

  if (FUNC_1(VAR_4, VAR_2->status[VAR_3]))
   return -VAR_0;
 }

 VAR_2->nr_ops = 0;
 return 0;
}

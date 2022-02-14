
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frozen; int wait_unfrozen; } ;
struct super_block {TYPE_1__ s_writers; int s_umount; } ;
struct block_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct super_block* FUNC_0 (struct block_device*,int) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static struct super_block *FUNC_5(struct block_device *VAR_1,
           bool VAR_2)
{
 while (1) {
  struct super_block *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_3 || VAR_3->s_writers.frozen == VAR_0)
   return VAR_3;
  if (!VAR_2)
   FUNC_2(&VAR_3->s_umount);
  else
   FUNC_3(&VAR_3->s_umount);
  FUNC_4(VAR_3->s_writers.wait_unfrozen,
      VAR_3->s_writers.frozen == VAR_0);
  FUNC_1(VAR_3);
 }
}

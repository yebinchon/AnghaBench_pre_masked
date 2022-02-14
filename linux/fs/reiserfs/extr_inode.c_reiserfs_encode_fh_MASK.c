
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_generation; int i_ino; } ;
typedef int __u32 ;
struct TYPE_2__ {int k_dir_id; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct inode *VAR_1, __u32 * VAR_2, int *VAR_3,
         struct inode *VAR_4)
{
 int VAR_5 = *VAR_3;

 if (VAR_4 && (VAR_5 < 5)) {
  *VAR_3 = 5;
  return VAR_0;
 } else if (VAR_5 < 3) {
  *VAR_3 = 3;
  return VAR_0;
 }

 VAR_2[0] = VAR_1->i_ino;
 VAR_2[1] = FUNC_1(FUNC_0(VAR_1)->k_dir_id);
 VAR_2[2] = VAR_1->i_generation;
 *VAR_3 = 3;
 if (VAR_4) {
  VAR_2[3] = VAR_4->i_ino;
  VAR_2[4] = FUNC_1(FUNC_0(VAR_4)->k_dir_id);
  *VAR_3 = 5;
  if (VAR_5 >= 6) {
   VAR_2[5] = VAR_4->i_generation;
   *VAR_3 = 6;
  }
 }
 return *VAR_3;
}

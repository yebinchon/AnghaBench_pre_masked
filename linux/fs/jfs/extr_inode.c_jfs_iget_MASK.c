
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_state; size_t i_size; char* i_link; int i_rdev; int i_mode; int * i_op; TYPE_1__* i_mapping; int * i_fop; } ;
struct TYPE_4__ {char* i_inline; } ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*,unsigned long) ;
 int FUNC_8 (struct inode*,int ,int ) ;
 int FUNC_9 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct inode*) ;

struct inode *FUNC_11(struct super_block *VAR_10, unsigned long VAR_11)
{
 struct inode *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(VAR_10, VAR_11);
 if (!VAR_12)
  return FUNC_0(-VAR_0);
 if (!(VAR_12->i_state & VAR_2))
  return VAR_12;

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13 < 0) {
  FUNC_6(VAR_12);
  return FUNC_0(VAR_13);
 }

 if (FUNC_4(VAR_12->i_mode)) {
  VAR_12->i_op = &VAR_7;
  VAR_12->i_fop = &VAR_8;
  VAR_12->i_mapping->a_ops = &VAR_3;
 } else if (FUNC_2(VAR_12->i_mode)) {
  VAR_12->i_op = &VAR_4;
  VAR_12->i_fop = &VAR_5;
 } else if (FUNC_3(VAR_12->i_mode)) {
  if (VAR_12->i_size >= VAR_1) {
   VAR_12->i_op = &VAR_9;
   FUNC_9(VAR_12);
   VAR_12->i_mapping->a_ops = &VAR_3;
  } else {
   VAR_12->i_op = &VAR_6;
   VAR_12->i_link = FUNC_1(VAR_12)->i_inline;




   VAR_12->i_link[VAR_12->i_size] = '\0';
  }
 } else {
  VAR_12->i_op = &VAR_7;
  FUNC_8(VAR_12, VAR_12->i_mode, VAR_12->i_rdev);
 }
 FUNC_10(VAR_12);
 return VAR_12;
}

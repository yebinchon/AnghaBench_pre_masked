
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int test_t ;
struct super_block {int dummy; } ;
struct inode {int i_state; } ;
typedef int set_t ;
struct TYPE_3__ {unsigned long mft_no; scalar_t__ name_len; int * name; int type; } ;
typedef TYPE_1__ ntfs_attr ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int) ;
 int VAR_2 ;
 struct inode* FUNC_1 (struct super_block*,unsigned long,int ,int ,TYPE_1__*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;

struct inode *FUNC_6(struct super_block *VAR_5, unsigned long VAR_6)
{
 struct inode *VAR_7;
 int VAR_8;
 ntfs_attr VAR_9;

 VAR_9.mft_no = VAR_6;
 VAR_9.type = VAR_0;
 VAR_9.name = ((void*)0);
 VAR_9.name_len = 0;

 VAR_7 = FUNC_1(VAR_5, VAR_6, (test_t)VAR_4,
   (set_t)VAR_3, &VAR_9);
 if (FUNC_4(!VAR_7))
  return FUNC_0(-VAR_1);

 VAR_8 = 0;


 if (VAR_7->i_state & VAR_2) {
  VAR_8 = FUNC_3(VAR_7);
  FUNC_5(VAR_7);
 }




 if (FUNC_4(VAR_8 == -VAR_1)) {
  FUNC_2(VAR_7);
  VAR_7 = FUNC_0(VAR_8);
 }
 return VAR_7;
}

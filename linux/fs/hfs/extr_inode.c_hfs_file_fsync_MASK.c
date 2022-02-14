
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct inode {struct super_block* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int mdb_work; } ;
struct TYPE_3__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2,
     int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 struct super_block * VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;
 FUNC_3(VAR_4);


 VAR_6 = FUNC_6(VAR_4, 0);


 VAR_5 = VAR_4->i_sb;
 FUNC_2(&FUNC_0(VAR_5)->mdb_work);

 VAR_7 = FUNC_5(VAR_5->s_bdev);
 if (!VAR_6)
  VAR_6 = VAR_7;
 FUNC_4(VAR_4);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct treepath {int pos_in_item; } ;
struct reiserfs_dir_entry {int de_ih; int de_entry_num; } ;
struct inode {TYPE_1__* i_sb; } ;
struct cpu_key {int dummy; } ;
struct TYPE_4__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cpu_key*,struct reiserfs_dir_entry*,char const*,int) ;
 int FUNC_4 (struct cpu_key*,struct inode*,int ,int ,int) ;
 int FUNC_5 (struct treepath*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,struct cpu_key*,struct treepath*,struct reiserfs_dir_entry*) ;
 int FUNC_8 (struct cpu_key*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, const char *VAR_5, int VAR_6,
          struct treepath *VAR_7,
          struct reiserfs_dir_entry *VAR_8)
{
 struct cpu_key VAR_9;
 int VAR_10;

 if (VAR_6 > FUNC_0(VAR_4->i_sb->s_blocksize))
  return VAR_2;


 FUNC_4(&VAR_9, VAR_4,
       FUNC_1(VAR_4->i_sb, VAR_5, VAR_6),
       VAR_3, 3);

 while (1) {
  VAR_10 =
      FUNC_7(VAR_4->i_sb, &VAR_9,
     VAR_7, VAR_8);
  if (VAR_10 == VAR_1) {
   FUNC_6(VAR_4->i_sb, "zam-7001", "io error");
   return VAR_1;
  }


  VAR_10 =
      FUNC_3(&VAR_9, VAR_8, VAR_5,
           VAR_6);




  if (VAR_10 != VAR_0) {
   VAR_7->pos_in_item = VAR_8->de_entry_num;
   return VAR_10;
  }





  FUNC_8(&VAR_9,
         FUNC_2(VAR_8->de_ih) - 1);
  FUNC_5(VAR_7);

 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct afs_net {int dummy; } ;
struct afs_cell {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct afs_cell*) ;
 int FUNC_1 (struct afs_cell*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*,int) ;
 struct afs_cell* FUNC_4 (struct afs_net*,char*,int ,char*,int) ;
 int FUNC_5 (struct afs_net*,struct afs_cell*) ;
 struct afs_net* FUNC_6 (struct seq_file*) ;
 char* FUNC_7 (char*,char,size_t) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct seq_file *VAR_5 = VAR_2->private_data;
 struct afs_net *VAR_6 = FUNC_6(VAR_5);
 char *VAR_7, *VAR_8;
 int VAR_9;


 VAR_7 = FUNC_7(VAR_3, '\n', VAR_4);
 if (VAR_7)
  *VAR_7 = 0;


 VAR_7 = FUNC_9(VAR_3, ' ');
 if (!VAR_7)
  goto inval;
 do {
  *VAR_7++ = 0;
 } while(*VAR_7 == ' ');
 if (!*VAR_7)
  goto inval;

 VAR_8 = FUNC_9(VAR_7, ' ');
 if (VAR_8) {
  do {
   *VAR_8++ = 0;
  } while(*VAR_8 == ' ');
  if (!*VAR_8)
   goto inval;
 }


 FUNC_2("cmd=%s name=%s args=%s", VAR_3, VAR_7, VAR_8);

 if (FUNC_10(VAR_3, "add") == 0) {
  struct afs_cell *VAR_10;

  VAR_10 = FUNC_4(VAR_6, VAR_7, FUNC_11(VAR_7), VAR_8, 1);
  if (FUNC_0(VAR_10)) {
   VAR_9 = FUNC_1(VAR_10);
   goto done;
  }

  if (FUNC_12(VAR_0, &VAR_10->flags))
   FUNC_5(VAR_6, VAR_10);
 } else {
  goto inval;
 }

 VAR_9 = 0;

done:
 FUNC_3(" = %d", VAR_9);
 return VAR_9;

inval:
 VAR_9 = -VAR_1;
 FUNC_8("kAFS: Invalid Command on /proc/fs/afs/cells file\n");
 goto done;
}

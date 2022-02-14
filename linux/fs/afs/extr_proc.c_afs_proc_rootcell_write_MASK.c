
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct file {struct seq_file* private_data; } ;
struct afs_net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct afs_net*,char*) ;
 struct afs_net* FUNC_3 (struct seq_file*) ;
 char* FUNC_4 (char*,char,size_t) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct seq_file *VAR_4 = VAR_1->private_data;
 struct afs_net *VAR_5 = FUNC_3(VAR_4);
 char *VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if (VAR_2[0] == '.')
  goto out;
 if (FUNC_4(VAR_2, '/', VAR_3))
  goto out;


 VAR_6 = FUNC_4(VAR_2, '\n', VAR_3);
 if (VAR_6)
  *VAR_6 = 0;


 FUNC_0("rootcell=%s", VAR_2);

 VAR_7 = FUNC_2(VAR_5, VAR_2);

out:
 FUNC_1(" = %d", VAR_7);
 return VAR_7;
}

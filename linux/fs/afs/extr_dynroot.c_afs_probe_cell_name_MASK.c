
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; size_t len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct afs_net {int net; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct afs_cell*) ;
 struct afs_net* FUNC_1 (struct dentry*) ;
 struct afs_cell* FUNC_2 (struct afs_net*,char const*,size_t) ;
 int FUNC_3 (struct afs_net*,struct afs_cell*) ;
 int FUNC_4 (int ,char*,char const*,size_t,char*,int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_3)
{
 struct afs_cell *VAR_4;
 struct afs_net *VAR_5 = FUNC_1(VAR_3);
 const char *VAR_6 = VAR_3->d_name.name;
 size_t VAR_7 = VAR_3->d_name.len;
 int VAR_8;


 if (VAR_6[0] == '.') {
  if (VAR_7 == 1)
   return -VAR_1;
  VAR_6++;
  VAR_7--;
 }

 VAR_4 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (!FUNC_0(VAR_4)) {
  FUNC_3(VAR_5, VAR_4);
  return 0;
 }

 VAR_8 = FUNC_4(VAR_5->net, "afsdb", VAR_6, VAR_7, "srv=1",
   ((void*)0), ((void*)0), 0);
 if (VAR_8 == -VAR_2)
  VAR_8 = -VAR_0;
 return VAR_8;
}

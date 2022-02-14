
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_parent; } ;
struct afs_net {int cells_lock; int ws_cell; } ;
struct afs_cell {int name_len; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_3 ;
 struct afs_net* FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__,int ) ;
 struct dentry* FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;
 struct afs_cell* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,unsigned int*) ;

__attribute__((used)) static struct dentry *FUNC_12(struct dentry *VAR_4)
{
 struct afs_cell *VAR_5;
 struct afs_net *VAR_6 = FUNC_1(VAR_4);
 struct dentry *VAR_7;
 unsigned int VAR_8 = 0;
 char *VAR_9;
 int VAR_10;

 if (!VAR_6->ws_cell)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_0(-VAR_2);
 VAR_9 = FUNC_4(VAR_0 + 1, VAR_3);
 if (!VAR_9)
  goto out_p;

 FUNC_9();
 do {
  FUNC_11(&VAR_6->cells_lock, &VAR_8);
  VAR_5 = FUNC_8(VAR_6->ws_cell);
  if (VAR_5) {
   VAR_10 = VAR_5->name_len;
   FUNC_6(VAR_9, VAR_5->name, VAR_10 + 1);
  }
 } while (FUNC_7(&VAR_6->cells_lock, VAR_8));
 FUNC_2(&VAR_6->cells_lock, VAR_8);
 FUNC_10();

 VAR_7 = FUNC_0(-VAR_1);
 if (!VAR_5)
  goto out_n;

 VAR_7 = FUNC_5(VAR_9, VAR_4->d_parent, VAR_10);





out_n:
 FUNC_3(VAR_9);
out_p:
 return VAR_7;
}

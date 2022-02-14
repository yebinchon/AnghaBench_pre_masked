
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {struct kernfs_iattrs* iattr; } ;
struct kernfs_iattrs {int xattrs; int ia_atime; int ia_ctime; int ia_mtime; int ia_gid; int ia_uid; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kernfs_iattrs* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct kernfs_iattrs *FUNC_5(struct kernfs_node *VAR_4, int VAR_5)
{
 static DEFINE_MUTEX(VAR_6);
 struct kernfs_iattrs *VAR_7;

 FUNC_2(&VAR_6);

 if (VAR_4->iattr || !VAR_5)
  goto out_unlock;

 VAR_4->iattr = FUNC_0(VAR_3, VAR_0);
 if (!VAR_4->iattr)
  goto out_unlock;


 VAR_4->iattr->ia_uid = VAR_2;
 VAR_4->iattr->ia_gid = VAR_1;

 FUNC_1(&VAR_4->iattr->ia_atime);
 VAR_4->iattr->ia_mtime = VAR_4->iattr->ia_atime;
 VAR_4->iattr->ia_ctime = VAR_4->iattr->ia_atime;

 FUNC_4(&VAR_4->iattr->xattrs);
out_unlock:
 VAR_7 = VAR_4->iattr;
 FUNC_3(&VAR_6);
 return VAR_7;
}

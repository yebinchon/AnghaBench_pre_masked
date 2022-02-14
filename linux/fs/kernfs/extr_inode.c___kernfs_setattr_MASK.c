
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_node {int mode; } ;
struct kernfs_iattrs {int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; } ;
struct iattr {unsigned int ia_valid; int ia_mode; int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct kernfs_iattrs* FUNC_0 (struct kernfs_node*) ;

int FUNC_1(struct kernfs_node *VAR_7, const struct iattr *VAR_8)
{
 struct kernfs_iattrs *VAR_9;
 unsigned int VAR_10 = VAR_8->ia_valid;

 VAR_9 = FUNC_0(VAR_7);
 if (!VAR_9)
  return -VAR_6;

 if (VAR_10 & VAR_5)
  VAR_9->ia_uid = VAR_8->ia_uid;
 if (VAR_10 & VAR_2)
  VAR_9->ia_gid = VAR_8->ia_gid;
 if (VAR_10 & VAR_0)
  VAR_9->ia_atime = VAR_8->ia_atime;
 if (VAR_10 & VAR_4)
  VAR_9->ia_mtime = VAR_8->ia_mtime;
 if (VAR_10 & VAR_1)
  VAR_9->ia_ctime = VAR_8->ia_ctime;
 if (VAR_10 & VAR_3)
  VAR_7->mode = VAR_8->ia_mode;
 return 0;
}

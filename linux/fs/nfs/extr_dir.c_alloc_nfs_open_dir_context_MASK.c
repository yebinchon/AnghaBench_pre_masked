
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_dir_context {int list; int cred; scalar_t__ dup_cookie; scalar_t__ dir_cookie; int attr_gencount; scalar_t__ duped; } ;
struct nfs_inode {int cache_validity; int open_files; int attr_gencount; } ;
struct inode {int i_lock; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 struct nfs_open_dir_context* FUNC_0 (int ) ;
 int VAR_1 ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cred const*) ;
 struct nfs_open_dir_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct nfs_open_dir_context *FUNC_8(struct inode *VAR_5, const struct cred *VAR_6)
{
 struct nfs_inode *VAR_7 = FUNC_1(VAR_5);
 struct nfs_open_dir_context *VAR_8;
 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (VAR_8 != ((void*)0)) {
  VAR_8->duped = 0;
  VAR_8->attr_gencount = VAR_7->attr_gencount;
  VAR_8->dir_cookie = 0;
  VAR_8->dup_cookie = 0;
  VAR_8->cred = FUNC_2(VAR_6);
  FUNC_6(&VAR_5->i_lock);
  if (FUNC_5(&VAR_7->open_files) &&
      (VAR_7->cache_validity & VAR_2))
   VAR_7->cache_validity |= VAR_3 |
    VAR_4;
  FUNC_4(&VAR_8->list, &VAR_7->open_files);
  FUNC_7(&VAR_5->i_lock);
  return VAR_8;
 }
 return FUNC_0(-VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfs_open_dir_context {scalar_t__ dir_cookie; } ;
struct inode {int dummy; } ;
struct file {int f_mapping; struct nfs_open_dir_context* private_data; } ;
struct dir_context {scalar_t__ pos; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int plus; int eof; scalar_t__ page_index; scalar_t__* dir_cookie; int decode; struct dir_context* ctx; struct file* file; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {int decode_dirent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int *) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,char*,struct file*,int) ;
 struct dentry* FUNC_5 (struct file*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,struct dir_context*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_5, struct dir_context *VAR_6)
{
 struct dentry *VAR_7 = FUNC_5(VAR_5);
 struct inode *VAR_8 = FUNC_3(VAR_7);
 nfs_readdir_descriptor_t VAR_9,
   *VAR_10 = &VAR_9;
 struct nfs_open_dir_context *VAR_11 = VAR_5->private_data;
 int VAR_12 = 0;

 FUNC_4(VAR_2, "NFS: readdir(%pD2) starting at cookie %llu\n",
   VAR_5, (long long)VAR_6->pos);
 FUNC_9(VAR_8, VAR_3);







 FUNC_6(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->file = VAR_5;
 VAR_10->ctx = VAR_6;
 VAR_10->dir_cookie = &VAR_11->dir_cookie;
 VAR_10->decode = FUNC_1(VAR_8)->decode_dirent;
 VAR_10->plus = FUNC_11(VAR_8, VAR_6);

 if (VAR_6->pos == 0 || FUNC_7(VAR_8))
  VAR_12 = FUNC_10(VAR_8, VAR_5->f_mapping);
 if (VAR_12 < 0)
  goto out;

 do {
  VAR_12 = FUNC_13(VAR_10);

  if (VAR_12 == -VAR_0) {
   VAR_12 = 0;

   if (*VAR_10->dir_cookie && !VAR_10->eof) {

    VAR_12 = FUNC_14(VAR_10);
    if (VAR_12 == 0)
     continue;
   }
   break;
  }
  if (VAR_12 == -VAR_1 && VAR_10->plus) {
   FUNC_2(VAR_4, &FUNC_0(VAR_8)->flags);
   FUNC_12(VAR_8);
   VAR_10->page_index = 0;
   VAR_10->plus = 0;
   VAR_10->eof = 0;
   continue;
  }
  if (VAR_12 < 0)
   break;

  VAR_12 = FUNC_8(VAR_10);
  if (VAR_12 < 0)
   break;
 } while (!VAR_10->eof);
out:
 if (VAR_12 > 0)
  VAR_12 = 0;
 FUNC_4(VAR_2, "NFS: readdir(%pD2) returns %d\n", VAR_5, VAR_12);
 return VAR_12;
}

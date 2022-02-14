
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct dentry* dentry; int * mnt; } ;
struct nameidata {unsigned int flags; scalar_t__ dfd; TYPE_3__ path; struct inode* inode; void* seq; void* m_seq; TYPE_3__ root; void* root_seq; scalar_t__ depth; int last_type; TYPE_1__* name; } ;
struct inode {int dummy; } ;
struct fs_struct {TYPE_3__ pwd; int seq; } ;
struct fd {TYPE_2__* file; } ;
struct dentry {struct inode* d_inode; int d_seq; } ;
struct TYPE_9__ {struct fs_struct* fs; } ;
struct TYPE_7__ {TYPE_3__ f_path; } ;
struct TYPE_6__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 void* FUNC_1 (int *) ;
 TYPE_5__* VAR_9 ;
 int FUNC_2 (struct dentry*) ;
 struct fd FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct fd) ;
 int FUNC_5 (struct fs_struct*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_10 ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;
 void* FUNC_10 (int *) ;
 void* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,unsigned int) ;
 int FUNC_13 (struct nameidata*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static const char *FUNC_15(struct nameidata *VAR_11, unsigned VAR_12)
{
 const char *VAR_13 = VAR_11->name->name;

 if (!*VAR_13)
  VAR_12 &= ~VAR_7;
 if (VAR_12 & VAR_7)
  FUNC_9();

 VAR_11->last_type = VAR_4;
 VAR_11->flags = VAR_12 | VAR_5 | VAR_6;
 VAR_11->depth = 0;
 if (VAR_12 & VAR_8) {
  struct dentry *VAR_14 = VAR_11->root.dentry;
  struct inode *VAR_15 = VAR_14->d_inode;
  if (*VAR_13 && FUNC_14(!FUNC_2(VAR_14)))
   return FUNC_0(-VAR_3);
  VAR_11->path = VAR_11->root;
  VAR_11->inode = VAR_15;
  if (VAR_12 & VAR_7) {
   VAR_11->seq = FUNC_1(&VAR_11->path.dentry->d_seq);
   VAR_11->root_seq = VAR_11->seq;
   VAR_11->m_seq = FUNC_10(&VAR_10);
  } else {
   FUNC_8(&VAR_11->path);
  }
  return VAR_13;
 }

 VAR_11->root.mnt = ((void*)0);
 VAR_11->path.mnt = ((void*)0);
 VAR_11->path.dentry = ((void*)0);

 VAR_11->m_seq = FUNC_10(&VAR_10);
 if (*VAR_13 == '/') {
  FUNC_13(VAR_11);
  if (FUNC_6(!FUNC_7(VAR_11)))
   return VAR_13;
  return FUNC_0(-VAR_2);
 } else if (VAR_11->dfd == VAR_0) {
  if (VAR_12 & VAR_7) {
   struct fs_struct *VAR_16 = VAR_9->fs;
   unsigned VAR_17;

   do {
    VAR_17 = FUNC_11(&VAR_16->seq);
    VAR_11->path = VAR_16->pwd;
    VAR_11->inode = VAR_11->path.dentry->d_inode;
    VAR_11->seq = FUNC_1(&VAR_11->path.dentry->d_seq);
   } while (FUNC_12(&VAR_16->seq, VAR_17));
  } else {
   FUNC_5(VAR_9->fs, &VAR_11->path);
   VAR_11->inode = VAR_11->path.dentry->d_inode;
  }
  return VAR_13;
 } else {

  struct fd VAR_18 = FUNC_3(VAR_11->dfd);
  struct dentry *VAR_19;

  if (!VAR_18.file)
   return FUNC_0(-VAR_1);

  VAR_19 = VAR_18.file->f_path.dentry;

  if (*VAR_13 && FUNC_14(!FUNC_2(VAR_19))) {
   FUNC_4(VAR_18);
   return FUNC_0(-VAR_3);
  }

  VAR_11->path = VAR_18.file->f_path;
  if (VAR_12 & VAR_7) {
   VAR_11->inode = VAR_11->path.dentry->d_inode;
   VAR_11->seq = FUNC_11(&VAR_11->path.dentry->d_seq);
  } else {
   FUNC_8(&VAR_11->path);
   VAR_11->inode = VAR_11->path.dentry->d_inode;
  }
  FUNC_4(VAR_18);
  return VAR_13;
 }
}

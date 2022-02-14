
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int actor; } ;
struct readdir_data {void* dirent; int used; scalar_t__ full; TYPE_1__ ctx; } ;
struct readdir_cd {scalar_t__ err; } ;
struct file {int dummy; } ;
struct buffered_dirent {scalar_t__ namlen; int d_type; int ino; int offset; int name; } ;
typedef scalar_t__ (* nfsd_filldir_t ) (struct readdir_cd*,int ,scalar_t__,int ,int ,int ) ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct file*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct file*,int ,int ) ;

__attribute__((used)) static __be32 FUNC_6(struct file *VAR_6, nfsd_filldir_t VAR_7,
        struct readdir_cd *VAR_8, loff_t *VAR_9)
{
 struct buffered_dirent *VAR_10;
 int VAR_11;
 int VAR_12;
 loff_t VAR_13;
 struct readdir_data VAR_14 = {
  .ctx.actor = VAR_4,
  .dirent = (void *)FUNC_1(VAR_1)
 };

 if (!VAR_14.dirent)
  return FUNC_4(-VAR_0);

 VAR_13 = *VAR_9;

 while (1) {
  unsigned int VAR_15;

  VAR_8->err = VAR_5;
  VAR_14.used = 0;
  VAR_14.full = 0;

  VAR_11 = FUNC_3(VAR_6, &VAR_14.ctx);
  if (VAR_14.full)
   VAR_11 = 0;

  if (VAR_11 < 0)
   break;

  VAR_12 = VAR_14.used;

  if (!VAR_12)
   break;

  VAR_10 = (struct buffered_dirent *)VAR_14.dirent;
  while (VAR_12 > 0) {
   VAR_13 = VAR_10->offset;

   if (VAR_7(VAR_8, VAR_10->name, VAR_10->namlen, VAR_10->offset,
     VAR_10->ino, VAR_10->d_type))
    break;

   if (VAR_8->err != VAR_3)
    break;

   VAR_15 = FUNC_0(sizeof(*VAR_10) + VAR_10->namlen,
           sizeof(u64));
   VAR_12 -= VAR_15;
   VAR_10 = (struct buffered_dirent *)((char *)VAR_10 + VAR_15);
  }
  if (VAR_12 > 0)
   break;

  VAR_13 = FUNC_5(VAR_6, 0, VAR_2);
 }

 FUNC_2((unsigned long)(VAR_14.dirent));

 if (VAR_11)
  return FUNC_4(VAR_11);

 *VAR_9 = VAR_13;
 return VAR_8->err;
}

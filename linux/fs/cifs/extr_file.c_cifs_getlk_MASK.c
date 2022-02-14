
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file_lock {void* fl_type; scalar_t__ fl_start; int fl_owner; scalar_t__ fl_end; } ;
struct file {scalar_t__ private_data; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct TYPE_6__ {int netfid; } ;
struct cifsFileInfo {TYPE_2__ fid; int tlink; } ;
struct TCP_Server_Info {TYPE_4__* vals; TYPE_3__* ops; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_8__ {int shared_lock_type; int exclusive_lock_type; } ;
struct TYPE_7__ {int (* mand_lock ) (unsigned int,struct cifsFileInfo*,scalar_t__,scalar_t__,int,int,int,int) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,int ,int ,scalar_t__,scalar_t__,struct file_lock*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct cifsFileInfo*,scalar_t__,scalar_t__,int,struct file_lock*) ;
 int FUNC_3 (struct file*,struct file_lock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,struct cifsFileInfo*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_6 (unsigned int,struct cifsFileInfo*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_7 (unsigned int,struct cifsFileInfo*,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_8 (unsigned int,struct cifsFileInfo*,scalar_t__,scalar_t__,int,int,int,int) ;
 struct cifs_tcon* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct file *VAR_6, struct file_lock *VAR_7, __u32 VAR_8,
    bool VAR_9, bool VAR_10, unsigned int VAR_11)
{
 int VAR_12 = 0;
 __u64 VAR_13 = 1 + VAR_7->fl_end - VAR_7->fl_start;
 struct cifsFileInfo *VAR_14 = (struct cifsFileInfo *)VAR_6->private_data;
 struct cifs_tcon *VAR_15 = FUNC_9(VAR_14->tlink);
 struct TCP_Server_Info *VAR_16 = VAR_15->ses->server;
 __u16 VAR_17 = VAR_14->fid.netfid;

 if (VAR_10) {
  int VAR_18;

  VAR_12 = FUNC_3(VAR_6, VAR_7);
  if (!VAR_12)
   return VAR_12;

  if (VAR_8 & VAR_16->vals->shared_lock_type)
   VAR_18 = VAR_0;
  else
   VAR_18 = VAR_1;
  VAR_12 = FUNC_0(VAR_11, VAR_15, VAR_17,
          FUNC_4(VAR_7->fl_owner),
          VAR_7->fl_start, VAR_13, VAR_7,
          VAR_18, VAR_9);
  return VAR_12;
 }

 VAR_12 = FUNC_2(VAR_14, VAR_7->fl_start, VAR_13, VAR_8, VAR_7);
 if (!VAR_12)
  return VAR_12;


 VAR_12 = VAR_16->ops->mand_lock(VAR_11, VAR_14, VAR_7->fl_start, VAR_13, VAR_8,
        1, 0, 0);
 if (VAR_12 == 0) {
  VAR_12 = VAR_16->ops->mand_lock(VAR_11, VAR_14, VAR_7->fl_start, VAR_13,
         VAR_8, 0, 1, 0);
  VAR_7->fl_type = VAR_3;
  if (VAR_12 != 0)
   FUNC_1(VAR_5, "Error unlocking previously locked range %d during test of lock\n",
     VAR_12);
  return 0;
 }

 if (VAR_8 & VAR_16->vals->shared_lock_type) {
  VAR_7->fl_type = VAR_4;
  return 0;
 }

 VAR_8 &= ~VAR_16->vals->exclusive_lock_type;

 VAR_12 = VAR_16->ops->mand_lock(VAR_11, VAR_14, VAR_7->fl_start, VAR_13,
        VAR_8 | VAR_16->vals->shared_lock_type,
        1, 0, 0);
 if (VAR_12 == 0) {
  VAR_12 = VAR_16->ops->mand_lock(VAR_11, VAR_14, VAR_7->fl_start, VAR_13,
   VAR_8 | VAR_16->vals->shared_lock_type, 0, 1, 0);
  VAR_7->fl_type = VAR_2;
  if (VAR_12 != 0)
   FUNC_1(VAR_5, "Error unlocking previously locked range %d during test of lock\n",
     VAR_12);
 } else
  VAR_7->fl_type = VAR_4;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fh_size; int fh_fileid_type; scalar_t__ fh_fsid; } ;
struct svc_fh {int fh_maxsize; TYPE_1__ fh_handle; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct svc_export {int ex_flags; TYPE_2__ ex_path; } ;
struct fid {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,struct fid*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct svc_fh *VAR_2, struct svc_export *VAR_3,
  struct dentry *VAR_4)
{
 if (VAR_4 != VAR_3->ex_path.dentry) {
  struct fid *VAR_5 = (struct fid *)
   (VAR_2->fh_handle.fh_fsid + VAR_2->fh_handle.fh_size/4 - 1);
  int VAR_6 = (VAR_2->fh_maxsize - VAR_2->fh_handle.fh_size)/4;
  int VAR_7 = !(VAR_3->ex_flags & VAR_1);

  VAR_2->fh_handle.fh_fileid_type =
   FUNC_0(VAR_4, VAR_5, &VAR_6, VAR_7);
  VAR_2->fh_handle.fh_size += VAR_6 * 4;
 } else {
  VAR_2->fh_handle.fh_fileid_type = VAR_0;
 }
}

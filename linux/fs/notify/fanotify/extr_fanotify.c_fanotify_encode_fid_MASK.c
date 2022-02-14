
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int * val; } ;
struct fanotify_fid {int * ext_fh; TYPE_1__ fsid; } ;
struct fanotify_event {int fh_len; struct fanotify_fid fid; } ;
typedef int gfp_t ;
typedef TYPE_1__ __kernel_fsid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*,int *,int*,int *) ;
 int * FUNC_1 (struct fanotify_fid*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct fanotify_event *VAR_5,
          struct inode *VAR_6, gfp_t VAR_7,
          __kernel_fsid_t *VAR_8)
{
 struct fanotify_fid *VAR_9 = &VAR_5->fid;
 int VAR_10, VAR_11 = 0;
 int VAR_12, VAR_13;

 VAR_9->ext_fh = ((void*)0);
 VAR_10 = 0;
 VAR_12 = -VAR_1;
 VAR_13 = FUNC_0(VAR_6, ((void*)0), &VAR_10, ((void*)0));
 if (!VAR_10)
  goto out_err;

 VAR_11 = VAR_10 << 2;
 if (VAR_11 > VAR_3) {

  VAR_12 = -VAR_2;
  VAR_9->ext_fh = FUNC_3(VAR_11, VAR_7);
  if (!VAR_9->ext_fh)
   goto out_err;
 }

 VAR_13 = FUNC_0(VAR_6, FUNC_1(VAR_9, VAR_11),
     &VAR_10, ((void*)0));
 VAR_12 = -VAR_0;
 if (!VAR_13 || VAR_13 == VAR_4 || VAR_11 != VAR_10 << 2)
  goto out_err;

 VAR_9->fsid = *VAR_8;
 VAR_5->fh_len = VAR_11;

 return VAR_13;

out_err:
 FUNC_4("fanotify: failed to encode fid (fsid=%x.%x, "
       "type=%d, bytes=%d, err=%i)\n",
       VAR_8->val[0], VAR_8->val[1], VAR_13, VAR_11, VAR_12);
 FUNC_2(VAR_9->ext_fh);
 VAR_9->ext_fh = ((void*)0);
 VAR_5->fh_len = 0;

 return VAR_4;
}

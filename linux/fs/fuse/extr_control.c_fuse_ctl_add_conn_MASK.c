
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fuse_conn {int dev; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* s_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 struct dentry* FUNC_1 (struct dentry*,struct fuse_conn*,char*,int,int,int *,int *) ;
 int FUNC_2 (struct fuse_conn*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*,char*,int) ;

int FUNC_5(struct fuse_conn *VAR_10)
{
 struct dentry *VAR_11;
 char VAR_12[32];

 if (!VAR_5)
  return 0;

 VAR_11 = VAR_5->s_root;
 FUNC_3(FUNC_0(VAR_11));
 FUNC_4(VAR_12, "%u", VAR_10->dev);
 VAR_11 = FUNC_1(VAR_11, VAR_10, VAR_12, VAR_1 | 0500, 2,
         &VAR_8,
         &VAR_9);
 if (!VAR_11)
  goto err;

 if (!FUNC_1(VAR_11, VAR_10, "waiting", VAR_2 | 0400, 1,
     ((void*)0), &VAR_7) ||
     !FUNC_1(VAR_11, VAR_10, "abort", VAR_2 | 0200, 1,
     ((void*)0), &VAR_6) ||
     !FUNC_1(VAR_11, VAR_10, "max_background", VAR_2 | 0600,
     1, ((void*)0), &VAR_4) ||
     !FUNC_1(VAR_11, VAR_10, "congestion_threshold",
     VAR_2 | 0600, 1, ((void*)0),
     &VAR_3))
  goto err;

 return 0;

 err:
 FUNC_2(VAR_10);
 return -VAR_0;
}

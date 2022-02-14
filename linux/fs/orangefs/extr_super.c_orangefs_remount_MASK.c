
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct orangefs_sb_info_s {scalar_t__ mount_pending; int id; int devname; } ;
struct TYPE_14__ {scalar_t__ features; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_15__ {TYPE_6__ features; TYPE_2__ fs_mount; } ;
struct TYPE_16__ {TYPE_7__ resp; } ;
struct TYPE_11__ {scalar_t__ features; } ;
struct TYPE_9__ {int orangefs_config_server; } ;
struct TYPE_12__ {TYPE_3__ features; TYPE_1__ fs_mount; } ;
struct TYPE_13__ {TYPE_4__ req; } ;
struct orangefs_kernel_op_s {TYPE_8__ downcall; TYPE_5__ upcall; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 struct orangefs_kernel_op_s* FUNC_1 (int ) ;
 int FUNC_2 (struct orangefs_kernel_op_s*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct orangefs_kernel_op_s*,char*,int) ;
 int FUNC_4 (int,int ,int ) ;

int FUNC_5(struct orangefs_sb_info_s *VAR_10)
{
 struct orangefs_kernel_op_s *VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_0(VAR_2, "orangefs_remount: called\n");

 VAR_11 = FUNC_1(VAR_7);
 if (!VAR_11)
  return -VAR_1;
 FUNC_4(VAR_11->upcall.req.fs_mount.orangefs_config_server,
  VAR_10->devname,
  VAR_3);

 FUNC_0(VAR_2,
       "Attempting ORANGEFS Remount via host %s\n",
       VAR_11->upcall.req.fs_mount.orangefs_config_server);






 VAR_12 = FUNC_3(VAR_11, "orangefs_remount",
  VAR_5 | VAR_4);
 FUNC_0(VAR_2,
       "orangefs_remount: mount got return value of %d\n",
       VAR_12);
 if (VAR_12 == 0) {





  VAR_10->id = VAR_11->downcall.resp.fs_mount.id;
  VAR_10->mount_pending = 0;
 }

 FUNC_2(VAR_11);

 if (VAR_9 >= 20906) {
  VAR_11 = FUNC_1(VAR_6);
  if (!VAR_11)
   return -VAR_1;
  VAR_11->upcall.req.features.features = 0;
  VAR_12 = FUNC_3(VAR_11, "orangefs_features",
      VAR_5 | VAR_4);
  if (!VAR_12)
   VAR_8 =
       VAR_11->downcall.resp.features.features;
  else
   VAR_8 = 0;
  FUNC_2(VAR_11);
 } else {
  VAR_8 = 0;
 }

 return VAR_12;
}

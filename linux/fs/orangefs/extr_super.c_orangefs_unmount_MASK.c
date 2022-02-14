
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int orangefs_config_server; int fs_id; } ;
struct TYPE_6__ {TYPE_1__ fs_umount; } ;
struct TYPE_5__ {TYPE_3__ req; } ;
struct orangefs_kernel_op_s {TYPE_2__ upcall; } ;
typedef int __s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct orangefs_kernel_op_s* FUNC_1 (int ) ;
 int FUNC_2 (struct orangefs_kernel_op_s*) ;
 int FUNC_3 (struct orangefs_kernel_op_s*,char*,int ) ;
 int FUNC_4 (int ,char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(int VAR_3, __s32 VAR_4, const char *VAR_5)
{
 struct orangefs_kernel_op_s *VAR_6;
 int VAR_7;
 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->upcall.req.fs_umount.id = VAR_3;
 VAR_6->upcall.req.fs_umount.fs_id = VAR_4;
 FUNC_4(VAR_6->upcall.req.fs_umount.orangefs_config_server,
     VAR_5, VAR_1 - 1);
 VAR_7 = FUNC_3(VAR_6, "orangefs_fs_umount", 0);

 if (VAR_7)
  FUNC_0("orangefs_unmount: service_operation %d\n", VAR_7);
 FUNC_2(VAR_6);
 return VAR_7;
}

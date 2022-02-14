
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct autofs_sb_info {int sub_version; } ;
struct TYPE_2__ {int sub_version; } ;
struct autofs_dev_ioctl {TYPE_1__ protosubver; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0,
     struct autofs_sb_info *VAR_1,
     struct autofs_dev_ioctl *VAR_2)
{
 VAR_2->protosubver.sub_version = VAR_1->sub_version;
 return 0;
}

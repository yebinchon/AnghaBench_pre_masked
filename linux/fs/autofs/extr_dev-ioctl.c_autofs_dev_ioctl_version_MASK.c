
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_dev_ioctl {int ver_minor; int ver_major; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2,
        struct autofs_sb_info *VAR_3,
        struct autofs_dev_ioctl *VAR_4)
{

 VAR_4->ver_major = VAR_0;
 VAR_4->ver_minor = VAR_1;
 return 0;
}

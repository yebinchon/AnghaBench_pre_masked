
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct TYPE_2__ {int status; scalar_t__ token; } ;
struct autofs_dev_ioctl {TYPE_1__ fail; } ;
typedef scalar_t__ autofs_wqt_t ;


 int VAR_0 ;
 int FUNC_0 (struct autofs_sb_info*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1,
     struct autofs_sb_info *VAR_2,
     struct autofs_dev_ioctl *VAR_3)
{
 autofs_wqt_t VAR_4;
 int VAR_5;

 VAR_4 = (autofs_wqt_t) VAR_3->fail.token;
 VAR_5 = VAR_3->fail.status < 0 ? VAR_3->fail.status : -VAR_0;
 return FUNC_0(VAR_2, VAR_4, VAR_5);
}

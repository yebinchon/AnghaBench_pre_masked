
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msg; } ;
struct TYPE_6__ {TYPE_2__ in; } ;
struct TYPE_4__ {int size_out; int size_in; } ;
struct vbg_ioctl_log {TYPE_3__ u; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct vbg_ioctl_log *VAR_1)
{
 if (VAR_1->hdr.size_out != sizeof(VAR_1->hdr))
  return -VAR_0;

 FUNC_0("%.*s", (int)(VAR_1->hdr.size_in - sizeof(VAR_1->hdr)),
   VAR_1->u.in.msg);

 return 0;
}

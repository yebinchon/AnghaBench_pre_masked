
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int handle_in_r3; int balloon_chunks; } ;
struct TYPE_6__ {TYPE_2__ out; } ;
struct vbg_ioctl_check_balloon {TYPE_3__ u; int hdr; } ;
struct TYPE_4__ {int chunks; } ;
struct vbg_dev {TYPE_1__ mem_balloon; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct vbg_dev *VAR_1,
       struct vbg_ioctl_check_balloon *VAR_2)
{
 if (FUNC_0(&VAR_2->hdr, 0, sizeof(VAR_2->u.out)))
  return -VAR_0;

 VAR_2->u.out.balloon_chunks = VAR_1->mem_balloon.chunks;




 VAR_2->u.out.handle_in_r3 = 0;

 return 0;
}

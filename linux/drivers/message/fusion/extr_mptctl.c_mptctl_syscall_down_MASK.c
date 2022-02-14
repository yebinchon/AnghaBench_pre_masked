
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ ioctl_cmds; } ;
typedef TYPE_2__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int
FUNC_2(MPT_ADAPTER *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3) {
  if (!FUNC_1(&VAR_2->ioctl_cmds.mutex))
   VAR_4 = -VAR_0;
 } else {
  if (FUNC_0(&VAR_2->ioctl_cmds.mutex))
   VAR_4 = -VAR_1;
 }
 return VAR_4;
}

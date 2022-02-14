
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ibmvfc_iu {int dummy; } ibmvfc_iu ;
struct vio_dev {int dummy; } ;
struct TYPE_2__ {int cmd_per_lun; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(struct vio_dev *VAR_2)
{
 unsigned long VAR_3 = VAR_1 * sizeof(union ibmvfc_iu);
 return VAR_3 + ((512 * 1024) * VAR_0.cmd_per_lun);
}

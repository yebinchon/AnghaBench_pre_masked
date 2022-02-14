
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {int cmd_region; } ;
struct ccw_cmd_region {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vfio_ccw_private*,int ,int *,int,int,int ) ;

int FUNC_1(struct vfio_ccw_private *VAR_4)
{
 return FUNC_0(VAR_4,
         VAR_2,
         &VAR_3,
         sizeof(struct ccw_cmd_region),
         VAR_0 |
         VAR_1,
         VAR_4->cmd_region);
}

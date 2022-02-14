
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {int dummy; } ;
struct subchannel {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfio_ccw_private* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vfio_ccw_private*,int ) ;

__attribute__((used)) static void FUNC_3(struct subchannel *VAR_2)
{
 struct vfio_ccw_private *VAR_3 = FUNC_0(&VAR_2->dev);

 FUNC_1(VAR_0);
 FUNC_2(VAR_3, VAR_1);
}

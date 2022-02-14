
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_ccw_private {int state; struct subchannel* sch; } ;
struct subchannel {int dev; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct subchannel*,int ) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vfio_ccw_private *VAR_2,
   enum vfio_ccw_event VAR_3)
{
 struct subchannel *VAR_4 = VAR_2->sch;

 FUNC_0(2, "notoper");
 FUNC_0(2, FUNC_2(&VAR_4->dev));





 FUNC_1(VAR_4, VAR_0);
 VAR_2->state = VAR_1;
}

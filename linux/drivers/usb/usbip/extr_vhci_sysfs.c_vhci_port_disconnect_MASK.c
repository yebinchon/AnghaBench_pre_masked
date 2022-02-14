
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_hcd {struct vhci* vhci; struct vhci_device* vdev; } ;
struct TYPE_2__ {scalar_t__ status; int lock; } ;
struct vhci_device {TYPE_1__ ud; } ;
struct vhci {int lock; } ;
typedef size_t __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct vhci_hcd *VAR_3, __u32 VAR_4)
{
 struct vhci_device *VAR_5 = &VAR_3->vdev[VAR_4];
 struct vhci *VAR_6 = VAR_3->vhci;
 unsigned long VAR_7;

 FUNC_5("enter\n");


 FUNC_2(&VAR_6->lock, VAR_7);
 FUNC_1(&VAR_5->ud.lock);

 if (VAR_5->ud.status == VAR_2) {
  FUNC_0("not connected %d\n", VAR_5->ud.status);


  FUNC_3(&VAR_5->ud.lock);
  FUNC_4(&VAR_6->lock, VAR_7);

  return -VAR_0;
 }


 FUNC_3(&VAR_5->ud.lock);
 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_6(&VAR_5->ud, VAR_1);

 return 0;
}

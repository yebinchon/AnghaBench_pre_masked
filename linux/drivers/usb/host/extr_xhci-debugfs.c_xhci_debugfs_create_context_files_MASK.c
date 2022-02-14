
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_device {int debugfs_private; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xhci_hcd*,int ,int ,int ,struct dentry*,int *) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_2,
           struct dentry *VAR_3,
           int VAR_4)
{
 struct xhci_virt_device *VAR_5 = VAR_2->devs[VAR_4];

 FUNC_1(VAR_2, VAR_0,
      FUNC_0(VAR_0),
      VAR_5->debugfs_private,
      VAR_3, &VAR_1);
}

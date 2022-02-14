
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_ring {int dummy; } ;
struct xhci_hcd {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (char const*,struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (struct xhci_hcd*,int ,int ,struct xhci_ring**,struct dentry*,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct dentry *FUNC_3(struct xhci_hcd *VAR_2,
         struct xhci_ring **VAR_3,
         const char *VAR_4,
         struct dentry *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_0),
      VAR_3, VAR_6, &VAR_1);

 return VAR_6;
}

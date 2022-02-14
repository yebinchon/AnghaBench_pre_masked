
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_port {int dummy; } ;
struct xhci_hcd {struct xhci_port* hw_ports; int hcs_params1; } ;
struct dentry {int dummy; } ;
typedef int port_name ;


 unsigned int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,struct xhci_port*,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_1,
          struct dentry *VAR_2)
{
 unsigned int VAR_3;
 char VAR_4[8];
 struct xhci_port *VAR_5;
 struct dentry *VAR_6;

 VAR_3 = FUNC_0(VAR_1->hcs_params1);

 VAR_2 = FUNC_1("ports", VAR_2);

 while (VAR_3--) {
  FUNC_3(VAR_4, sizeof(VAR_4), "port%02d",
     VAR_3 + 1);
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  VAR_5 = &VAR_1->hw_ports[VAR_3];
  FUNC_2("portsc", 0644, VAR_6, VAR_5, &VAR_0);
 }
}

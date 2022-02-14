
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_port {int addr; } ;
struct seq_file {struct xhci_port* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct xhci_port *VAR_2 = VAR_0->private;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->addr);
 FUNC_1(VAR_0, "%s\n", FUNC_2(VAR_3));

 return 0;
}

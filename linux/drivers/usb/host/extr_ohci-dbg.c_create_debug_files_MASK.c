
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int bus_name; } ;
struct ohci_hcd {struct dentry* debug_dir; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct usb_bus self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ,struct dentry*,struct ohci_hcd*,int *) ;
 int FUNC_2 (struct ohci_hcd*,char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct ohci_hcd*) ;

__attribute__((used)) static inline void FUNC_4 (struct ohci_hcd *VAR_5)
{
 struct usb_bus *VAR_6 = &FUNC_3(VAR_5)->self;
 struct dentry *VAR_7;

 VAR_7 = FUNC_0(VAR_6->bus_name, VAR_4);
 VAR_5->debug_dir = VAR_7;

 FUNC_1("async", VAR_0, VAR_7, VAR_5, &VAR_1);
 FUNC_1("periodic", VAR_0, VAR_7, VAR_5,
       &VAR_2);
 FUNC_1("registers", VAR_0, VAR_7, VAR_5,
       &VAR_3);

 FUNC_2 (VAR_5, "created debug files\n");
}

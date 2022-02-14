
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asus_wmi_debugfs_node {int name; struct asus_wmi* asus; } ;
struct TYPE_4__ {int root; int ctrl_param; int dev_id; int method_id; } ;
struct asus_wmi {TYPE_2__ debug; TYPE_1__* driver; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct asus_wmi_debugfs_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct asus_wmi_debugfs_node* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,int ,struct asus_wmi_debugfs_node*,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct asus_wmi *VAR_5)
{
 int VAR_6;

 VAR_5->debug.root = FUNC_1(VAR_5->driver->name, ((void*)0));

 FUNC_3("method_id", VAR_1 | VAR_2, VAR_5->debug.root,
      &VAR_5->debug.method_id);

 FUNC_3("dev_id", VAR_1 | VAR_2, VAR_5->debug.root,
      &VAR_5->debug.dev_id);

 FUNC_3("ctrl_param", VAR_1 | VAR_2, VAR_5->debug.root,
      &VAR_5->debug.ctrl_param);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  struct asus_wmi_debugfs_node *VAR_7 = &VAR_3[VAR_6];

  VAR_7->asus = VAR_5;
  FUNC_2(VAR_7->name, VAR_0 | VAR_1,
        VAR_5->debug.root, VAR_7,
        &VAR_4);
 }
}

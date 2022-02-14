
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
struct ionic_identity {TYPE_2__ port; } ;
struct ionic_dev {scalar_t__ port_info_pa; int * port_info; int port_info_sz; TYPE_1__* dev_cmd_regs; } ;
struct ionic {int dev; int dev_cmd_lock; struct ionic_dev idev; struct ionic_identity ident; } ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,int *,scalar_t__) ;
 int FUNC_4 (struct ionic_dev*) ;
 int FUNC_5 (struct ionic_dev*,int ) ;
 int FUNC_6 (struct ionic*,int ) ;
 int FUNC_7 (int *,int *,size_t) ;
 size_t FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ionic *VAR_5)
{
 struct ionic_identity *VAR_6 = &VAR_5->ident;
 struct ionic_dev *VAR_7 = &VAR_5->idev;
 size_t VAR_8;
 int VAR_9;

 if (VAR_7->port_info)
  return 0;

 VAR_7->port_info_sz = FUNC_0(sizeof(*VAR_7->port_info), VAR_4);
 VAR_7->port_info = FUNC_2(VAR_5->dev, VAR_7->port_info_sz,
          &VAR_7->port_info_pa,
          VAR_2);
 if (!VAR_7->port_info) {
  FUNC_1(VAR_5->dev, "Failed to allocate port info, aborting\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_8(sizeof(VAR_6->port.config), sizeof(VAR_7->dev_cmd_regs->data));

 FUNC_9(&VAR_5->dev_cmd_lock);

 FUNC_7(&VAR_7->dev_cmd_regs->data, &VAR_6->port.config, VAR_8);
 FUNC_4(VAR_7);
 VAR_9 = FUNC_6(VAR_5, VAR_0);

 FUNC_5(&VAR_5->idev, VAR_3);
 (void)FUNC_6(VAR_5, VAR_0);

 FUNC_10(&VAR_5->dev_cmd_lock);
 if (VAR_9) {
  FUNC_1(VAR_5->dev, "Failed to init port\n");
  FUNC_3(VAR_5->dev, VAR_7->port_info_sz,
      VAR_7->port_info, VAR_7->port_info_pa);
  VAR_7->port_info = ((void*)0);
  VAR_7->port_info_pa = 0;
 }

 return VAR_9;
}

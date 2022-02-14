
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct icom_port {int port; TYPE_3__* global_reg; TYPE_2__* adapter; } ;
struct TYPE_11__ {unsigned long processor_id; } ;
struct TYPE_10__ {unsigned long processor_id; int * global_control_reg; } ;
struct TYPE_9__ {int control_2; int control; } ;
struct TYPE_8__ {TYPE_1__* pci_dev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_5 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_6(struct icom_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_0, VAR_5);

 VAR_6 = VAR_3->port;
 if (VAR_6 >= FUNC_0(VAR_2)) {
  FUNC_1(&VAR_3->adapter->pci_dev->dev,
   "Invalid port assignment\n");
  goto unlock;
 }

 if (VAR_6 == 0 || VAR_6 == 1)
  VAR_2[VAR_6].global_control_reg = &VAR_3->global_reg->control;
 else
  VAR_2[VAR_6].global_control_reg = &VAR_3->global_reg->control_2;

 VAR_4 = FUNC_2(VAR_2[VAR_6].global_control_reg);
 VAR_4 = (VAR_4 & ~VAR_1[VAR_6].processor_id) | VAR_2[VAR_6].processor_id;
 FUNC_5(VAR_4, VAR_2[VAR_6].global_control_reg);


 FUNC_2(VAR_2[VAR_6].global_control_reg);

unlock:
 FUNC_4(&VAR_0, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct icom_port {int port; TYPE_4__* dram; TYPE_3__* global_reg; TYPE_2__* adapter; } ;
struct TYPE_11__ {unsigned long processor_id; int * global_int_mask; } ;
struct TYPE_10__ {int CmdReg; } ;
struct TYPE_9__ {int int_mask_2; int int_mask; } ;
struct TYPE_8__ {TYPE_1__* pci_dev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (TYPE_5__*) ;
 unsigned char VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 unsigned char FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct icom_port*,char*,int ) ;
 int FUNC_7 (unsigned char,int *) ;
 int FUNC_8 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_9(struct icom_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_1, VAR_6);
 FUNC_6(VAR_3, "SHUTDOWN", 0);




 VAR_7 = VAR_3->port;
 if (VAR_7 >= FUNC_0(VAR_2)) {
  FUNC_1(&VAR_3->adapter->pci_dev->dev,
   "Invalid port assignment\n");
  goto unlock;
 }
 if (VAR_7 == 0 || VAR_7 == 1)
  VAR_2[VAR_7].global_int_mask = &VAR_3->global_reg->int_mask;
 else
  VAR_2[VAR_7].global_int_mask = &VAR_3->global_reg->int_mask_2;

 VAR_4 = FUNC_3(VAR_2[VAR_7].global_int_mask);
 FUNC_8(VAR_4 | VAR_2[VAR_7].processor_id, VAR_2[VAR_7].global_int_mask);


 FUNC_3(VAR_2[VAR_7].global_int_mask);

unlock:
 FUNC_5(&VAR_1, VAR_6);




 VAR_5 = FUNC_2(&VAR_3->dram->CmdReg);
 if (VAR_5 & VAR_0) {
  FUNC_7(VAR_5 & ~VAR_0, &VAR_3->dram->CmdReg);
 }
}

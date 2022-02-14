
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct icom_port {unsigned char cable_id; int port; int int_reg; TYPE_4__* global_reg; TYPE_3__* adapter; TYPE_1__* dram; } ;
struct TYPE_11__ {unsigned long processor_id; int * global_int_mask; } ;
struct TYPE_10__ {int int_mask_2; int int_mask; } ;
struct TYPE_9__ {TYPE_2__* pci_dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int cable_id; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_2 (struct icom_port*) ;
 unsigned char FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct icom_port*,char*,unsigned char) ;
 int FUNC_8 (unsigned long,int *) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct icom_port *VAR_7)
{
 unsigned long VAR_8;
 unsigned char VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_7(VAR_7, "STARTUP", 0);

 if (!VAR_7->dram) {

  FUNC_1(&VAR_7->adapter->pci_dev->dev,
   "Unusable Port, port configuration missing\n");
  return -VAR_1;
 }




 VAR_10 = FUNC_3(&VAR_7->dram->cable_id);
 FUNC_7(VAR_7, "CABLE_ID", VAR_10);


 VAR_9 = (VAR_10 & VAR_2) >> 4;


 if (!(VAR_10 & VAR_3) ||
     (VAR_9 != VAR_7->cable_id)) {


  FUNC_2(VAR_7);


  VAR_10 = FUNC_3(&VAR_7->dram->cable_id);
  VAR_9 = (VAR_10 & VAR_2) >> 4;
  if (!(VAR_10 & VAR_3) ||
      (VAR_7->cable_id == VAR_4))
   return -VAR_0;
 }




 FUNC_5(&VAR_5, VAR_11);
 VAR_12 = VAR_7->port;
 if (VAR_12 >= FUNC_0(VAR_6)) {
  FUNC_1(&VAR_7->adapter->pci_dev->dev,
   "Invalid port assignment\n");
  goto unlock;
 }

 if (VAR_12 == 0 || VAR_12 == 1)
  VAR_6[VAR_12].global_int_mask = &VAR_7->global_reg->int_mask;
 else
  VAR_6[VAR_12].global_int_mask = &VAR_7->global_reg->int_mask_2;

 if (VAR_12 == 0 || VAR_12 == 2)
  FUNC_9(0x00FF, VAR_7->int_reg);
 else
  FUNC_9(0x3F00, VAR_7->int_reg);

 VAR_8 = FUNC_4(VAR_6[VAR_12].global_int_mask);
 FUNC_8(VAR_8 & ~VAR_6[VAR_12].processor_id, VAR_6[VAR_12].global_int_mask);


 FUNC_4(VAR_6[VAR_12].global_int_mask);

unlock:
 FUNC_6(&VAR_5, VAR_11);
 return 0;
}

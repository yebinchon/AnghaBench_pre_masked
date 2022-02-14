
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ScsiReqBlk {scalar_t__ total_xfer_length; int sg_index; scalar_t__ sg_count; int sg_bus_addr; TYPE_3__* dcb; struct SGentry* segment_x; } ;
struct SGentry {scalar_t__ length; int address; } ;
struct TYPE_6__ {TYPE_2__* acb; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ScsiReqBlk*) ;

__attribute__((used)) static void FUNC_4(struct ScsiReqBlk *VAR_3, u32 VAR_4)
{
 u8 VAR_5;
 u32 VAR_6 = VAR_3->total_xfer_length - VAR_4;
 struct SGentry *VAR_7 = VAR_3->segment_x + VAR_3->sg_index;

 FUNC_2(VAR_0,
  "sg_update_list: Transferred %i of %i bytes, %i remain\n",
  VAR_6, VAR_3->total_xfer_length, VAR_4);
 if (VAR_6 == 0) {

  return;
 }

 FUNC_3(VAR_3);
 VAR_3->total_xfer_length = VAR_4;
 for (VAR_5 = VAR_3->sg_index; VAR_5 < VAR_3->sg_count; VAR_5++) {
  if (VAR_6 >= VAR_7->length) {

   VAR_6 -= VAR_7->length;
  } else {

   FUNC_0(&VAR_3->dcb->acb->dev->dev,
     VAR_3->sg_bus_addr, VAR_2,
     VAR_1);
   VAR_7->length -= VAR_6;
   VAR_7->address += VAR_6;
   VAR_3->sg_index = VAR_5;
   FUNC_1(&VAR_3->dcb->acb->dev->dev,
     VAR_3->sg_bus_addr, VAR_2,
     VAR_1);
   break;
  }
  VAR_7++;
 }
 FUNC_3(VAR_3);
}

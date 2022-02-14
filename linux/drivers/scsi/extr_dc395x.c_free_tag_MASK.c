
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {int tag_number; } ;
struct DeviceCtlBlk {int tag_mask; } ;



__attribute__((used)) static void FUNC_0(struct DeviceCtlBlk *VAR_0, struct ScsiReqBlk *VAR_1)
{
 if (VAR_1->tag_number < 255) {
  VAR_0->tag_mask &= ~(1 << VAR_1->tag_number);
  VAR_1->tag_number = 255;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dev_type; unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {TYPE_2__ rdc_data; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_6__ {unsigned int record; int head; int cyl; } ;
struct TYPE_10__ {int head; int cyl; } ;
struct TYPE_8__ {int orientation; int operation; } ;
struct TYPE_9__ {int length_valid; } ;
struct LRE_eckd_data {int sector; int count; unsigned int length; int extended_operation; int extended_parameter_length; int* extended_parameter; TYPE_1__ search_arg; TYPE_5__ seek_addr; TYPE_3__ operation; TYPE_4__ auxiliary; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 () ;

 int VAR_0 ;
 int FUNC_1 (int ,struct dasd_device*,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct LRE_eckd_data*) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct LRE_eckd_data*,int ,int) ;
 int FUNC_5 (TYPE_5__*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct ccw1 *VAR_2, struct LRE_eckd_data *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5,
         int VAR_6, int VAR_7, struct dasd_device *VAR_8,
         unsigned int VAR_9, unsigned int VAR_10)
{
 struct dasd_eckd_private *VAR_11 = VAR_8->private;
 int VAR_12;
 int VAR_13, VAR_14;

 if (VAR_2) {
  VAR_2->cmd_code = VAR_0;
  VAR_2->flags = 0;
  if (VAR_7 == 134)
   VAR_2->count = 22;
  else
   VAR_2->count = 20;
  VAR_2->cda = (__u32)FUNC_2(VAR_3);
 }

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_12 = 0;
 if (VAR_5) {
  switch (VAR_11->rdc_data.dev_type) {
  case 0x3390:
   VAR_13 = FUNC_3(VAR_9 + 6, 232);
   VAR_14 = 9 + FUNC_3(VAR_9 + 6 * (VAR_13 + 1), 34);
   VAR_12 = (49 + (VAR_5 - 1) * (10 + VAR_14)) / 8;
   break;
  case 0x3380:
   VAR_14 = 7 + FUNC_3(VAR_9 + 12, 32);
   VAR_12 = (39 + (VAR_5 - 1) * (8 + VAR_14)) / 7;
   break;
  }
 }
 VAR_3->sector = VAR_12;




 VAR_3->count = VAR_6;
 switch (VAR_7) {
 case 133:
  VAR_3->operation.orientation = 0x3;
  VAR_3->operation.operation = 0x03;
  break;
 case 144:
  VAR_3->operation.orientation = 0x3;
  VAR_3->operation.operation = 0x16;
  break;
 case 129:
  VAR_3->operation.orientation = 0x1;
  VAR_3->operation.operation = 0x03;
  VAR_3->count++;
  break;
 case 140:
  VAR_3->operation.orientation = 0x3;
  VAR_3->operation.operation = 0x16;
  VAR_3->count++;
  break;
 case 137:
 case 130:
 case 132:
 case 131:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_9;
  VAR_3->operation.operation = 0x01;
  break;
 case 136:
 case 135:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_9;
  VAR_3->operation.operation = 0x03;
  break;
 case 134:
  VAR_3->operation.orientation = 0x0;
  VAR_3->operation.operation = 0x3F;
  VAR_3->extended_operation = 0x11;
  VAR_3->length = 0;
  VAR_3->extended_parameter_length = 0x02;
  if (VAR_3->count > 8) {
   VAR_3->extended_parameter[0] = 0xFF;
   VAR_3->extended_parameter[1] = 0xFF;
   VAR_3->extended_parameter[1] <<= (16 - VAR_6);
  } else {
   VAR_3->extended_parameter[0] = 0xFF;
   VAR_3->extended_parameter[0] <<= (8 - VAR_6);
   VAR_3->extended_parameter[1] = 0x00;
  }
  VAR_3->sector = 0xFF;
  break;
 case 128:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_9;
  VAR_3->operation.operation = 0x3F;
  VAR_3->extended_operation = 0x23;
  break;
 case 148:
 case 141:
 case 143:
 case 142:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_9;
  VAR_3->operation.operation = 0x06;
  break;
 case 147:
 case 146:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_9;
  VAR_3->operation.operation = 0x16;
  break;
 case 145:
  VAR_3->operation.operation = 0x06;
  break;
 case 139:
  VAR_3->operation.orientation = 0x1;
  VAR_3->operation.operation = 0x0C;
  VAR_3->extended_parameter_length = 0;
  VAR_3->sector = 0xFF;
  break;
 case 138:
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->length = VAR_10;
  VAR_3->operation.operation = 0x0C;
  break;
 case 149:
  VAR_3->length = VAR_9;
  VAR_3->auxiliary.length_valid = 0x1;
  VAR_3->operation.operation = 0x0b;
  break;
 default:
  FUNC_1(VAR_1, VAR_8,
       "fill LRE unknown opcode 0x%x", VAR_7);
  FUNC_0();
 }
 FUNC_5(&VAR_3->seek_addr,
   VAR_4 / VAR_11->rdc_data.trk_per_cyl,
   VAR_4 % VAR_11->rdc_data.trk_per_cyl);
 VAR_3->search_arg.cyl = VAR_3->seek_addr.cyl;
 VAR_3->search_arg.head = VAR_3->seek_addr.head;
 VAR_3->search_arg.record = VAR_5;
}

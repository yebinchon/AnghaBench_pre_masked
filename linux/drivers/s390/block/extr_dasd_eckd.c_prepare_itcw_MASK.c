
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct itcw {int dummy; } ;
struct dcw {int dummy; } ;
struct TYPE_14__ {unsigned int trk_per_cyl; int dev_type; } ;
struct TYPE_18__ {scalar_t__ operation; int nr_cyl; } ;
struct TYPE_17__ {scalar_t__ type; } ;
struct dasd_eckd_private {int real_cyl; TYPE_1__ rdc_data; TYPE_5__ attrib; TYPE_4__ uid; TYPE_3__* ned; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct TYPE_19__ {int define_extent; int verify_base; int hyper_pav; int time_stamp; } ;
struct TYPE_15__ {unsigned int record; int head; int cyl; } ;
struct TYPE_13__ {int head; int cyl; } ;
struct TYPE_12__ {int check_bytes; int length_valid; int length_scope; int imbedded_ccw_valid; } ;
struct TYPE_22__ {int orientation; int operation; } ;
struct LRE_eckd_data {int extended_operation; int sector; unsigned int length; int imbedded_ccw; int count; TYPE_2__ search_arg; TYPE_11__ seek_addr; TYPE_10__ auxiliary; TYPE_9__ operation; } ;
struct TYPE_21__ {scalar_t__ operation; int mode; } ;
struct TYPE_20__ {int perm; } ;
struct DE_eckd_data {unsigned int blk_size; int ga_extended; int ep_format; unsigned int ep_rec_per_track; TYPE_11__ end_ext; TYPE_11__ beg_ext; TYPE_8__ attributes; TYPE_7__ mask; } ;
struct PFX_eckd_data {int format; TYPE_6__ validity; int base_lss; int base_address; struct LRE_eckd_data locate_record; struct DE_eckd_data define_extent; } ;
typedef int pfxdata ;
struct TYPE_16__ {int ID; int unit_addr; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct dasd_device*,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (struct dcw*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (unsigned int,int) ;
 struct dcw* FUNC_4 (struct itcw*,int ,int ,struct PFX_eckd_data*,int,unsigned int) ;
 int FUNC_5 (struct PFX_eckd_data*,int ,int) ;
 int FUNC_6 (TYPE_11__*,int,unsigned int) ;
 int FUNC_7 (int *,struct DE_eckd_data*,struct dasd_device*) ;

__attribute__((used)) static int FUNC_8(struct itcw *VAR_8,
   unsigned int VAR_9, unsigned int VAR_10, int VAR_11,
   struct dasd_device *VAR_12,
   struct dasd_device *VAR_13,
   unsigned int VAR_14, int VAR_15,
   unsigned int VAR_16,
   unsigned int VAR_17,
   unsigned int VAR_18,
   unsigned int VAR_19)
{
 struct PFX_eckd_data VAR_20;
 struct dasd_eckd_private *VAR_21, *VAR_22;
 struct DE_eckd_data *VAR_23;
 struct LRE_eckd_data *VAR_24;
 struct dcw *VAR_25;

 u32 VAR_26, VAR_27;
 u16 VAR_28, VAR_29, VAR_30;
 u8 VAR_31;

 int VAR_32 = 0;
 int VAR_33 = 0;
 int VAR_34, VAR_35;



 VAR_21 = VAR_12->private;
 VAR_22 = VAR_13->private;
 VAR_23 = &VAR_20.define_extent;
 VAR_24 = &VAR_20.locate_record;

 FUNC_5(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.format = 1;
 VAR_20.base_address = VAR_21->ned->unit_addr;
 VAR_20.base_lss = VAR_21->ned->ID;
 VAR_20.validity.define_extent = 1;


 if (VAR_22->uid.type == VAR_6)
  VAR_20.validity.verify_base = 1;

 if (VAR_22->uid.type == VAR_7) {
  VAR_20.validity.verify_base = 1;
  VAR_20.validity.hyper_pav = 1;
 }

 switch (VAR_11) {
 case 129:
  VAR_23->mask.perm = 0x1;
  VAR_23->attributes.operation = VAR_21->attrib.operation;
  VAR_23->blk_size = VAR_16;
  VAR_23->ga_extended |= 0x42;
  VAR_24->operation.orientation = 0x0;
  VAR_24->operation.operation = 0x0C;
  VAR_24->auxiliary.check_bytes = 0x01;
  VAR_31 = VAR_2;
  break;
 case 128:
  VAR_23->mask.perm = 0x02;
  VAR_23->attributes.operation = VAR_21->attrib.operation;
  VAR_23->blk_size = VAR_16;
  VAR_32 = FUNC_7(((void*)0), VAR_23, VAR_12);
  VAR_23->ga_extended |= 0x42;
  VAR_24->operation.orientation = 0x0;
  VAR_24->operation.operation = 0x3F;
  VAR_24->extended_operation = 0x23;
  VAR_24->auxiliary.check_bytes = 0x2;





  if (VAR_23->ga_extended & 0x08 && VAR_23->ga_extended & 0x02)
   VAR_20.validity.time_stamp = 1;
  VAR_31 = VAR_1;
  break;
 case 130:
  VAR_23->mask.perm = 0x1;
  VAR_23->attributes.operation = VAR_0;
  VAR_23->ga_extended |= 0x42;
  VAR_23->blk_size = VAR_16;
  VAR_24->operation.orientation = 0x2;
  VAR_24->operation.operation = 0x16;
  VAR_24->auxiliary.check_bytes = 0x01;
  VAR_31 = VAR_2;
  break;
 default:
  FUNC_1(VAR_5, VAR_12,
         "prepare itcw, unknown opcode 0x%x", VAR_11);
  FUNC_0();
  break;
 }
 if (VAR_32)
  return VAR_32;

 VAR_23->attributes.mode = 0x3;

 VAR_28 = VAR_21->rdc_data.trk_per_cyl;
 VAR_26 = VAR_9 / VAR_28;
 VAR_29 = VAR_9 % VAR_28;
 VAR_27 = VAR_10 / VAR_28;
 VAR_30 = VAR_10 % VAR_28;


 if (VAR_23->attributes.operation == VAR_4 ||
     VAR_23->attributes.operation == VAR_3) {

  if (VAR_27 + VAR_21->attrib.nr_cyl < VAR_21->real_cyl)
   VAR_27 += VAR_21->attrib.nr_cyl;
  else
   VAR_27 = (VAR_21->real_cyl - 1);
 }

 FUNC_6(&VAR_23->beg_ext, VAR_26, VAR_29);
 FUNC_6(&VAR_23->end_ext, VAR_27, VAR_30);

 VAR_23->ep_format = 0x20;
 VAR_23->ep_rec_per_track = VAR_19;

 if (VAR_14) {
  switch (VAR_21->rdc_data.dev_type) {
  case 0x3390:
   VAR_34 = FUNC_3(VAR_16 + 6, 232);
   VAR_35 = 9 + FUNC_3(VAR_16 + 6 * (VAR_34 + 1), 34);
   VAR_33 = (49 + (VAR_14 - 1) * (10 + VAR_35)) / 8;
   break;
  case 0x3380:
   VAR_35 = 7 + FUNC_3(VAR_16 + 12, 32);
   VAR_33 = (39 + (VAR_14 - 1) * (8 + VAR_35)) / 7;
   break;
  }
 }

 if (VAR_11 == 130) {
  VAR_24->auxiliary.length_valid = 0;
  VAR_24->auxiliary.length_scope = 0;
  VAR_24->sector = 0xff;
 } else {
  VAR_24->auxiliary.length_valid = 1;
  VAR_24->auxiliary.length_scope = 1;
  VAR_24->sector = VAR_33;
 }
 VAR_24->auxiliary.imbedded_ccw_valid = 1;
 VAR_24->length = VAR_18;
 VAR_24->imbedded_ccw = VAR_11;
 VAR_24->count = VAR_15;
 FUNC_6(&VAR_24->seek_addr, VAR_26, VAR_29);
 VAR_24->search_arg.cyl = VAR_24->seek_addr.cyl;
 VAR_24->search_arg.head = VAR_24->seek_addr.head;
 VAR_24->search_arg.record = VAR_14;

 VAR_25 = FUNC_4(VAR_8, VAR_31, 0,
       &VAR_20, sizeof(VAR_20), VAR_17);
 return FUNC_2(VAR_25);
}

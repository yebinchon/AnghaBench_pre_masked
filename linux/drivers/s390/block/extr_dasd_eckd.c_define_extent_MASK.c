
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_10__ {scalar_t__ operation; int nr_cyl; } ;
struct TYPE_8__ {int cu_type; unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {int real_cyl; TYPE_5__ attrib; TYPE_3__ rdc_data; scalar_t__ uses_cdl; } ;
struct dasd_device {TYPE_2__* cdev; struct dasd_eckd_private* private; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_9__ {scalar_t__ operation; int mode; } ;
struct TYPE_6__ {int perm; int auth; } ;
struct DE_eckd_data {int blk_size; int ga_extended; int end_ext; int beg_ext; TYPE_4__ attributes; TYPE_1__ mask; } ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct DE_eckd_data*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct DE_eckd_data*,int ,int) ;
 int FUNC_3 (int *,int,unsigned int) ;
 int FUNC_4 (struct ccw1*,struct DE_eckd_data*,struct dasd_device*) ;

__attribute__((used)) static int
FUNC_5(struct ccw1 *VAR_4, struct DE_eckd_data *VAR_5, unsigned int VAR_6,
       unsigned int VAR_7, int VAR_8, struct dasd_device *VAR_9,
       int VAR_10)
{
 struct dasd_eckd_private *VAR_11 = VAR_9->private;
 u16 VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17 = 0;

 if (VAR_4) {
  VAR_4->cmd_code = VAR_1;
  VAR_4->flags = 0;
  VAR_4->count = 16;
  VAR_4->cda = (__u32)FUNC_0(VAR_5);
 }

 FUNC_2(VAR_5, 0, sizeof(struct DE_eckd_data));
 switch (VAR_8) {
 case 144:
 case 140:
 case 148:
 case 141:
 case 147:
 case 146:
 case 143:
 case 142:
  VAR_5->mask.perm = 0x1;
  VAR_5->attributes.operation = VAR_11->attrib.operation;
  break;
 case 145:
  VAR_5->mask.perm = 0x1;
  VAR_5->attributes.operation = VAR_0;
  break;
 case 139:
 case 138:
  VAR_5->mask.perm = 0x1;
  VAR_5->attributes.operation = VAR_11->attrib.operation;
  VAR_5->blk_size = 0;
  break;
 case 137:
 case 130:
 case 132:
 case 131:
  VAR_5->mask.perm = 0x02;
  VAR_5->attributes.operation = VAR_11->attrib.operation;
  VAR_17 = FUNC_4(VAR_4, VAR_5, VAR_9);
  break;
 case 136:
 case 135:
  VAR_5->attributes.operation = VAR_0;
  VAR_17 = FUNC_4(VAR_4, VAR_5, VAR_9);
  break;
 case 149:
 case 133:
 case 129:
  VAR_5->mask.perm = 0x3;
  VAR_5->mask.auth = 0x1;
  VAR_5->attributes.operation = VAR_0;
  VAR_17 = FUNC_4(VAR_4, VAR_5, VAR_9);
  break;
 case 134:
  VAR_5->mask.perm = 0x03;
  VAR_5->attributes.operation = VAR_11->attrib.operation;
  VAR_5->blk_size = 0;
  break;
 case 128:
  VAR_5->mask.perm = 0x02;
  VAR_5->attributes.operation = VAR_11->attrib.operation;
  VAR_5->blk_size = VAR_10;
  VAR_17 = FUNC_4(VAR_4, VAR_5, VAR_9);
  break;
 default:
  FUNC_1(&VAR_9->cdev->dev,
   "0x%x is not a known command\n", VAR_8);
  break;
 }

 VAR_5->attributes.mode = 0x3;

 if ((VAR_11->rdc_data.cu_type == 0x2105 ||
      VAR_11->rdc_data.cu_type == 0x2107 ||
      VAR_11->rdc_data.cu_type == 0x1750)
     && !(VAR_11->uses_cdl && VAR_6 < 2))
  VAR_5->ga_extended |= 0x40;

 VAR_12 = VAR_11->rdc_data.trk_per_cyl;
 VAR_15 = VAR_6 / VAR_12;
 VAR_13 = VAR_6 % VAR_12;
 VAR_16 = VAR_7 / VAR_12;
 VAR_14 = VAR_7 % VAR_12;


 if (VAR_5->attributes.operation == VAR_3 ||
     VAR_5->attributes.operation == VAR_2) {

  if (VAR_16 + VAR_11->attrib.nr_cyl < VAR_11->real_cyl)
   VAR_16 += VAR_11->attrib.nr_cyl;
  else
   VAR_16 = (VAR_11->real_cyl - 1);
 }

 FUNC_3(&VAR_5->beg_ext, VAR_15, VAR_13);
 FUNC_3(&VAR_5->end_ext, VAR_16, VAR_14);
 return VAR_17;
}

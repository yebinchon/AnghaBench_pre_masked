
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct dasd_device {int default_expires; int default_retries; } ;
struct dasd_ccw_req {int expires; int status; int buildclk; int retries; struct dasd_block* block; struct dasd_device* memdev; struct dasd_device* startdev; int flags; struct LO_fba_data* data; struct ccw1* cpaddr; } ;
struct dasd_block {unsigned int bp_block; int s2b_shift; TYPE_1__* base; } ;
struct ccw1 {int flags; } ;
struct LO_fba_data {int dummy; } ;
struct DE_fba_data {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int features; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int VAR_6 ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int,unsigned int) ;
 struct dasd_ccw_req* FUNC_9 (int ,int,int,struct dasd_device*,int ) ;
 int FUNC_10 (int ,struct LO_fba_data*,int ,unsigned int,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int ,int,int) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_14(
      struct dasd_device *VAR_7,
      struct dasd_block *VAR_8,
      struct request *VAR_9)
{
 struct LO_fba_data *VAR_10;
 struct dasd_ccw_req *VAR_11;
 struct ccw1 *VAR_12;

 sector_t VAR_13 = 0, VAR_14 = 0;
 sector_t VAR_15, VAR_16;

 unsigned int VAR_17 = VAR_8->bp_block;
 unsigned int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_15 = FUNC_4(VAR_9) >> VAR_8->s2b_shift;
 VAR_16 =
  (FUNC_4(VAR_9) + FUNC_5(VAR_9) - 1) >> VAR_8->s2b_shift;
 VAR_22 = VAR_16 - VAR_15 + 1;

 VAR_18 = FUNC_0(VAR_17);
 VAR_25 = FUNC_8(VAR_15, VAR_16, VAR_18);


 VAR_23 = 1 + 2 * VAR_25;
 VAR_24 = sizeof(struct DE_fba_data) +
  VAR_25 * (sizeof(struct LO_fba_data) + sizeof(struct ccw1));

 VAR_11 = FUNC_9(VAR_3, VAR_23, VAR_24, VAR_7,
       FUNC_2(VAR_9));
 if (FUNC_1(VAR_11))
  return VAR_11;

 VAR_12 = VAR_11->cpaddr;

 FUNC_10(VAR_12++, VAR_11->data, VAR_6, VAR_17, VAR_15, VAR_22);
 VAR_10 = VAR_11->data + sizeof(struct DE_fba_data);


 if (VAR_15 % VAR_18 != 0) {
  VAR_13 = VAR_15 + VAR_18 -
   (VAR_15 % VAR_18) - 1;
  if (VAR_13 > VAR_16)
   VAR_13 = VAR_16;
  VAR_19 = VAR_13 - VAR_15 + 1;

  VAR_12[-1].flags |= VAR_0;
  FUNC_12(VAR_12++, VAR_10++, VAR_6, VAR_21, VAR_19);

  VAR_12[-1].flags |= VAR_0;
  FUNC_7(VAR_12++, VAR_19 * VAR_17);

  VAR_21 = VAR_19;
 }


 if (VAR_16 - (VAR_15 + VAR_21) + 1 >= VAR_18) {

  if ((VAR_16 - VAR_18 + 1) % VAR_18 != 0)
   VAR_14 = VAR_16 - ((VAR_16 - VAR_18 + 1) %
          VAR_18);
  else
   VAR_14 = VAR_16;

  VAR_20 = VAR_14 - (VAR_15 + VAR_21) + 1;

  VAR_12[-1].flags |= VAR_0;
  FUNC_12(VAR_12++, VAR_10++, VAR_6, VAR_21, VAR_20);

  VAR_12[-1].flags |= VAR_0;
  FUNC_6(VAR_12++);

  VAR_21 += VAR_20;
 }


 if (VAR_21 == 0 || VAR_15 + VAR_21 - 1 < VAR_16) {
  if (VAR_14 != 0)
   VAR_19 = VAR_16 - VAR_14;
  else if (VAR_13 != 0)
   VAR_19 = VAR_16 - VAR_13;
  else
   VAR_19 = VAR_22;

  VAR_12[-1].flags |= VAR_0;
  FUNC_12(VAR_12++, VAR_10++, VAR_6, VAR_21, VAR_19);

  VAR_12[-1].flags |= VAR_0;
  FUNC_7(VAR_12++, VAR_19 * VAR_17);
 }

 if (FUNC_3(VAR_9) ||
     VAR_8->base->features & VAR_4)
  FUNC_13(VAR_2, &VAR_11->flags);

 VAR_11->startdev = VAR_7;
 VAR_11->memdev = VAR_7;
 VAR_11->block = VAR_8;
 VAR_11->expires = VAR_7->default_expires * VAR_5;
 VAR_11->retries = VAR_7->default_retries;
 VAR_11->buildclk = FUNC_11();
 VAR_11->status = VAR_1;

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct dasd_eckd_private {TYPE_2__ uid; TYPE_1__* ned; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;
struct ccw1 {int count; void* cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_6__ {int define_extent; int verify_base; int hyper_pav; int time_stamp; } ;
struct LRE_eckd_data {int dummy; } ;
struct DE_eckd_data {int ga_extended; } ;
struct PFX_eckd_data {unsigned int format; TYPE_3__ validity; int base_lss; int base_address; struct LRE_eckd_data locate_record; struct DE_eckd_data define_extent; } ;
typedef void* __u32 ;
struct TYPE_4__ {int ID; int unit_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct dasd_device*,char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct PFX_eckd_data*) ;
 int FUNC_3 (int *,struct DE_eckd_data*,unsigned int,unsigned int,int,struct dasd_device*,unsigned int) ;
 int FUNC_4 (int *,struct LRE_eckd_data*,unsigned int,unsigned int,int,int,struct dasd_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct PFX_eckd_data*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ccw1 *VAR_6, struct PFX_eckd_data *VAR_7,
        unsigned int VAR_8, unsigned int VAR_9, int VAR_10,
        struct dasd_device *VAR_11, struct dasd_device *VAR_12,
        unsigned int VAR_13, unsigned int VAR_14, int VAR_15,
        unsigned int VAR_16, unsigned int VAR_17)
{
 struct dasd_eckd_private *VAR_18, *VAR_19;
 struct LRE_eckd_data *VAR_20;
 struct DE_eckd_data *VAR_21;
 int VAR_22 = 0;

 VAR_18 = VAR_11->private;
 VAR_19 = VAR_12->private;
 VAR_21 = &VAR_7->define_extent;
 VAR_20 = &VAR_7->locate_record;

 VAR_6->cmd_code = VAR_0;
 VAR_6->flags = 0;
 if (VAR_10 == VAR_1) {
  VAR_6->count = sizeof(*VAR_7) + 2;
  VAR_6->cda = (__u32) FUNC_2(VAR_7);
  FUNC_5(VAR_7, 0, sizeof(*VAR_7) + 2);
 } else {
  VAR_6->count = sizeof(*VAR_7);
  VAR_6->cda = (__u32) FUNC_2(VAR_7);
  FUNC_5(VAR_7, 0, sizeof(*VAR_7));
 }


 if (VAR_13 > 1) {
  FUNC_1(VAR_2, VAR_11,
         "PFX LRE unknown format 0x%x", VAR_13);
  FUNC_0();
  return -VAR_3;
 }
 VAR_7->format = VAR_13;
 VAR_7->base_address = VAR_18->ned->unit_addr;
 VAR_7->base_lss = VAR_18->ned->ID;
 VAR_7->validity.define_extent = 1;


 if (VAR_19->uid.type == VAR_4)
  VAR_7->validity.verify_base = 1;

 if (VAR_19->uid.type == VAR_5) {
  VAR_7->validity.verify_base = 1;
  VAR_7->validity.hyper_pav = 1;
 }

 VAR_22 = FUNC_3(((void*)0), VAR_21, VAR_8, VAR_9, VAR_10, VAR_11, VAR_16);






 if (VAR_21->ga_extended & 0x08 && VAR_21->ga_extended & 0x02)
  VAR_7->validity.time_stamp = 1;

 if (VAR_13 == 1) {
  FUNC_4(((void*)0), VAR_20, VAR_8, VAR_14, VAR_15, VAR_10,
      VAR_11, VAR_16, VAR_17);
 }

 return VAR_22;
}

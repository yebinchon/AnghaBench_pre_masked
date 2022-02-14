
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irb {int scsw; } ;
struct TYPE_6__ {int blksize; int stop_unit; int start_unit; } ;
struct format_check_t {TYPE_3__ expect; } ;
struct eckd_count {int dummy; } ;
struct TYPE_4__ {int* feature; } ;
struct TYPE_5__ {int trk_per_cyl; } ;
struct dasd_eckd_private {int fcx_max_data; TYPE_1__ features; TYPE_2__ rdc_data; } ;
struct dasd_device {struct dasd_eckd_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eckd_count*,struct format_check_t*,int,int,int,int) ;
 int FUNC_1 (struct dasd_device*,TYPE_3__*,int,int,struct eckd_count*,int,struct irb*) ;
 int FUNC_2 (struct eckd_count*) ;
 struct eckd_count* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dasd_device *VAR_4,
      struct format_check_t *VAR_5,
      int VAR_6)
{
 struct dasd_eckd_private *VAR_7 = VAR_4->private;
 struct eckd_count *VAR_8;
 struct irb VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 VAR_13 = VAR_7->rdc_data.trk_per_cyl;


 VAR_10 = FUNC_4(&VAR_7->rdc_data, 0, 512) + 1;
 VAR_11 = FUNC_4(&VAR_7->rdc_data, 0, VAR_5->expect.blksize);

 VAR_14 = VAR_5->expect.stop_unit - VAR_5->expect.start_unit + 1;
 VAR_12 = VAR_14 * VAR_10 * sizeof(struct eckd_count);

 VAR_8 = FUNC_3(VAR_12, VAR_3 | VAR_2);
 if (!VAR_8)
  return -VAR_1;
 if ((VAR_7->features.feature[40] & 0x04) &&
     VAR_12 <= VAR_7->fcx_max_data)
  VAR_15 = 1;

 VAR_16 = FUNC_1(VAR_4, &VAR_5->expect, VAR_6,
        VAR_15, VAR_8, VAR_10, &VAR_9);
 if (VAR_16 && VAR_16 != -VAR_0)
  goto out;
 if (VAR_16 == -VAR_0) {





  if (VAR_15 && FUNC_5(&VAR_9.scsw) == 0x40) {
   VAR_15 = 0;
   VAR_16 = FUNC_1(VAR_4, &VAR_5->expect,
          VAR_6, VAR_15,
          VAR_8, VAR_10,
          &VAR_9);
   if (VAR_16)
    goto out;
  } else {
   goto out;
  }
 }

 FUNC_0(VAR_8, VAR_5, VAR_10, VAR_11,
      VAR_13, VAR_15);

out:
 FUNC_2(VAR_8);

 return VAR_16;
}

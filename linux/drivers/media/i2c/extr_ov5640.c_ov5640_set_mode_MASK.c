
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef struct ov5640_mode_info {int dn_mode; int vtot; int htot; } const ov5640_mode_info ;
struct TYPE_12__ {unsigned long bus_width; } ;
struct TYPE_11__ {unsigned long num_data_lanes; } ;
struct TYPE_13__ {TYPE_5__ parallel; TYPE_4__ mipi_csi2; } ;
struct TYPE_14__ {scalar_t__ bus_type; TYPE_6__ bus; } ;
struct TYPE_10__ {TYPE_2__* auto_exp; TYPE_1__* auto_gain; } ;
struct ov5640_dev {size_t current_fr; int pending_mode_change; struct ov5640_mode_info const* last_mode; int ae_target; TYPE_7__ ep; TYPE_3__ ctrls; struct ov5640_mode_info const* current_mode; } ;
typedef enum ov5640_downsize_mode { ____Placeholder_ov5640_downsize_mode } ov5640_downsize_mode ;
struct TYPE_9__ {scalar_t__ val; } ;
struct TYPE_8__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long* VAR_4 ;
 int FUNC_0 (struct ov5640_dev*) ;
 int FUNC_1 (struct ov5640_dev*,int ) ;
 int FUNC_2 (struct ov5640_dev*,int) ;
 int FUNC_3 (struct ov5640_dev*,int) ;
 int FUNC_4 (struct ov5640_dev*) ;
 int FUNC_5 (struct ov5640_dev*,int) ;
 int FUNC_6 (struct ov5640_dev*,unsigned long) ;
 int FUNC_7 (struct ov5640_dev*,unsigned long) ;
 int FUNC_8 (struct ov5640_dev*,struct ov5640_mode_info const*) ;
 int FUNC_9 (struct ov5640_dev*,struct ov5640_mode_info const*) ;
 int FUNC_10 (struct ov5640_dev*) ;

__attribute__((used)) static int FUNC_11(struct ov5640_dev *VAR_5)
{
 const struct ov5640_mode_info *VAR_6 = VAR_5->current_mode;
 const struct ov5640_mode_info *VAR_7 = VAR_5->last_mode;
 enum ov5640_downsize_mode VAR_8, VAR_9;
 bool VAR_10 = VAR_5->ctrls.auto_gain->val == 1;
 bool VAR_11 = VAR_5->ctrls.auto_exp->val == VAR_2;
 unsigned long VAR_12;
 int VAR_13;

 VAR_8 = VAR_6->dn_mode;
 VAR_9 = VAR_7->dn_mode;


 if (VAR_10) {
  VAR_13 = FUNC_3(VAR_5, 0);
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_11) {
  VAR_13 = FUNC_2(VAR_5, 0);
  if (VAR_13)
   goto restore_auto_gain;
 }





 VAR_12 = VAR_6->vtot * VAR_6->htot * 16;
 VAR_12 *= VAR_4[VAR_5->current_fr];
 if (VAR_5->ep.bus_type == VAR_3) {
  VAR_12 = VAR_12 / VAR_5->ep.bus.mipi_csi2.num_data_lanes;
  VAR_13 = FUNC_7(VAR_5, VAR_12);
 } else {
  VAR_12 = VAR_12 / VAR_5->ep.bus.parallel.bus_width;
  VAR_13 = FUNC_6(VAR_5, VAR_12);
 }

 if (VAR_13 < 0)
  return 0;

 if ((VAR_8 == VAR_1 && VAR_9 == VAR_0) ||
     (VAR_8 == VAR_0 && VAR_9 == VAR_1)) {




  VAR_13 = FUNC_9(VAR_5, VAR_6);
 } else {




  VAR_13 = FUNC_8(VAR_5, VAR_6);
 }
 if (VAR_13 < 0)
  goto restore_auto_exp_gain;


 if (VAR_10)
  FUNC_3(VAR_5, 1);
 if (VAR_11)
  FUNC_2(VAR_5, 1);

 VAR_13 = FUNC_5(VAR_5, VAR_8 != VAR_0);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_1(VAR_5, VAR_5->ae_target);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_0(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_4(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_13 = FUNC_10(VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_5->pending_mode_change = 0;
 VAR_5->last_mode = VAR_6;

 return 0;

restore_auto_exp_gain:
 if (VAR_11)
  FUNC_2(VAR_5, 1);
restore_auto_gain:
 if (VAR_10)
  FUNC_3(VAR_5, 1);

 return VAR_13;
}

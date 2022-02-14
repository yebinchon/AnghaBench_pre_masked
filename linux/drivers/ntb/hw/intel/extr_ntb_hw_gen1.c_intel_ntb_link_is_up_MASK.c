
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {int lnk_sta; TYPE_1__* reg; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
struct TYPE_2__ {scalar_t__ (* link_is_up ) (struct intel_ntb_dev*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct intel_ntb_dev* FUNC_2 (struct ntb_dev*) ;
 scalar_t__ FUNC_3 (struct intel_ntb_dev*) ;

u64 FUNC_4(struct ntb_dev *VAR_2, enum ntb_speed *VAR_3,
    enum ntb_width *VAR_4)
{
 struct intel_ntb_dev *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->reg->link_is_up(VAR_5)) {
  if (VAR_3)
   *VAR_3 = FUNC_0(VAR_5->lnk_sta);
  if (VAR_4)
   *VAR_4 = FUNC_1(VAR_5->lnk_sta);
  return 1;
 } else {


  if (VAR_3)
   *VAR_3 = VAR_0;
  if (VAR_4)
   *VAR_4 = VAR_1;
  return 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {scalar_t__ pathway_state; TYPE_1__* hdw_desc; } ;
struct TYPE_2__ {int digital_control_scheme; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct pvr2_hdw*,int) ;
 int FUNC_1 (struct pvr2_hdw*,int ) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_7,int VAR_8)
{
 int VAR_9;



 if (VAR_7->pathway_state == VAR_5) {
  return FUNC_1(VAR_7,
          (VAR_8 ?
           VAR_4 :
           VAR_3));

 }

 if (VAR_7->pathway_state != VAR_6) {

  return -VAR_0;
 }





 switch (VAR_7->hdw_desc->digital_control_scheme) {
 case 129:
  return FUNC_1(VAR_7,
          (VAR_8 ?
           VAR_2 :
           VAR_1));
 case 128:
  VAR_9 = FUNC_1(VAR_7,
         (VAR_8 ?
          VAR_4 :
          VAR_3));
  if (VAR_9) return VAR_9;
  return FUNC_0(VAR_7,VAR_8);
 default:
  return -VAR_0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_ep {int frame_number; scalar_t__ direction; int flags; int pending_list; struct dwc3* dwc; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct dwc3 {scalar_t__ revision; scalar_t__ version_type; TYPE_1__ gadget; int dis_start_transfer_quirk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dwc3_ep*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct dwc3_ep*) ;
 int FUNC_2 (struct dwc3_ep*) ;
 scalar_t__ FUNC_3 (struct dwc3*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dwc3_ep *VAR_8)
{
 struct dwc3 *VAR_9 = VAR_8->dwc;
 int VAR_10;
 int VAR_11;

 if (FUNC_4(&VAR_8->pending_list)) {
  VAR_8->flags |= VAR_2;
  return -VAR_6;
 }

 if (!VAR_9->dis_start_transfer_quirk && FUNC_3(VAR_9) &&
     (VAR_9->revision <= VAR_4 ||
      (VAR_9->revision == VAR_5 &&
       VAR_9->version_type >= VAR_0 &&
       VAR_9->version_type <= VAR_1))) {

  if (VAR_9->gadget.speed <= VAR_7 && VAR_8->direction)
   return FUNC_2(VAR_8);
 }

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_8->frame_number = FUNC_0(VAR_8, VAR_11 + 1);

  VAR_10 = FUNC_1(VAR_8);
  if (VAR_10 != -VAR_6)
   break;
 }

 return VAR_10;
}

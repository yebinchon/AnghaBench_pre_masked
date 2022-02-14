
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int interval; struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {TYPE_1__* ep_data; } ;
struct c67x00_hcd {int current_frame; } ;
struct TYPE_2__ {int next_frame; } ;


 int FUNC_0 (struct c67x00_hcd*,struct urb*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct c67x00_hcd *VAR_0, struct urb *VAR_1)
{
 struct c67x00_urb_priv *VAR_2 = VAR_1->hcpriv;

 if (FUNC_2(VAR_0->current_frame, VAR_2->ep_data->next_frame)) {
  VAR_2->ep_data->next_frame =
      FUNC_1(VAR_2->ep_data->next_frame, VAR_1->interval);
  return FUNC_0(VAR_0, VAR_1);
 }
 return 0;
}

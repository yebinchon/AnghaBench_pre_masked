
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int pipe; struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {TYPE_2__* ep_data; } ;
struct c67x00_hcd {scalar_t__ bandwidth_allocated; scalar_t__ max_frame_bw; scalar_t__ next_td_addr; scalar_t__ td_base_addr; scalar_t__ next_buf_addr; scalar_t__ buf_base_addr; scalar_t__ periodic_bw_allocated; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct c67x00_hcd *VAR_5, struct urb *VAR_6,
     int VAR_7, int VAR_8)
{
 struct c67x00_urb_priv *VAR_9 = VAR_6->hcpriv;
 int VAR_10;
 if (VAR_9->ep_data->dev->speed == VAR_4) {

  if (FUNC_2(VAR_6->pipe))
   VAR_10 = 80240 + 7578*VAR_7;
  else
   VAR_10 = 80260 + 7467*VAR_7;
 } else {

  if (FUNC_3(VAR_6->pipe))
   VAR_10 = FUNC_2(VAR_6->pipe) ? 9050 : 7840;
  else
   VAR_10 = 11250;
  VAR_10 += 936*VAR_7;
 }



 VAR_10 = ((VAR_10+50) / 100) + 106;

 if (FUNC_1(VAR_10 + VAR_5->bandwidth_allocated >=
       VAR_5->max_frame_bw))
  return -VAR_1;

 if (FUNC_1(VAR_5->next_td_addr + VAR_0 >=
       VAR_5->td_base_addr + VAR_3))
  return -VAR_1;

 if (FUNC_1(VAR_5->next_buf_addr + VAR_7 >=
       VAR_5->buf_base_addr + VAR_2))
  return -VAR_1;

 if (VAR_8) {
  if (FUNC_1(VAR_10 + VAR_5->periodic_bw_allocated >=
        FUNC_0(VAR_5->max_frame_bw)))
   return -VAR_1;
  VAR_5->periodic_bw_allocated += VAR_10;
 }

 VAR_5->bandwidth_allocated += VAR_10;
 return 0;
}

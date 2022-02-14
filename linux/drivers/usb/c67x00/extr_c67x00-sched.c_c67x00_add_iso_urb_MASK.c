
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; char* transfer_buffer; int interval; TYPE_1__* iso_frame_desc; int pipe; struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {int cnt; TYPE_2__* ep_data; } ;
struct c67x00_hcd {int current_frame; } ;
struct TYPE_4__ {int next_frame; } ;
struct TYPE_3__ {int offset; int length; int status; scalar_t__ actual_length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct c67x00_hcd*,struct urb*,char*,int,int,int ,size_t) ;
 int FUNC_2 (struct c67x00_hcd*,struct urb*,int ) ;
 int FUNC_3 (struct c67x00_hcd*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct c67x00_hcd *VAR_2, struct urb *VAR_3)
{
 struct c67x00_urb_priv *VAR_4 = VAR_3->hcpriv;

 if (FUNC_6(VAR_2->current_frame, VAR_4->ep_data->next_frame)) {
  char *VAR_5;
  int VAR_6, VAR_7, VAR_8;

  FUNC_0(VAR_4->cnt >= VAR_3->number_of_packets);

  VAR_5 = VAR_3->transfer_buffer +
      VAR_3->iso_frame_desc[VAR_4->cnt].offset;
  VAR_6 = VAR_3->iso_frame_desc[VAR_4->cnt].length;
  VAR_7 = FUNC_7(VAR_3->pipe) ? VAR_1 : VAR_0;

  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, 0,
           VAR_4->cnt);
  if (VAR_8) {
   FUNC_4(FUNC_3(VAR_2), "create failed: %d\n",
    VAR_8);
   VAR_3->iso_frame_desc[VAR_4->cnt].actual_length = 0;
   VAR_3->iso_frame_desc[VAR_4->cnt].status = VAR_8;
   if (VAR_4->cnt + 1 == VAR_3->number_of_packets)
    FUNC_2(VAR_2, VAR_3, 0);
  }

  VAR_4->ep_data->next_frame =
      FUNC_5(VAR_4->ep_data->next_frame, VAR_3->interval);
  VAR_4->cnt++;
 }
 return 0;
}

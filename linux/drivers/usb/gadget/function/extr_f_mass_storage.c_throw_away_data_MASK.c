
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct fsg_common {scalar_t__ usb_amount_left; struct fsg_buffhd* next_buffhd_to_drain; struct fsg_buffhd* next_buffhd_to_fill; } ;
struct fsg_buffhd {scalar_t__ state; scalar_t__ bulk_out_intended_length; TYPE_1__* outreq; struct fsg_buffhd* next; } ;
struct TYPE_2__ {scalar_t__ actual; scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct fsg_common*,int ) ;
 int FUNC_2 (struct fsg_common*,struct fsg_buffhd*,scalar_t__) ;
 int FUNC_3 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_4 (struct fsg_common*,struct fsg_buffhd*) ;

__attribute__((used)) static int FUNC_5(struct fsg_common *VAR_5)
{
 struct fsg_buffhd *VAR_6, *VAR_7;
 u32 VAR_8;
 int VAR_9;

 for (VAR_6 = VAR_5->next_buffhd_to_drain;
      VAR_6->state != VAR_0 || VAR_5->usb_amount_left > 0;
      VAR_6 = VAR_5->next_buffhd_to_drain) {


  VAR_7 = VAR_5->next_buffhd_to_fill;
  if (VAR_7->state == VAR_0 &&
    VAR_5->usb_amount_left > 0) {
   VAR_8 = FUNC_0(VAR_5->usb_amount_left, VAR_3);






   FUNC_2(VAR_5, VAR_7, VAR_8);
   if (!FUNC_4(VAR_5, VAR_7))

    return -VAR_2;
   VAR_5->next_buffhd_to_fill = VAR_7->next;
   VAR_5->usb_amount_left -= VAR_8;
   continue;
  }


  VAR_9 = FUNC_3(VAR_5, 0, VAR_6);
  if (VAR_9)
   return VAR_9;


  VAR_6->state = VAR_0;
  VAR_5->next_buffhd_to_drain = VAR_6->next;


  if (VAR_6->outreq->actual < VAR_6->bulk_out_intended_length ||
    VAR_6->outreq->status != 0) {
   FUNC_1(VAR_5, VAR_4);
   return -VAR_1;
  }
 }
 return 0;
}

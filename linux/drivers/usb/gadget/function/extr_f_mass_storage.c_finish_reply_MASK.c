
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsg_common {int data_dir; TYPE_2__* fsg; int can_stall; int short_packet_received; int residue; struct fsg_buffhd* next_buffhd_to_fill; int data_size; } ;
struct fsg_buffhd {struct fsg_buffhd* next; TYPE_1__* inreq; } ;
struct TYPE_5__ {int bulk_out; } ;
struct TYPE_4__ {int zero; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsg_common*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct fsg_common*,int ) ;
 int FUNC_4 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_5 (struct fsg_common*) ;

__attribute__((used)) static int FUNC_6(struct fsg_common *VAR_3)
{
 struct fsg_buffhd *VAR_4 = VAR_3->next_buffhd_to_fill;
 int VAR_5 = 0;

 switch (VAR_3->data_dir) {
 case 130:
  break;







 case 128:
  if (!VAR_3->can_stall) {

  } else if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_3->fsg, VAR_3->fsg->bulk_out);
   VAR_5 = FUNC_2(VAR_3->fsg);
  } else {

   VAR_5 = -VAR_1;
  }
  break;


 case 129:
  if (VAR_3->data_size == 0) {



  } else if (!FUNC_0(VAR_3)) {
   VAR_5 = -VAR_1;


  } else if (VAR_3->residue == 0) {
   VAR_4->inreq->zero = 0;
   if (!FUNC_4(VAR_3, VAR_4))
    return -VAR_1;
   VAR_3->next_buffhd_to_fill = VAR_4->next;
  } else {
   VAR_4->inreq->zero = 1;
   if (!FUNC_4(VAR_3, VAR_4))
    VAR_5 = -VAR_1;
   VAR_3->next_buffhd_to_fill = VAR_4->next;
   if (VAR_3->can_stall)
    VAR_5 = FUNC_2(VAR_3->fsg);
  }
  break;





 case 131:
  if (VAR_3->residue == 0) {



  } else if (VAR_3->short_packet_received) {
   FUNC_3(VAR_3, VAR_2);
   VAR_5 = -VAR_0;
  } else {
   VAR_5 = FUNC_5(VAR_3);
  }
  break;
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_lun {scalar_t__ info_valid; scalar_t__ sense_data_info; void* unit_attention_data; void* sense_data; scalar_t__ prevent_medium_removal; } ;
struct fsg_dev {int dummy; } ;
struct fsg_common {scalar_t__ state; int fsg_num_buffers; unsigned int exception_req_tag; unsigned int ep0_req_tag; int lock; int cdev; TYPE_1__* fsg; struct fsg_lun** luns; struct fsg_dev* exception_arg; struct fsg_buffhd* buffhds; struct fsg_buffhd* next_buffhd_to_drain; struct fsg_buffhd* next_buffhd_to_fill; } ;
struct fsg_buffhd {scalar_t__ state; int outreq; int inreq; } ;
typedef enum fsg_state { ____Placeholder_fsg_state } fsg_state ;
struct TYPE_2__ {int bulk_in; int atomic_bitflags; int bulk_out; scalar_t__ bulk_out_enabled; scalar_t__ bulk_in_enabled; } ;


 int FUNC_0 (struct fsg_lun**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fsg_common*,char*) ;






 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (struct fsg_common*,struct fsg_dev*) ;
 int FUNC_3 (struct fsg_common*) ;
 int FUNC_4 (struct fsg_common*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct fsg_common*) ;
 scalar_t__ FUNC_8 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct fsg_common *VAR_6)
{
 int VAR_7;
 struct fsg_buffhd *VAR_8;
 enum fsg_state VAR_9;
 struct fsg_lun *VAR_10;
 unsigned int VAR_11;
 struct fsg_dev *VAR_12;





 for (;;) {
  int VAR_13 = FUNC_5();
  if (!VAR_13)
   break;
  if (VAR_13 != VAR_4) {
   FUNC_9(&VAR_6->lock);
   if (VAR_6->state < 131)
    FUNC_1(VAR_6, "Main thread exiting on signal\n");
   VAR_6->state = 131;
   FUNC_10(&VAR_6->lock);
  }
 }


 if (FUNC_6(VAR_6->fsg)) {
  for (VAR_7 = 0; VAR_7 < VAR_6->fsg_num_buffers; ++VAR_7) {
   VAR_8 = &VAR_6->buffhds[VAR_7];
   if (VAR_8->state == VAR_2)
    FUNC_14(VAR_6->fsg->bulk_in, VAR_8->inreq);
   if (VAR_8->state == VAR_1)
    FUNC_14(VAR_6->fsg->bulk_out,
            VAR_8->outreq);


   if (FUNC_8(VAR_6, 0, VAR_8))
    return;
  }


  if (VAR_6->fsg->bulk_in_enabled)
   FUNC_15(VAR_6->fsg->bulk_in);
  if (VAR_6->fsg->bulk_out_enabled)
   FUNC_15(VAR_6->fsg->bulk_out);
 }





 FUNC_9(&VAR_6->lock);

 for (VAR_7 = 0; VAR_7 < VAR_6->fsg_num_buffers; ++VAR_7) {
  VAR_8 = &VAR_6->buffhds[VAR_7];
  VAR_8->state = VAR_0;
 }
 VAR_6->next_buffhd_to_fill = &VAR_6->buffhds[0];
 VAR_6->next_buffhd_to_drain = &VAR_6->buffhds[0];
 VAR_11 = VAR_6->exception_req_tag;
 VAR_12 = VAR_6->exception_arg;
 VAR_9 = VAR_6->state;
 VAR_6->state = 130;

 if (VAR_9 != 133) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->luns); ++VAR_7) {
   VAR_10 = VAR_6->luns[VAR_7];
   if (!VAR_10)
    continue;
   VAR_10->prevent_medium_removal = 0;
   VAR_10->sense_data = VAR_5;
   VAR_10->unit_attention_data = VAR_5;
   VAR_10->sense_data_info = 0;
   VAR_10->info_valid = 0;
  }
 }
 FUNC_10(&VAR_6->lock);


 switch (VAR_9) {
 case 130:
  break;

 case 133:
  FUNC_7(VAR_6);
  break;

 case 129:





  if (!FUNC_4(VAR_6))
   break;
  if (FUNC_11(VAR_3,
           &VAR_6->fsg->atomic_bitflags))
   FUNC_13(VAR_6->fsg->bulk_in);

  if (VAR_6->ep0_req_tag == VAR_11)
   FUNC_3(VAR_6);
  break;

 case 132:
  FUNC_2(VAR_6, VAR_12);
  if (VAR_12)
   FUNC_12(VAR_6->cdev);
  break;

 case 131:
  FUNC_2(VAR_6, ((void*)0));
  FUNC_9(&VAR_6->lock);
  VAR_6->state = 128;
  FUNC_10(&VAR_6->lock);
  break;

 case 128:
  break;
 }
}

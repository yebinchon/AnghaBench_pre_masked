
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qtd {scalar_t__ in_process; scalar_t__ isoc_split_offset; int isoc_split_pos; scalar_t__ complete_split; int control_phase; int data_toggle; struct dwc2_hcd_urb* urb; } ;
struct dwc2_hcd_urb {struct dwc2_qtd* qtd; int pipe_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

void FUNC_1(struct dwc2_qtd *VAR_4, struct dwc2_hcd_urb *VAR_5)
{
 VAR_4->urb = VAR_5;
 if (FUNC_0(&VAR_5->pipe_info) ==
   VAR_3) {





  VAR_4->data_toggle = VAR_2;
  VAR_4->control_phase = VAR_0;
 }


 VAR_4->complete_split = 0;
 VAR_4->isoc_split_pos = VAR_1;
 VAR_4->isoc_split_offset = 0;
 VAR_4->in_process = 0;


 VAR_5->qtd = VAR_4;
}

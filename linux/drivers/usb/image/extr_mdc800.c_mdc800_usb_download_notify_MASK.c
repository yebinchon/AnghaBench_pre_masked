
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int transfer_buffer; struct mdc800_data* context; } ;
struct mdc800_data {int out_count; scalar_t__ download_left; int downloaded; int download_wait; TYPE_1__* dev; int state; scalar_t__ out_ptr; int out; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (struct urb *VAR_1)
{
 struct mdc800_data* VAR_2=VAR_1->context;
 int VAR_3 = VAR_1->status;

 if (VAR_3 == 0) {

  FUNC_1 (VAR_2->out, VAR_1->transfer_buffer, 64);
  VAR_2->out_count=64;
  VAR_2->out_ptr=0;
  VAR_2->download_left-=64;
  if (VAR_2->download_left == 0)
  {
   VAR_2->state=VAR_0;
  }
 } else {
  FUNC_0(&VAR_2->dev->dev,
   "request bytes fails (status:%i)\n", VAR_3);
 }
 VAR_2->downloaded = 1;
 FUNC_2 (&VAR_2->download_wait);
}

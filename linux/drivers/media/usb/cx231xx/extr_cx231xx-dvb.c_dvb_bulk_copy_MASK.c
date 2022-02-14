
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer; int status; } ;
struct cx231xx {int state; TYPE_1__* dvb; } ;
struct TYPE_2__ {int demux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cx231xx*,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct cx231xx *VAR_2, struct urb *VAR_3)
{
 if (!VAR_2)
  return 0;

 if (VAR_2->state & VAR_0)
  return 0;

 if (VAR_3->status < 0) {
  FUNC_1(VAR_2, -1, VAR_3->status);
  if (VAR_3->status == -VAR_1)
   return 0;
 }


 FUNC_0(&VAR_2->dvb->demux,
  VAR_3->transfer_buffer, VAR_3->actual_length);

 return 0;
}

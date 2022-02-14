
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int interval; int pipe; int transfer_buffer_length; int dev; int * setup_packet; } ;
struct c67x00_hcd {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c67x00_hcd*,struct urb*) ;
 int FUNC_1 (struct c67x00_hcd*,struct urb*,int *,int,int,int,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct c67x00_hcd *VAR_3, struct urb *VAR_4)
{
 int VAR_5;
 int VAR_6;

 switch (VAR_4->interval) {
 default:
 case 129:
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_4->setup_packet,
           8, VAR_2, 0, 129);
  if (VAR_5)
   return VAR_5;
  VAR_4->interval = 129;
  FUNC_4(VAR_4->dev, FUNC_2(VAR_4->pipe),
         FUNC_3(VAR_4->pipe), 1);
  break;
 case 130:
  if (VAR_4->transfer_buffer_length) {
   VAR_5 = FUNC_0(VAR_3, VAR_4);
   if (VAR_5)
    return VAR_5;
   break;
  }
 case 128:
  VAR_6 = !FUNC_3(VAR_4->pipe) ? VAR_1 : VAR_0;
  VAR_5 = FUNC_1(VAR_3, VAR_4, ((void*)0), 0, VAR_6, 1,
           128);
  if (VAR_5)
   return VAR_5;
  break;
 }

 return 0;
}

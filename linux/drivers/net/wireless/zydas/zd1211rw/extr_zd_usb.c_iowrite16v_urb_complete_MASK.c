
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {scalar_t__ cmd_error; } ;
struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; scalar_t__ status; struct zd_usb* context; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct urb *VAR_1)
{
 struct zd_usb *VAR_2 = VAR_1->context;

 if (VAR_1->status && !VAR_2->cmd_error)
  VAR_2->cmd_error = VAR_1->status;

 if (!VAR_2->cmd_error &&
   VAR_1->actual_length != VAR_1->transfer_buffer_length)
  VAR_2->cmd_error = -VAR_0;
}

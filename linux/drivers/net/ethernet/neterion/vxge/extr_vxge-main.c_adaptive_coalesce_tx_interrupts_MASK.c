
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_fifo {scalar_t__ interrupt_count; scalar_t__ jiffies; struct __vxge_hw_fifo* handle; } ;
struct __vxge_hw_fifo {scalar_t__ rtimer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct __vxge_hw_fifo*) ;

__attribute__((used)) static void FUNC_2(struct vxge_fifo *VAR_4)
{
 VAR_4->interrupt_count++;
 if (FUNC_0(VAR_4->jiffies + VAR_0 / 100, VAR_3)) {
  struct __vxge_hw_fifo *VAR_5 = VAR_4->handle;

  VAR_4->jiffies = VAR_3;
  if (VAR_4->interrupt_count > VAR_1 &&
      VAR_5->rtimer != VAR_2) {
   VAR_5->rtimer = VAR_2;
   FUNC_1(VAR_5);
  } else if (VAR_5->rtimer != 0) {
   VAR_5->rtimer = 0;
   FUNC_1(VAR_5);
  }
  VAR_4->interrupt_count = 0;
 }
}

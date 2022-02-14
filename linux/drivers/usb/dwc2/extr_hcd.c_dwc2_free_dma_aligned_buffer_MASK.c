
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; size_t transfer_buffer_length; size_t actual_length; void* transfer_buffer; int pipe; } ;


 void* FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct urb*) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 void *VAR_2;
 size_t VAR_3;

 if (!(VAR_1->transfer_flags & VAR_0))
  return;


 FUNC_3(&VAR_2,
        FUNC_0(VAR_1->transfer_buffer + VAR_1->transfer_buffer_length,
    FUNC_1()),
        sizeof(VAR_1->transfer_buffer));

 if (FUNC_5(VAR_1)) {
  if (FUNC_4(VAR_1->pipe))
   VAR_3 = VAR_1->transfer_buffer_length;
  else
   VAR_3 = VAR_1->actual_length;

  FUNC_3(VAR_2, VAR_1->transfer_buffer, VAR_3);
 }
 FUNC_2(VAR_1->transfer_buffer);
 VAR_1->transfer_buffer = VAR_2;

 VAR_1->transfer_flags &= ~VAR_0;
}

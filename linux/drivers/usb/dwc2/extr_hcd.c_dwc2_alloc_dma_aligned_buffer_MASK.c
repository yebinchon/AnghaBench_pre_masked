
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; int transfer_flags; int **** transfer_buffer; scalar_t__ sg; scalar_t__ num_sgs; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (void*,int ***,int) ;
 scalar_t__ FUNC_4 (struct urb*) ;

__attribute__((used)) static int FUNC_5(struct urb *VAR_3, gfp_t VAR_4)
{
 void *VAR_5;
 size_t VAR_6;

 if (VAR_3->num_sgs || VAR_3->sg ||
     VAR_3->transfer_buffer_length == 0 ||
     !((uintptr_t)VAR_3->transfer_buffer & (VAR_0 - 1)))
  return 0;






 VAR_6 = VAR_3->transfer_buffer_length +
  (FUNC_1() - 1) +
  sizeof(VAR_3->transfer_buffer);

 VAR_5 = FUNC_2(VAR_6, VAR_4);
 if (!VAR_5)
  return -VAR_1;





 FUNC_3(FUNC_0(VAR_5 + VAR_3->transfer_buffer_length,
    FUNC_1()),
        &VAR_3->transfer_buffer, sizeof(VAR_3->transfer_buffer));

 if (FUNC_4(VAR_3))
  FUNC_3(VAR_5, *VAR_3->transfer_buffer,
         VAR_3->transfer_buffer_length);
 VAR_3->transfer_buffer = VAR_5;

 VAR_3->transfer_flags |= VAR_2;

 return 0;
}

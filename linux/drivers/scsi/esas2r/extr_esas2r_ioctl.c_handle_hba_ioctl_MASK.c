
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_buffered_ioctl {scalar_t__ offset; int * done_context; int done_callback; int * context; int callback; scalar_t__ length; struct atto_ioctl* ioctl; struct esas2r_adapter* a; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_ioctl {scalar_t__ data_length; } ;
typedef int bi ;


 int FUNC_0 (struct esas2r_buffered_ioctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct esas2r_buffered_ioctl*,int ,int) ;

u8 FUNC_2(struct esas2r_adapter *VAR_2,
      struct atto_ioctl *VAR_3)
{
 struct esas2r_buffered_ioctl VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.a = VAR_2;
 VAR_4.ioctl = VAR_3;
 VAR_4.length = sizeof(struct atto_ioctl) + VAR_3->data_length;
 VAR_4.callback = VAR_0;
 VAR_4.context = ((void*)0);
 VAR_4.done_callback = VAR_1;
 VAR_4.done_context = ((void*)0);
 VAR_4.offset = 0;

 return FUNC_0(&VAR_4);
}

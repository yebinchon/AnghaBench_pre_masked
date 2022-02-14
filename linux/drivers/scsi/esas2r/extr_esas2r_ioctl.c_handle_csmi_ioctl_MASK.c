
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union atto_ioctl_csmi {int dummy; } atto_ioctl_csmi ;
typedef int u8 ;
struct esas2r_buffered_ioctl {int length; struct atto_csmi* done_context; int done_callback; struct atto_csmi* context; int callback; scalar_t__ offset; int * ioctl; struct esas2r_adapter* a; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_csmi {int data; } ;
typedef int bi ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esas2r_buffered_ioctl*) ;
 int FUNC_1 (struct esas2r_buffered_ioctl*,int ,int) ;

__attribute__((used)) static u8 FUNC_2(struct esas2r_adapter *VAR_2, struct atto_csmi *VAR_3)
{
 struct esas2r_buffered_ioctl VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.a = VAR_2;
 VAR_4.ioctl = &VAR_3->data;
 VAR_4.length = sizeof(union atto_ioctl_csmi);
 VAR_4.offset = 0;
 VAR_4.callback = VAR_0;
 VAR_4.context = VAR_3;
 VAR_4.done_callback = VAR_1;
 VAR_4.done_context = VAR_3;

 return FUNC_0(&VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_buffered_ioctl {int callback; scalar_t__ offset; scalar_t__ length; struct atto_ioctl_smp* ioctl; struct esas2r_adapter* a; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_ioctl_smp {int rsp_length; int req_length; } ;
typedef int bi ;


 int FUNC_0 (struct esas2r_buffered_ioctl*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct esas2r_buffered_ioctl*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_3(struct esas2r_adapter *VAR_1, struct atto_ioctl_smp *VAR_2)
{
 struct esas2r_buffered_ioctl VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.a = VAR_1;
 VAR_3.ioctl = VAR_2;
 VAR_3.length = sizeof(struct atto_ioctl_smp)
      + FUNC_1(VAR_2->req_length)
      + FUNC_1(VAR_2->rsp_length);
 VAR_3.offset = 0;
 VAR_3.callback = VAR_0;
 return FUNC_0(&VAR_3);
}

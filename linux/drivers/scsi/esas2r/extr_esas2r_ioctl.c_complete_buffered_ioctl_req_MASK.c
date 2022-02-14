
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int dummy; } ;
struct esas2r_adapter {int buffered_ioctl_done; int buffered_ioctl_waiter; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct esas2r_adapter *VAR_0,
     struct esas2r_request *VAR_1)
{
 VAR_0->buffered_ioctl_done = 1;
 FUNC_0(&VAR_0->buffered_ioctl_waiter);
}

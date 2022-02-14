
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct recv_frame {int dummy; } ;
struct __queue {int dummy; } ;
struct TYPE_2__ {struct __queue free_recv_queue; } ;
struct adapter {TYPE_1__ recvpriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct recv_frame*,struct __queue*) ;
 int FUNC_2 (struct adapter*,struct recv_frame*) ;

__attribute__((used)) static int FUNC_3(struct adapter *VAR_3,
          struct recv_frame *VAR_4)
{
 int VAR_5 = VAR_0;
 struct __queue *VAR_6 = &VAR_3->recvpriv.free_recv_queue;


 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 != VAR_0) {
  FUNC_0(VAR_2, VAR_1, ("recv_func: validate_recv_frame fail! drop pkt\n"));
  FUNC_1(VAR_4, VAR_6);
  goto exit;
 }

exit:
 return VAR_5;
}

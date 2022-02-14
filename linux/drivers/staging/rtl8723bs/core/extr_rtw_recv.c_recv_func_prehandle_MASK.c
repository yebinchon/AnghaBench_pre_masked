
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union recv_frame {int dummy; } recv_frame ;
struct TYPE_4__ {int core_rx_pre; } ;
struct __queue {int dummy; } ;
struct TYPE_3__ {struct __queue free_recv_queue; } ;
struct adapter {TYPE_2__ rx_logs; TYPE_1__ recvpriv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (union recv_frame*,struct __queue*) ;
 int FUNC_3 (struct adapter*,union recv_frame*) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_3, union recv_frame *VAR_4)
{
 int VAR_5 = VAR_0;
 struct __queue *VAR_6 = &VAR_3->recvpriv.free_recv_queue;

 FUNC_0(VAR_3->rx_logs.core_rx_pre);


 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5 != VAR_0) {
  FUNC_1(VAR_2, VAR_1, ("recv_func: validate_recv_frame fail! drop pkt\n"));
  FUNC_2(VAR_4, VAR_6);
  goto exit;
 }

exit:
 return VAR_5;
}

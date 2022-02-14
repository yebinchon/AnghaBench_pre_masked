
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {scalar_t__ rcv_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct nvmet_tcp_queue*) ;
 int FUNC_1 (struct nvmet_tcp_queue*) ;
 int FUNC_2 (struct nvmet_tcp_queue*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_queue *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_3(VAR_5->rcv_state == VAR_3))
  return 0;

 if (VAR_5->rcv_state == VAR_4) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 != 0)
   goto done_recv;
 }

 if (VAR_5->rcv_state == VAR_1) {
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != 0)
   goto done_recv;
 }

 if (VAR_5->rcv_state == VAR_2) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 != 0)
   goto done_recv;
 }

done_recv:
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_0)
   return 0;
  return VAR_6;
 }
 return 1;
}

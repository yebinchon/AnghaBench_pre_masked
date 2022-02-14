
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_request {scalar_t__ state; } ;
struct nvme_tcp_queue {struct nvme_tcp_request* request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nvme_tcp_request* FUNC_0 (struct nvme_tcp_queue*) ;
 int FUNC_1 (struct nvme_tcp_request*) ;
 int FUNC_2 (struct nvme_tcp_request*) ;
 int FUNC_3 (struct nvme_tcp_request*) ;
 int FUNC_4 (struct nvme_tcp_request*) ;
 int FUNC_5 (struct nvme_tcp_request*) ;

__attribute__((used)) static int FUNC_6(struct nvme_tcp_queue *VAR_5)
{
 struct nvme_tcp_request *VAR_6;
 int VAR_7 = 1;

 if (!VAR_5->request) {
  VAR_5->request = FUNC_0(VAR_5);
  if (!VAR_5->request)
   return 0;
 }
 VAR_6 = VAR_5->request;

 if (VAR_6->state == VAR_1) {
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 <= 0)
   goto done;
  if (!FUNC_1(VAR_6))
   return VAR_7;
 }

 if (VAR_6->state == VAR_4) {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 <= 0)
   goto done;
 }

 if (VAR_6->state == VAR_2) {
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7 <= 0)
   goto done;
 }

 if (VAR_6->state == VAR_3)
  VAR_7 = FUNC_5(VAR_6);
done:
 if (VAR_7 == -VAR_0)
  VAR_7 = 0;
 return VAR_7;
}

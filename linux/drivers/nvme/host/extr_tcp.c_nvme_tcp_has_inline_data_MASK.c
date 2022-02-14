
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_tcp_request {int queue; } ;


 scalar_t__ VAR_0 ;
 struct request* FUNC_0 (struct nvme_tcp_request*) ;
 unsigned int FUNC_1 (struct request*) ;
 int FUNC_2 (struct nvme_tcp_request*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline bool FUNC_6(struct nvme_tcp_request *VAR_1)
{
 struct request *VAR_2;
 unsigned int VAR_3;

 if (FUNC_5(FUNC_2(VAR_1)))
  return 0;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_2);

 return FUNC_4(VAR_2) == VAR_0 && VAR_3 &&
  VAR_3 <= FUNC_3(VAR_1->queue);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nvme_result {int dummy; } nvme_result ;
struct request {int dummy; } ;
struct nvme_request {int status; union nvme_result result; } ;
typedef int __le16 ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;
 struct nvme_request* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;

__attribute__((used)) static inline void FUNC_4(struct request *VAR_0, __le16 VAR_1,
  union nvme_result VAR_2)
{
 struct nvme_request *VAR_3 = FUNC_2(VAR_0);

 VAR_3->status = FUNC_1(VAR_1) >> 1;
 VAR_3->result = VAR_2;

 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_iod {scalar_t__ sg; } ;


 struct nvme_iod* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static void **FUNC_2(struct request *VAR_0)
{
 struct nvme_iod *VAR_1 = FUNC_0(VAR_0);
 return (void **)(VAR_1->sg + FUNC_1(VAR_0));
}

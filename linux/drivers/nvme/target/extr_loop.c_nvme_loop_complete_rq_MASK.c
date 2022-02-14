
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_loop_iod {int sg_table; } ;


 int VAR_0 ;
 struct nvme_loop_iod* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_1)
{
 struct nvme_loop_iod *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(&VAR_2->sg_table, VAR_0);
 FUNC_2(VAR_1);
}

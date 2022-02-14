
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_queue {int io_work; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nvme_tcp_queue*) ;

__attribute__((used)) static void FUNC_3(struct nvme_tcp_queue *VAR_1)
{
 FUNC_1(VAR_1->sock, VAR_0);
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->io_work);
}

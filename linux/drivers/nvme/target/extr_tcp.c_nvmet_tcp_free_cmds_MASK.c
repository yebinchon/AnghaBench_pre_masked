
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_cmd {int dummy; } ;
struct nvmet_tcp_queue {int nr_cmds; struct nvmet_tcp_cmd connect; struct nvmet_tcp_cmd* cmds; } ;


 int FUNC_0 (struct nvmet_tcp_cmd*) ;
 int FUNC_1 (struct nvmet_tcp_cmd*) ;

__attribute__((used)) static void FUNC_2(struct nvmet_tcp_queue *VAR_0)
{
 struct nvmet_tcp_cmd *VAR_1 = VAR_0->cmds;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_cmds; VAR_2++)
  FUNC_1(VAR_1 + VAR_2);

 FUNC_1(&VAR_0->connect);
 FUNC_0(VAR_1);
}

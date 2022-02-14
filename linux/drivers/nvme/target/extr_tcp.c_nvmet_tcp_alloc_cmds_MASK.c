
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_tcp_queue {int nr_cmds; struct nvmet_tcp_cmd* cmds; } ;
struct nvmet_tcp_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmet_tcp_cmd* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct nvmet_tcp_cmd*) ;
 int FUNC_2 (struct nvmet_tcp_queue*,struct nvmet_tcp_cmd*) ;
 int FUNC_3 (struct nvmet_tcp_cmd*) ;

__attribute__((used)) static int FUNC_4(struct nvmet_tcp_queue *VAR_2)
{
 struct nvmet_tcp_cmd *VAR_3;
 int VAR_4, VAR_5 = -VAR_0, VAR_6 = VAR_2->nr_cmds;

 VAR_3 = FUNC_0(VAR_6, sizeof(struct nvmet_tcp_cmd), VAR_1);
 if (!VAR_3)
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_5 = FUNC_2(VAR_2, VAR_3 + VAR_4);
  if (VAR_5)
   goto out_free;
 }

 VAR_2->cmds = VAR_3;

 return 0;
out_free:
 while (--VAR_4 >= 0)
  FUNC_3(VAR_3 + VAR_4);
 FUNC_1(VAR_3);
out:
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nvmet_tcp_cmd* u16 ;
struct nvmet_tcp_queue {int cmds; } ;
struct nvmet_tcp_cmd {int dummy; } ;



__attribute__((used)) static inline u16 FUNC_0(struct nvmet_tcp_queue *VAR_0,
  struct nvmet_tcp_cmd *VAR_1)
{
 return VAR_1 - VAR_0->cmds;
}

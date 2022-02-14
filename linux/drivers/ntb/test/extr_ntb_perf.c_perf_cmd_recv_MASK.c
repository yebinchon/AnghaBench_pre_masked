
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct perf_peer {void* outbuf_xlat; void* inbuf_size; } ;
struct perf_ctx {int (* cmd_recv ) (struct perf_ctx*,int*,int*,void**) ;TYPE_1__* ntb; struct perf_peer* peers; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct perf_peer*,int ) ;
 int FUNC_2 (struct perf_ctx*,int*,int*,void**) ;

__attribute__((used)) static int FUNC_3(struct perf_ctx *VAR_4)
{
 struct perf_peer *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 u64 VAR_9;

 while (!(VAR_6 = VAR_4->cmd_recv(VAR_4, &VAR_7, &VAR_8, &VAR_9))) {
  VAR_5 = &VAR_4->peers[VAR_7];

  switch (VAR_8) {
  case 129:
   VAR_5->inbuf_size = VAR_9;
   return FUNC_1(VAR_5, VAR_2);
  case 128:
   VAR_5->outbuf_xlat = VAR_9;
   return FUNC_1(VAR_5, VAR_3);
  default:
   FUNC_0(&VAR_4->ntb->dev, "Recv invalid command\n");
   return -VAR_0;
  }
 }


 return VAR_6 == -VAR_1 ? 0 : VAR_6;
}

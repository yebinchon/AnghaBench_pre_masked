
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tool_ctx {int peer_cnt; TYPE_2__* peers; TYPE_1__* ntb; } ;
struct TYPE_4__ {int pidx; struct tool_ctx* tc; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct tool_ctx *VAR_2)
{
 int VAR_3;

 VAR_2->peer_cnt = FUNC_1(VAR_2->ntb);
 VAR_2->peers = FUNC_0(&VAR_2->ntb->dev, VAR_2->peer_cnt,
     sizeof(*VAR_2->peers), VAR_1);
 if (VAR_2->peers == ((void*)0))
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->peer_cnt; VAR_3++) {
  VAR_2->peers[VAR_3].pidx = VAR_3;
  VAR_2->peers[VAR_3].tc = VAR_2;
 }

 return 0;
}

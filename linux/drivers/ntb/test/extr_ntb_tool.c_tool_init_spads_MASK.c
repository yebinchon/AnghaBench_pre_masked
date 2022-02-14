
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tool_ctx {int inspad_cnt; int peer_cnt; TYPE_3__* peers; TYPE_4__* ntb; TYPE_1__* inspads; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int outspad_cnt; TYPE_2__* outspads; } ;
struct TYPE_6__ {int sidx; int pidx; struct tool_ctx* tc; } ;
struct TYPE_5__ {int sidx; int pidx; struct tool_ctx* tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int,int ) ;
 void* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(struct tool_ctx *VAR_2)
{
 int VAR_3, VAR_4;


 VAR_2->inspad_cnt = FUNC_1(VAR_2->ntb);
 VAR_2->inspads = FUNC_0(&VAR_2->ntb->dev, VAR_2->inspad_cnt,
       sizeof(*VAR_2->inspads), VAR_1);
 if (VAR_2->inspads == ((void*)0))
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->inspad_cnt; VAR_3++) {
  VAR_2->inspads[VAR_3].sidx = VAR_3;
  VAR_2->inspads[VAR_3].pidx = -1;
  VAR_2->inspads[VAR_3].tc = VAR_2;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->peer_cnt; VAR_4++) {
  VAR_2->peers[VAR_4].outspad_cnt = FUNC_1(VAR_2->ntb);
  VAR_2->peers[VAR_4].outspads =
   FUNC_0(&VAR_2->ntb->dev, VAR_2->peers[VAR_4].outspad_cnt,
    sizeof(*VAR_2->peers[VAR_4].outspads), VAR_1);
  if (VAR_2->peers[VAR_4].outspads == ((void*)0))
   return -VAR_0;

  for (VAR_3 = 0; VAR_3 < VAR_2->peers[VAR_4].outspad_cnt; VAR_3++) {
   VAR_2->peers[VAR_4].outspads[VAR_3].sidx = VAR_3;
   VAR_2->peers[VAR_4].outspads[VAR_3].pidx = VAR_4;
   VAR_2->peers[VAR_4].outspads[VAR_3].tc = VAR_2;
  }
 }

 return 0;
}

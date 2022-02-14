
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tool_ctx {int outmw_cnt; int peer_cnt; TYPE_4__* outmws; TYPE_3__* peers; TYPE_5__* ntb; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int widx; int pidx; struct tool_ctx* tc; } ;
struct TYPE_9__ {int inmw_cnt; int outmw_cnt; TYPE_2__* outmws; TYPE_1__* inmws; } ;
struct TYPE_8__ {int pidx; TYPE_4__* mw; } ;
struct TYPE_7__ {int widx; int pidx; struct tool_ctx* tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 void* FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(struct tool_ctx *VAR_2)
{
 int VAR_3, VAR_4;


 VAR_2->outmw_cnt = FUNC_2(VAR_2->ntb);
 VAR_2->outmws = FUNC_0(&VAR_2->ntb->dev, VAR_2->outmw_cnt,
      sizeof(*VAR_2->outmws), VAR_1);
 if (VAR_2->outmws == ((void*)0))
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->outmw_cnt; VAR_3++) {
  VAR_2->outmws[VAR_3].widx = VAR_3;
  VAR_2->outmws[VAR_3].pidx = -1;
  VAR_2->outmws[VAR_3].tc = VAR_2;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->peer_cnt; VAR_4++) {
  VAR_2->peers[VAR_4].inmw_cnt = FUNC_1(VAR_2->ntb, VAR_4);
  VAR_2->peers[VAR_4].inmws =
   FUNC_0(&VAR_2->ntb->dev, VAR_2->peers[VAR_4].inmw_cnt,
        sizeof(*VAR_2->peers[VAR_4].inmws), VAR_1);
  if (VAR_2->peers[VAR_4].inmws == ((void*)0))
   return -VAR_0;

  for (VAR_3 = 0; VAR_3 < VAR_2->peers[VAR_4].inmw_cnt; VAR_3++) {
   VAR_2->peers[VAR_4].inmws[VAR_3].widx = VAR_3;
   VAR_2->peers[VAR_4].inmws[VAR_3].pidx = VAR_4;
   VAR_2->peers[VAR_4].inmws[VAR_3].tc = VAR_2;
  }

  VAR_2->peers[VAR_4].outmw_cnt = FUNC_2(VAR_2->ntb);
  VAR_2->peers[VAR_4].outmws =
   FUNC_0(&VAR_2->ntb->dev, VAR_2->peers[VAR_4].outmw_cnt,
       sizeof(*VAR_2->peers[VAR_4].outmws), VAR_1);

  for (VAR_3 = 0; VAR_3 < VAR_2->peers[VAR_4].outmw_cnt; VAR_3++) {
   VAR_2->peers[VAR_4].outmws[VAR_3].pidx = VAR_4;
   VAR_2->peers[VAR_4].outmws[VAR_3].mw = &VAR_2->outmws[VAR_3];
  }
 }

 return 0;
}

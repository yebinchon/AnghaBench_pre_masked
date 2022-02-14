
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bdisp_op_cfg {int dst_nbp; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_7__ {TYPE_2__ crop; } ;
struct bdisp_ctx {TYPE_4__** node; TYPE_3__ src; scalar_t__* node_paddr; TYPE_1__* bdisp_dev; } ;
struct TYPE_8__ {scalar_t__ nip; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct bdisp_ctx*,struct bdisp_op_cfg*,TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_1 (struct bdisp_ctx*,struct bdisp_op_cfg*) ;
 int FUNC_2 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct bdisp_ctx *VAR_7)
{
 struct bdisp_op_cfg VAR_8;
 unsigned int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  if (!VAR_7->node[VAR_9]) {
   FUNC_2(VAR_7->bdisp_dev->dev, "node %d is null\n", VAR_9);
   return -VAR_3;
  }


 if (FUNC_1(VAR_7, &VAR_8))
  return -VAR_3;


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {

  FUNC_0(VAR_7, &VAR_8, VAR_7->node[VAR_10],
        VAR_8.dst_nbp == 1 ? VAR_1 : VAR_2,
        VAR_11);
  if (VAR_10)
   VAR_7->node[VAR_10 - 1]->nip = VAR_7->node_paddr[VAR_10];
  VAR_10++;


  if (VAR_8.dst_nbp > 1) {
   FUNC_0(VAR_7, &VAR_8, VAR_7->node[VAR_10],
         VAR_0, VAR_11);
   VAR_7->node[VAR_10 - 1]->nip = VAR_7->node_paddr[VAR_10];
   VAR_10++;
  }


  VAR_11 += VAR_5;
  if (VAR_11 >= VAR_7->src.crop.width)
   break;
 }


 VAR_7->node[VAR_10 - 1]->nip = 0;

 return 0;
}

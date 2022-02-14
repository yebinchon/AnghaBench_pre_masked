
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct mtk_mdp_frame {unsigned int* payload; TYPE_1__* fmt; } ;
struct mtk_mdp_ctx {int id; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int num_planes; } ;


 struct mtk_mdp_frame* FUNC_0 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_1 (int,char*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct mtk_mdp_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_0,
   unsigned int *VAR_1, unsigned int *VAR_2,
   unsigned int VAR_3[], struct device *VAR_4[])
{
 struct mtk_mdp_ctx *VAR_5 = FUNC_2(VAR_0);
 struct mtk_mdp_frame *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_5, VAR_0->type);
 *VAR_2 = VAR_6->fmt->num_planes;
 for (VAR_7 = 0; VAR_7 < VAR_6->fmt->num_planes; VAR_7++)
  VAR_3[VAR_7] = VAR_6->payload[VAR_7];
 FUNC_1(2, "[%d] type:%d, planes:%d, buffers:%d, size:%u,%u",
      VAR_5->id, VAR_0->type, *VAR_2, *VAR_1,
      VAR_3[0], VAR_3[1]);
 return 0;
}

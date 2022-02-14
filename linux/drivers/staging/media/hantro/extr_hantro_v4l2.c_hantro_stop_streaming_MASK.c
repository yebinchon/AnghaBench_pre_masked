
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct hantro_ctx {TYPE_1__* codec_ops; } ;
struct TYPE_2__ {int (* exit ) (struct hantro_ctx*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_queue*,int ) ;
 scalar_t__ FUNC_2 (struct vb2_queue*) ;
 int FUNC_3 (struct hantro_ctx*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hantro_ctx* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_5(struct vb2_queue *VAR_2)
{
 struct hantro_ctx *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_2(VAR_2)) {
  if (VAR_3->codec_ops && VAR_3->codec_ops->exit)
   VAR_3->codec_ops->exit(VAR_3);
 }






 if (FUNC_0(VAR_2->type))
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_1(VAR_2, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct cedrus_dev {TYPE_1__** dec_ops; } ;
struct cedrus_ctx {size_t current_codec; struct cedrus_dev* dev; } ;
struct TYPE_2__ {int (* stop ) (struct cedrus_ctx*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vb2_queue*,int ) ;
 int FUNC_2 (struct cedrus_ctx*) ;
 struct cedrus_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_1)
{
 struct cedrus_ctx *VAR_2 = FUNC_3(VAR_1);
 struct cedrus_dev *VAR_3 = VAR_2->dev;

 if (FUNC_0(VAR_1->type) &&
     VAR_3->dec_ops[VAR_2->current_codec]->stop)
  VAR_3->dec_ops[VAR_2->current_codec]->stop(VAR_2);

 FUNC_1(VAR_1, VAR_0);
}

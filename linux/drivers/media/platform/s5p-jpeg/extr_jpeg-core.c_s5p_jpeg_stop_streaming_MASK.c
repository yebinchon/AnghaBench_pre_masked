
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {scalar_t__ type; } ;
struct s5p_jpeg_ctx {scalar_t__ state; TYPE_1__* jpeg; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct s5p_jpeg_ctx*) ;
 struct s5p_jpeg_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_3(struct vb2_queue *VAR_3)
{
 struct s5p_jpeg_ctx *VAR_4 = FUNC_2(VAR_3);






 if (VAR_4->state == VAR_0 &&
     VAR_3->type == VAR_2) {
  FUNC_1(VAR_4);
  VAR_4->state = VAR_1;
 }

 FUNC_0(VAR_4->jpeg->dev);
}

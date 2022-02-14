
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_v4l2 {scalar_t__ top_field; scalar_t__ progressive; } ;
struct em28xx_dmaqueue {int dummy; } ;
struct em28xx_buffer {scalar_t__ pos; scalar_t__ top_field; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int FUNC_0 (struct em28xx*,struct em28xx_buffer*) ;
 struct em28xx_buffer* FUNC_1 (struct em28xx*,struct em28xx_dmaqueue*) ;

__attribute__((used)) static struct em28xx_buffer *
FUNC_2(struct em28xx *VAR_0,
     struct em28xx_buffer *VAR_1,
     struct em28xx_dmaqueue *VAR_2)
{
 struct em28xx_v4l2 *VAR_3 = VAR_0->v4l2;

 if (VAR_3->progressive || VAR_3->top_field) {
  if (VAR_1)
   FUNC_0(VAR_0, VAR_1);
  VAR_1 = FUNC_1(VAR_0, VAR_2);
 }
 if (VAR_1) {
  VAR_1->top_field = VAR_3->top_field;
  VAR_1->pos = 0;
 }

 return VAR_1;
}

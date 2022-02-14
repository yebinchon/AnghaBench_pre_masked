
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_buffer {unsigned long pos; unsigned long length; scalar_t__ top_field; scalar_t__ vb_buf; } ;
struct em28xx {TYPE_1__* v4l2; } ;
struct TYPE_2__ {unsigned int vbi_width; unsigned int vbi_height; } ;


 int FUNC_0 (scalar_t__,unsigned char*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct em28xx *VAR_0,
       struct em28xx_buffer *VAR_1,
       unsigned char *VAR_2,
       unsigned long VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1->pos + VAR_3 > VAR_1->length)
  VAR_3 = VAR_1->length - VAR_1->pos;

 VAR_4 = VAR_1->pos;

 if (VAR_1->top_field == 0)
  VAR_4 += VAR_0->v4l2->vbi_width * VAR_0->v4l2->vbi_height;

 FUNC_0(VAR_1->vb_buf + VAR_4, VAR_2, VAR_3);
 VAR_1->pos += VAR_3;
}

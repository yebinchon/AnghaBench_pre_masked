
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx_v4l2 {int width; scalar_t__ progressive; } ;
struct em28xx_buffer {unsigned long pos; unsigned long length; void* vb_buf; scalar_t__ top_field; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct em28xx *VAR_0,
         struct em28xx_buffer *VAR_1,
         unsigned char *VAR_2,
         unsigned long VAR_3)
{
 struct em28xx_v4l2 *VAR_4 = VAR_0->v4l2;
 void *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_4->width << 1;

 if (VAR_1->pos + VAR_3 > VAR_1->length)
  VAR_3 = VAR_1->length - VAR_1->pos;

 VAR_7 = VAR_2;
 VAR_12 = VAR_3;

 if (VAR_4->progressive || VAR_1->top_field)
  VAR_5 = VAR_1->vb_buf;
 else
  VAR_5 = VAR_1->vb_buf + VAR_13;

 VAR_8 = VAR_1->pos / VAR_13;
 VAR_9 = VAR_1->pos % VAR_13;

 if (VAR_4->progressive)
  VAR_10 = VAR_8 * VAR_13 + VAR_9;
 else
  VAR_10 = VAR_8 * VAR_13 * 2 + VAR_9;

 VAR_6 = VAR_5 + VAR_10;
 VAR_11 = VAR_13 - VAR_9;
 VAR_11 = VAR_11 > VAR_12 ? VAR_12 : VAR_11;

 if ((char *)VAR_6 + VAR_11 > (char *)VAR_1->vb_buf + VAR_1->length) {
  FUNC_0("Overflow of %zu bytes past buffer end (1)\n",
          ((char *)VAR_6 + VAR_11) -
         ((char *)VAR_1->vb_buf + VAR_1->length));
  VAR_12 = (char *)VAR_1->vb_buf + VAR_1->length -
    (char *)VAR_6;
  VAR_11 = VAR_12;
 }
 if (VAR_11 <= 0)
  return;
 FUNC_1(VAR_6, VAR_7, VAR_11);

 VAR_12 -= VAR_11;

 while (VAR_12 > 0) {
  if (VAR_4->progressive)
   VAR_6 += VAR_11;
  else
   VAR_6 += VAR_11 + VAR_13;
  VAR_7 += VAR_11;
  if (VAR_13 > VAR_12)
   VAR_11 = VAR_12;
  else
   VAR_11 = VAR_13;

  if ((char *)VAR_6 + VAR_11 > (char *)VAR_1->vb_buf +
      VAR_1->length) {
   FUNC_0("Overflow of %zu bytes past buffer end(2)\n",
           ((char *)VAR_6 + VAR_11) -
           ((char *)VAR_1->vb_buf + VAR_1->length));
   VAR_12 = (char *)VAR_1->vb_buf + VAR_1->length -
     (char *)VAR_6;
   VAR_11 = VAR_12;
  }
  if (VAR_11 <= 0)
   break;

  FUNC_1(VAR_6, VAR_7, VAR_11);

  VAR_12 -= VAR_11;
 }

 VAR_1->pos += VAR_3;
}

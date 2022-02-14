
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dmaqueue {unsigned long pos; } ;
struct au0828_dev {int width; int greenscreen_detected; } ;
struct au0828_buffer {unsigned long length; scalar_t__ top_field; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct au0828_dev *VAR_0,
         struct au0828_dmaqueue *VAR_1,
         struct au0828_buffer *VAR_2,
         unsigned char *VAR_3,
         unsigned char *VAR_4, unsigned long VAR_5)
{
 void *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = VAR_0->width << 1;

 if (VAR_5 == 0)
  return;

 if (VAR_1->pos + VAR_5 > VAR_2->length)
  VAR_5 = VAR_2->length - VAR_1->pos;

 VAR_8 = VAR_3;
 VAR_13 = VAR_5;


 if (VAR_2->top_field)
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_4 + VAR_14;

 VAR_9 = VAR_1->pos / VAR_14;
 VAR_10 = VAR_1->pos % VAR_14;
 VAR_11 = VAR_9 * VAR_14 * 2 + VAR_10;
 VAR_7 = VAR_6 + VAR_11;
 VAR_12 = VAR_14 - VAR_10;
 VAR_12 = VAR_12 > VAR_13 ? VAR_13 : VAR_12;

 if ((char *)VAR_7 + VAR_12 > (char *)VAR_4 + VAR_2->length) {
  FUNC_0("Overflow of %zi bytes past buffer end (1)\n",
          ((char *)VAR_7 + VAR_12) -
          ((char *)VAR_4 + VAR_2->length));
  VAR_13 = (char *)VAR_4 + VAR_2->length - (char *)VAR_7;
  VAR_12 = VAR_13;
 }
 if (VAR_12 <= 0)
  return;
 FUNC_1(VAR_7, VAR_8, VAR_12);

 VAR_13 -= VAR_12;

 while (VAR_13 > 0) {
  VAR_7 += VAR_12 + VAR_14;
  VAR_8 += VAR_12;
  if (VAR_14 > VAR_13)
   VAR_12 = VAR_13;
  else
   VAR_12 = VAR_14;

  if ((char *)VAR_7 + VAR_12 > (char *)VAR_4 +
      VAR_2->length) {
   FUNC_0("Overflow %zi bytes past buf end (2)\n",
           ((char *)VAR_7 + VAR_12) -
           ((char *)VAR_4 + VAR_2->length));
   VAR_12 = VAR_13 = (char *)VAR_4 + VAR_2->length -
        (char *)VAR_7;
  }
  if (VAR_12 <= 0)
   break;

  FUNC_1(VAR_7, VAR_8, VAR_12);

  VAR_13 -= VAR_12;
 }

 if (VAR_11 > 1440) {

  if (VAR_4[0] < 0x60 && VAR_4[1440] < 0x60)
   VAR_0->greenscreen_detected = 1;
 }

 VAR_1->pos += VAR_5;
}

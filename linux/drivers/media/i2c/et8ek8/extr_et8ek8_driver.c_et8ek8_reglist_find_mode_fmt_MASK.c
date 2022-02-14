
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int width; int height; scalar_t__ code; } ;
struct et8ek8_reglist {scalar_t__ type; } ;
struct et8ek8_meta_reglist {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct et8ek8_reglist** FUNC_0 (struct et8ek8_meta_reglist*) ;
 int FUNC_1 (struct et8ek8_reglist*,struct v4l2_mbus_framefmt*) ;
 unsigned int FUNC_2 (int,int) ;

__attribute__((used)) static struct et8ek8_reglist *FUNC_3(
  struct et8ek8_meta_reglist *VAR_1,
  struct v4l2_mbus_framefmt *VAR_2)
{
 struct et8ek8_reglist **VAR_3 = FUNC_0(VAR_1);
 struct et8ek8_reglist *VAR_4 = ((void*)0);
 struct et8ek8_reglist *VAR_5 = ((void*)0);
 struct v4l2_mbus_framefmt VAR_6;
 unsigned int VAR_7 = (unsigned int)-1;
 unsigned int VAR_8 = (unsigned int)-1;
 for (; *VAR_3; VAR_3++) {
  unsigned int VAR_9;

  if ((*VAR_3)->type != VAR_0)
   continue;

  FUNC_1(*VAR_3, &VAR_6);

  VAR_9 = FUNC_2(VAR_2->width, VAR_6.width)
       * FUNC_2(VAR_2->height, VAR_6.height);
  VAR_9 = VAR_6.width * VAR_6.height
       + VAR_2->width * VAR_2->height - 2 * VAR_9;


  if (VAR_2->code == VAR_6.code) {
   if (VAR_9 < VAR_7 || !VAR_4) {
    VAR_4 = *VAR_3;
    VAR_7 = VAR_9;
   }
  } else {
   if (VAR_9 < VAR_8 || !VAR_5) {
    VAR_5 = *VAR_3;
    VAR_8 = VAR_9;
   }
  }
 }

 return VAR_4 ? VAR_4 : VAR_5;
}

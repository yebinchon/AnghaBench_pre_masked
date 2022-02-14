
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ field; } ;
struct vpbe_layer {int field_id; TYPE_1__ pix_fmt; scalar_t__ layer_first_int; int buffer_queue; } ;
struct vpbe_display {struct vpbe_layer** dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct vpbe_display*) ;
 int FUNC_2 (struct vpbe_display*,struct vpbe_layer*) ;
 int FUNC_3 (struct vpbe_display*,struct vpbe_layer*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct vpbe_display *VAR_8 = (struct vpbe_display *)VAR_7;
 struct vpbe_layer *VAR_9;
 static unsigned VAR_10;
 unsigned VAR_11 = 0;
 int VAR_12;
 int VAR_13;

 if (!VAR_7 || !VAR_8->dev[0])
  return VAR_0;

 if (FUNC_1(VAR_8))
  VAR_11 |= VAR_4;
 else
  VAR_11 |= VAR_3;

 if (VAR_11 == (VAR_10 & ~VAR_2)) {







  VAR_11 |= VAR_2;
 } else if (VAR_11 == VAR_4) {

  VAR_11 |= VAR_2;
 }
 VAR_10 = VAR_11;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_9 = VAR_8->dev[VAR_13];

  if (!FUNC_0(&VAR_9->buffer_queue))
   continue;

  if (VAR_9->layer_first_int) {
   VAR_9->layer_first_int = 0;
   continue;
  }

  if ((VAR_1 == VAR_9->pix_fmt.field) &&
   (VAR_11 & VAR_2)) {


   FUNC_2(VAR_8, VAR_9);
   FUNC_3(VAR_8, VAR_9);
  } else {


   VAR_9->field_id ^= 1;
   if (VAR_11 & VAR_3)
    VAR_12 = 0;
   else
    VAR_12 = 1;





   if (VAR_12 != VAR_9->field_id) {

    VAR_9->field_id = VAR_12;
    continue;
   }




   if (0 == VAR_12)
    FUNC_2(VAR_8, VAR_9);
   else
    FUNC_3(VAR_8, VAR_9);
  }
 }

 return VAR_0;
}

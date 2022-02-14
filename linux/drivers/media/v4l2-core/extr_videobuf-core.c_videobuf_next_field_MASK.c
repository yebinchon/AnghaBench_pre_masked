
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int field; scalar_t__ last; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;

enum v4l2_field FUNC_1(struct videobuf_queue *VAR_4)
{
 enum v4l2_field VAR_5 = VAR_4->field;

 FUNC_0(VAR_1 == VAR_5);

 if (VAR_0 == VAR_5) {
  if (VAR_3 == VAR_4->last) {
   VAR_5 = VAR_2;
   VAR_4->last = VAR_2;
  } else {
   VAR_5 = VAR_3;
   VAR_4->last = VAR_3;
  }
 }
 return VAR_5;
}

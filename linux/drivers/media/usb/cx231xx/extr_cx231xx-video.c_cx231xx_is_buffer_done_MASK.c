
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx_dmaqueue {int current_field; scalar_t__ lines_completed; scalar_t__ lines_per_field; scalar_t__ field1_done; } ;
struct cx231xx {int dummy; } ;



u8 FUNC_0(struct cx231xx *VAR_0, struct cx231xx_dmaqueue *VAR_1)
{
 u8 VAR_2 = 0;


 VAR_2 = ((VAR_1->current_field == 2) &&
      (VAR_1->lines_completed >= VAR_1->lines_per_field) &&
       VAR_1->field1_done);

 return VAR_2;
}

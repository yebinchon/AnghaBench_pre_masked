
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct cx231xx_dmaqueue {scalar_t__ lines_completed; int current_field; } ;
struct cx231xx {int norm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

u8 FUNC_0(struct cx231xx *VAR_3,
         struct cx231xx_dmaqueue *VAR_4)
{
 u32 VAR_5 = 0;

 VAR_5 = ((VAR_3->norm & VAR_2) ?
    VAR_1 : VAR_0);
 if (VAR_4->lines_completed == VAR_5 && VAR_4->current_field == 2)
  return 1;
 else
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbcon_ops {int update_start; int cursor; int clear_margins; int putcs; int clear; int bmove; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct fbcon_ops *VAR_6)
{
 VAR_6->bmove = VAR_0;
 VAR_6->clear = VAR_1;
 VAR_6->putcs = VAR_4;
 VAR_6->clear_margins = VAR_2;
 VAR_6->cursor = VAR_3;
 VAR_6->update_start = VAR_5;
}

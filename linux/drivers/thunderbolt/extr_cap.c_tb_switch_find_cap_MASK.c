
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_cap_offset; } ;
struct tb_switch {TYPE_1__ config; } ;
struct TYPE_4__ {int cap; int next; } ;
struct tb_cap_any {TYPE_2__ basic; } ;
typedef enum tb_switch_cap { ____Placeholder_tb_switch_cap } tb_switch_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb_switch*,struct tb_cap_any*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct tb_switch *VAR_3, enum tb_switch_cap VAR_4)
{
 int VAR_5 = VAR_3->config.first_cap_offset;

 while (VAR_5 > 0 && VAR_5 < VAR_0) {
  struct tb_cap_any VAR_6;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_3, &VAR_6, VAR_2, VAR_5, 1);
  if (VAR_7)
   return VAR_7;

  if (VAR_6.basic.cap == VAR_4)
   return VAR_5;

  VAR_5 = VAR_6.basic.next;
 }

 return -VAR_1;
}

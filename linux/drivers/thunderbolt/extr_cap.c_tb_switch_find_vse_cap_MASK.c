
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_switch {int dummy; } ;
struct TYPE_4__ {int vsec_id; int next; int length; } ;
struct TYPE_3__ {int vsec_id; int next; } ;
struct tb_cap_any {TYPE_2__ extended_short; TYPE_1__ extended_long; } ;
typedef enum tb_switch_vse_cap { ____Placeholder_tb_switch_vse_cap } tb_switch_vse_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb_switch*,struct tb_cap_any*,int ,int,int) ;
 int FUNC_1 (struct tb_switch*,int ) ;

int FUNC_2(struct tb_switch *VAR_5, enum tb_switch_vse_cap VAR_6)
{
 struct tb_cap_any VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 while (VAR_8 > 0 && VAR_8 < VAR_4) {
  int VAR_9;

  VAR_9 = FUNC_0(VAR_5, &VAR_7, VAR_2, VAR_8, 2);
  if (VAR_9)
   return VAR_9;






  if (VAR_8 >= VAR_0) {
   if (VAR_7.extended_long.vsec_id == VAR_6)
    return VAR_8;
   VAR_8 = VAR_7.extended_long.next;
  } else {
   if (VAR_7.extended_short.vsec_id == VAR_6)
    return VAR_8;
   if (!VAR_7.extended_short.length)
    return -VAR_1;
   VAR_8 = VAR_7.extended_short.next;
  }
 }

 return -VAR_1;
}

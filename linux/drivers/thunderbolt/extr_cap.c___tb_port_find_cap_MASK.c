
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_port {int dummy; } ;
struct TYPE_2__ {int cap; int next; } ;
struct tb_cap_any {TYPE_1__ basic; } ;
typedef enum tb_port_cap { ____Placeholder_tb_port_cap } tb_port_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_port*,struct tb_cap_any*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct tb_port *VAR_2, enum tb_port_cap VAR_3)
{
 u32 VAR_4 = 1;

 do {
  struct tb_cap_any VAR_5;
  int VAR_6;

  VAR_6 = FUNC_0(VAR_2, &VAR_5, VAR_1, VAR_4, 1);
  if (VAR_6)
   return VAR_6;

  if (VAR_5.basic.cap == VAR_3)
   return VAR_4;

  VAR_4 = VAR_5.basic.next;
 } while (VAR_4);

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int rx_handler_result_t ;
struct TYPE_2__ {int active_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct team*) ;
 struct team_port* FUNC_1 (int ) ;

__attribute__((used)) static rx_handler_result_t FUNC_2(struct team *VAR_2, struct team_port *VAR_3,
          struct sk_buff *VAR_4) {
 struct team_port *VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_2)->active_port);
 if (VAR_5 != VAR_3)
  return VAR_1;
 return VAR_0;
}

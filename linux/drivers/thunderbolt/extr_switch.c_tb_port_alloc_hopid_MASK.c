
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ida {int dummy; } ;
struct TYPE_2__ {int max_in_hop_id; int max_out_hop_id; } ;
struct tb_port {struct ida out_hopids; TYPE_1__ config; struct ida in_hopids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ida*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct tb_port *VAR_2, bool VAR_3, int VAR_4,
          int VAR_5)
{
 int VAR_6;
 struct ida *VAR_7;

 if (VAR_3) {
  VAR_6 = VAR_2->config.max_in_hop_id;
  VAR_7 = &VAR_2->in_hopids;
 } else {
  VAR_6 = VAR_2->config.max_out_hop_id;
  VAR_7 = &VAR_2->out_hopids;
 }


 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;

 if (VAR_5 < 0 || VAR_5 > VAR_6)
  VAR_5 = VAR_6;

 return FUNC_0(VAR_7, VAR_4, VAR_5 + 1, VAR_0);
}

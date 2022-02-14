
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
struct tb_port {scalar_t__ port; int cap_phy; int cap_adap; int out_hopids; int in_hopids; TYPE_2__ config; TYPE_1__* sw; } ;
struct TYPE_4__ {int tb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (struct tb_port*,char*) ;
 int FUNC_4 (struct tb_port*,int ) ;
 int FUNC_5 (struct tb_port*,TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct tb_port *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(VAR_5, &VAR_5->config, VAR_1, 0, 8);
 if (VAR_6) {
  if (VAR_6 == -VAR_0) {
   FUNC_1(VAR_5->sw->tb, " Port %d: not implemented\n",
          VAR_5->port);
   return 0;
  }
  return VAR_6;
 }


 if (VAR_5->config.type == VAR_4 && VAR_5->port != 0) {
  VAR_7 = FUNC_4(VAR_5, VAR_3);

  if (VAR_7 > 0)
   VAR_5->cap_phy = VAR_7;
  else
   FUNC_3(VAR_5, "non switch port without a PHY\n");
 } else if (VAR_5->port != 0) {
  VAR_7 = FUNC_4(VAR_5, VAR_2);
  if (VAR_7 > 0)
   VAR_5->cap_adap = VAR_7;
 }

 FUNC_2(VAR_5->sw->tb, &VAR_5->config);


 if (VAR_5->port) {
  FUNC_0(&VAR_5->in_hopids);
  FUNC_0(&VAR_5->out_hopids);
 }

 return 0;

}

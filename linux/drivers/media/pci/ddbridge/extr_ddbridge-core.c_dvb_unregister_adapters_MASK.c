
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddb_port {struct ddb_dvb* dvb; } ;
struct ddb_dvb {scalar_t__ adap_registered; int adap; } ;
struct ddb {struct ddb_port* port; TYPE_2__* link; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int port_num; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ddb *VAR_0)
{
 int VAR_1;
 struct ddb_port *VAR_2;
 struct ddb_dvb *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->link[0].info->port_num; VAR_1++) {
  VAR_2 = &VAR_0->port[VAR_1];

  VAR_3 = &VAR_2->dvb[0];
  if (VAR_3->adap_registered)
   FUNC_0(VAR_3->adap);
  VAR_3->adap_registered = 0;

  VAR_3 = &VAR_2->dvb[1];
  if (VAR_3->adap_registered)
   FUNC_0(VAR_3->adap);
  VAR_3->adap_registered = 0;
 }
}

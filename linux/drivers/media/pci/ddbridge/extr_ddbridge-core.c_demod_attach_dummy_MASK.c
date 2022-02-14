
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_2__* port; } ;
struct ddb_dvb {int fe; } ;
struct TYPE_4__ {TYPE_1__* dev; struct ddb_dvb* dvb; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ddb_input *VAR_2)
{
 struct ddb_dvb *VAR_3 = &VAR_2->port->dvb[VAR_2->nr & 1];
 struct device *VAR_4 = VAR_2->port->dev->dev;

 VAR_3->fe = FUNC_1(VAR_1);
 if (!VAR_3->fe) {
  FUNC_0(VAR_4, "QAM dummy attach failed!\n");
  return -VAR_0;
 }

 return 0;
}

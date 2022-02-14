
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ddb_port {int class; int nr; TYPE_2__* dev; scalar_t__ output; TYPE_1__* dvb; TYPE_3__** input; } ;
struct TYPE_7__ {struct TYPE_7__* redi; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; int adap; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ddb_port*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *,int *,void*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct ddb_port *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->class) {
 case 128:
  VAR_4 = FUNC_2(VAR_3->input[0]);
  if (VAR_4 < 0)
   break;
  VAR_4 = FUNC_2(VAR_3->input[1]);
  if (VAR_4 < 0) {
   FUNC_3(VAR_3->input[0]);
   break;
  }
  VAR_3->input[0]->redi = VAR_3->input[0];
  VAR_3->input[1]->redi = VAR_3->input[1];
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  if (VAR_4 < 0)
   break;

 case 129:
  VAR_4 = FUNC_4(VAR_3->dvb[0].adap,
       &VAR_3->dvb[0].dev,
       &VAR_2, (void *)VAR_3->output,
       VAR_0, 0);
  break;
 default:
  break;
 }
 if (VAR_4 < 0)
  FUNC_1(VAR_3->dev->dev, "port_attach on port %d failed\n",
   VAR_3->nr);
 return VAR_4;
}

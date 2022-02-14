
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ddb_port {int type; int en; TYPE_1__* dvb; } ;
struct TYPE_2__ {int adap; } ;






 int VAR_0 ;
 int FUNC_0 (struct ddb_port*) ;
 int FUNC_1 (struct ddb_port*,int ) ;
 int FUNC_2 (struct ddb_port*) ;
 int FUNC_3 (int ,int ,int ,int) ;

int FUNC_4(struct ddb_port *VAR_1, u32 VAR_2)
{
 int VAR_3;

 switch (VAR_1->type) {
 case 131:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   return -VAR_0;
  break;
 case 130:
 case 129:
  FUNC_2(VAR_1);
  break;
 case 128:
  FUNC_0(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 if (!VAR_1->en)
  return -VAR_0;
 FUNC_3(VAR_1->dvb[0].adap, VAR_1->en, 0, 1);
 return 0;
}

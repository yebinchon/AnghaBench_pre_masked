
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ddb_port {TYPE_2__* en; scalar_t__ en_freedata; TYPE_1__* dvb; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int ** i2c_client; scalar_t__ dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ddb_port *VAR_0)
{
 if (VAR_0->dvb[0].dev)
  FUNC_2(VAR_0->dvb[0].dev);
 if (VAR_0->en) {
  FUNC_0(VAR_0->en);

  FUNC_1(VAR_0->dvb[0].i2c_client[0]);
  VAR_0->dvb[0].i2c_client[0] = ((void*)0);


  if (VAR_0->en_freedata)
   FUNC_3(VAR_0->en->data);

  VAR_0->en = ((void*)0);
 }
}

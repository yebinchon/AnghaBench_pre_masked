
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct ddb_port {TYPE_2__* i2c; TYPE_1__* dev; } ;
struct TYPE_4__ {int adap; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int *,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ddb_port *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev->dev;
 u8 VAR_2;
 int VAR_3 = FUNC_1(&VAR_0->i2c->adap, 0x20, 0, &VAR_2);

 if (!VAR_3)
  FUNC_0(VAR_1, "[0x20]=0x%02x\n", VAR_2);
 return VAR_3 ? 0 : 1;
}

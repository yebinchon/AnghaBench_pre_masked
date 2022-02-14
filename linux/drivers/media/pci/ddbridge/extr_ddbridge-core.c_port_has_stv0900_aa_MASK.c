
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ddb_port {TYPE_1__* i2c; } ;
struct TYPE_2__ {int adap; } ;


 scalar_t__ FUNC_0 (int *,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct ddb_port *VAR_0, u8 *VAR_1)
{
 if (FUNC_0(&VAR_0->i2c->adap, 0x68, 0xf100, VAR_1) < 0)
  return 0;
 return 1;
}

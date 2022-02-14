
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ddb_port {TYPE_1__* i2c; } ;
struct TYPE_2__ {int adap; } ;


 scalar_t__ FUNC_0 (int *,int,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ddb_port *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3[1] = { 0x00 }, VAR_4[4];

 if (FUNC_0(&VAR_0->i2c->adap, 0x10, VAR_3, 1, VAR_4, 4))
  return 0;
 if (VAR_4[0] == 'D' && VAR_4[1] == 'F') {
  *VAR_2 = VAR_4[2];
  *VAR_1 = 1;
  return 1;
 }
 if (VAR_4[0] == 'C' && VAR_4[1] == 'I') {
  *VAR_2 = VAR_4[2];
  *VAR_1 = 2;
  return 1;
 }
 return 0;
}

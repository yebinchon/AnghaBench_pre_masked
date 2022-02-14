
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ddb_port {scalar_t__ lnr; scalar_t__ nr; TYPE_1__* i2c; struct ddb* dev; } ;
struct ddb {size_t i2c_num; TYPE_1__* i2c; } ;
struct TYPE_2__ {scalar_t__ link; scalar_t__ nr; } ;



__attribute__((used)) static int FUNC_0(struct ddb_port *VAR_0)
{
 struct ddb *VAR_1 = VAR_0->dev;
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->i2c_num; VAR_2++) {
  if (VAR_1->i2c[VAR_2].link == VAR_0->lnr &&
      VAR_1->i2c[VAR_2].nr == VAR_0->nr) {
   VAR_0->i2c = &VAR_1->i2c[VAR_2];
   return 1;
  }
 }
 return 0;
}

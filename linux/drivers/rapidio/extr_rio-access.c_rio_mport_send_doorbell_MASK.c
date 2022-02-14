
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rio_mport {int id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dsend ) (struct rio_mport*,int ,int ,int ) ;} ;


 int FUNC_0 (struct rio_mport*,int ,int ,int ) ;

int FUNC_1(struct rio_mport *VAR_0, u16 VAR_1, u16 VAR_2)
{
 return VAR_0->ops->dsend(VAR_0, VAR_0->id, VAR_1, VAR_2);
}

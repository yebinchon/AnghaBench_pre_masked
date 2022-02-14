
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe {TYPE_1__* variant; } ;
struct TYPE_2__ {int (* enable ) (struct stmpe*,unsigned int,int) ;} ;


 int FUNC_0 (struct stmpe*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_0, unsigned int VAR_1)
{
 return VAR_0->variant->enable(VAR_0, VAR_1, 1);
}

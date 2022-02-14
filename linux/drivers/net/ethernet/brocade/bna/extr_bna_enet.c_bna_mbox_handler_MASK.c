
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioc; } ;
struct bna {TYPE_1__ ioceth; } ;


 scalar_t__ FUNC_0 (struct bna*,int ) ;
 scalar_t__ FUNC_1 (struct bna*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bna*,int ) ;

void
FUNC_4(struct bna *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1)) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }
 if (FUNC_1(VAR_0, VAR_1))
  FUNC_2(&VAR_0->ioceth.ioc);
}

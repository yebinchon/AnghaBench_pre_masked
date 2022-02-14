
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {TYPE_1__* card; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct pnp_dev*) ;

__attribute__((used)) static int FUNC_3(struct pnp_dev *VAR_1)
{
 if (!(FUNC_0(FUNC_2(VAR_1)) ||
     (VAR_1->card && FUNC_0(VAR_1->card->name))))
  return -VAR_0;

 if (FUNC_1(VAR_1))
  return 0;

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {TYPE_1__* fsa_dev; } ;
struct TYPE_2__ {int valid; } ;


 int FUNC_0 (struct aac_dev*,int,int) ;
 scalar_t__ FUNC_1 (struct aac_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_0, int VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  return VAR_0->fsa_dev[VAR_2].valid;
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}

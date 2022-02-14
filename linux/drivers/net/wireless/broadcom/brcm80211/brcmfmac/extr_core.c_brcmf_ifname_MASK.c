
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {TYPE_1__* ndev; } ;
struct TYPE_2__ {char* name; } ;



char *FUNC_0(struct brcmf_if *VAR_0)
{
 if (!VAR_0)
  return "<if_null>";

 if (VAR_0->ndev)
  return VAR_0->ndev->name;

 return "<if_none>";
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppp_channel {struct channel* ppp; } ;
struct TYPE_2__ {int index; } ;
struct channel {TYPE_1__ file; } ;



int FUNC_0(struct ppp_channel *VAR_0)
{
 struct channel *VAR_1 = VAR_0->ppp;

 if (VAR_1)
  return VAR_1->file.index;
 return -1;
}

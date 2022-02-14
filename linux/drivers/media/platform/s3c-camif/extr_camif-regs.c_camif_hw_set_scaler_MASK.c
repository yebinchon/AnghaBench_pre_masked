
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct camif_vp {TYPE_2__* camif; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {unsigned int ip_revision; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct camif_vp*) ;
 int FUNC_1 (struct camif_vp*) ;

void FUNC_2(struct camif_vp *VAR_1)
{
 unsigned int VAR_2 = VAR_1->camif->variant->ip_revision;

 if (VAR_2 == VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}

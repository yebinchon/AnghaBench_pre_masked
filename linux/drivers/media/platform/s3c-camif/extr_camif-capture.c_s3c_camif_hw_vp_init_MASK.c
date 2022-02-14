
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camif_vp {int state; int * out_fmt; } ;
struct camif_dev {TYPE_1__* variant; } ;
struct TYPE_2__ {unsigned int ip_revision; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct camif_vp*) ;
 int FUNC_1 (struct camif_vp*) ;
 int FUNC_2 (struct camif_vp*) ;

__attribute__((used)) static int FUNC_3(struct camif_dev *VAR_3, struct camif_vp *VAR_4)
{
 unsigned int VAR_5 = VAR_3->variant->ip_revision;

 if (VAR_4->out_fmt == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_4);
 if (VAR_5 == VAR_1)
  FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 VAR_4->state &= ~VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_private {TYPE_1__* pcid; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct vnt_private *VAR_1, unsigned short VAR_2)
{
 if (VAR_2 & VAR_0) {
  FUNC_1(&VAR_1->pcid->dev, "Hardware fatal error\n");

  FUNC_0(VAR_1);
  return;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenpf_pcpuinfo {int flags; } ;
struct TYPE_2__ {int kobj; } ;
struct pcpu {TYPE_1__ dev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xenpf_pcpuinfo *VAR_3,
          struct pcpu *VAR_4)
{
 if (FUNC_1(VAR_3->flags) &&
    !FUNC_1(VAR_4->flags)) {

  VAR_4->flags |= VAR_2;
  FUNC_0(&VAR_4->dev.kobj, VAR_1);
 } else if (!FUNC_1(VAR_3->flags) &&
      FUNC_1(VAR_4->flags)) {

  VAR_4->flags &= ~VAR_2;
  FUNC_0(&VAR_4->dev.kobj, VAR_0);
 }
}

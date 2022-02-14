
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nents; int sgl; } ;
struct ispstat_buffer {TYPE_2__ sgt; } ;
struct ispstat {TYPE_1__* isp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ispstat*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ispstat *VAR_1,
          struct ispstat_buffer *VAR_2)
{
 if (FUNC_0(VAR_1))
  return;

 FUNC_1(VAR_1->isp->dev, VAR_2->sgt.sgl,
       VAR_2->sgt.nents, VAR_0);
}

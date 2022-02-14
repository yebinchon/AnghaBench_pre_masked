
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_rbm {scalar_t__ offset; int bii; TYPE_1__* rgd; } ;
struct TYPE_4__ {scalar_t__ bi_blocks; } ;
struct TYPE_3__ {int rd_length; } ;


 TYPE_2__* FUNC_0 (struct gfs2_rbm*) ;

__attribute__((used)) static bool FUNC_1(struct gfs2_rbm *VAR_0)
{
 if (VAR_0->offset + 1 < FUNC_0(VAR_0)->bi_blocks) {
  VAR_0->offset++;
  return 0;
 }
 if (VAR_0->bii == VAR_0->rgd->rd_length - 1)
  return 1;

 VAR_0->offset = 0;
 VAR_0->bii++;
 return 0;
}

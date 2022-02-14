
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicvf {double cq_coalesce_usecs; int pdev; } ;
struct TYPE_2__ {int base; } ;
struct cmp_queue {int thresh; TYPE_1__ dmem; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nicvf*,TYPE_1__*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nicvf *VAR_4,
    struct cmp_queue *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_5->dmem, VAR_6, VAR_1,
         VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_5->desc = VAR_5->dmem.base;
 VAR_5->thresh = FUNC_1(VAR_4->pdev) ? 0 : VAR_0;
 VAR_4->cq_coalesce_usecs = (VAR_2 * 0.05) - 1;

 return 0;
}

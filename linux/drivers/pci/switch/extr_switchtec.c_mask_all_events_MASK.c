
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_dev {int partition_count; int pff_csr_count; int * pff_local; } ;
struct TYPE_2__ {scalar_t__ map_reg; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct switchtec_dev*,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct switchtec_dev *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 if (VAR_0[VAR_4].map_reg == VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_3->partition_count; VAR_5++)
   VAR_6 += FUNC_0(VAR_3, VAR_4, VAR_5);
 } else if (VAR_0[VAR_4].map_reg == VAR_2) {
  for (VAR_5 = 0; VAR_5 < VAR_3->pff_csr_count; VAR_5++) {
   if (!VAR_3->pff_local[VAR_5])
    continue;

   VAR_6 += FUNC_0(VAR_3, VAR_4, VAR_5);
  }
 } else {
  VAR_6 += FUNC_0(VAR_3, VAR_4, 0);
 }

 return VAR_6;
}

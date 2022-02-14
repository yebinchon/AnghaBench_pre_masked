
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_fc_tgt_queue {int sqsize; int sqtail; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool
FUNC_1(struct nvmet_fc_tgt_queue *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3;


 VAR_2 = FUNC_0(&VAR_0->sqtail) % VAR_0->sqsize;

 VAR_3 = (VAR_2 < VAR_1) ? (VAR_2 + VAR_0->sqsize - VAR_1) : (VAR_2 - VAR_1);
 return ((VAR_3 * 10) >= (((u32)(VAR_0->sqsize - 1) * 9)));
}

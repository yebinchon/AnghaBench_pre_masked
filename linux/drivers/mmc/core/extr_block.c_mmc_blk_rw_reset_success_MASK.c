
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_queue {int blkdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static inline void FUNC_2(struct mmc_queue *VAR_3,
         struct request *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4) == VAR_2 ? VAR_0 : VAR_1;

 FUNC_0(VAR_3->blkdata, VAR_5);
}

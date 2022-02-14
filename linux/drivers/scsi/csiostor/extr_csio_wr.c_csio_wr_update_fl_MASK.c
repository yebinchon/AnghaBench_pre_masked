
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct csio_q {scalar_t__ pidx; scalar_t__ credits; int inc_idx; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_q*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct csio_hw *VAR_1, struct csio_q *VAR_2, uint16_t VAR_3)
{

 VAR_2->inc_idx += VAR_3;
 VAR_2->pidx += VAR_3;
 if (FUNC_1(VAR_2->pidx >= VAR_2->credits))
  VAR_2->pidx -= (uint16_t)VAR_2->credits;

 FUNC_0(VAR_2, VAR_0);
}

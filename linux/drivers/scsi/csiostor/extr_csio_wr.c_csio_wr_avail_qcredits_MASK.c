
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct csio_q {scalar_t__ pidx; scalar_t__ cidx; scalar_t__ credits; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct csio_q *VAR_0)
{
 if (VAR_0->pidx > VAR_0->cidx)
  return VAR_0->pidx - VAR_0->cidx;
 else if (VAR_0->cidx > VAR_0->pidx)
  return VAR_0->credits - (VAR_0->cidx - VAR_0->pidx);
 else
  return 0;
}

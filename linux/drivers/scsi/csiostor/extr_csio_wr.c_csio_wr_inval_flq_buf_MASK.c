
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_q {scalar_t__ cidx; scalar_t__ credits; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_q*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(struct csio_hw *VAR_1, struct csio_q *VAR_2)
{
 VAR_2->cidx++;
 if (VAR_2->cidx == VAR_2->credits) {
  VAR_2->cidx = 0;
  FUNC_0(VAR_2, VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flid; } ;
struct TYPE_4__ {TYPE_1__ fl; } ;
struct csio_q {int inc_idx; TYPE_2__ un; } ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct csio_hw*,int,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct csio_hw *VAR_3, struct csio_q *VAR_4)
{





 if (VAR_4->inc_idx >= 8) {
  FUNC_3(VAR_3, VAR_0 | FUNC_2(VAR_4->un.fl.flid) |
      FUNC_1(VAR_4->inc_idx / 8) | VAR_1,
      FUNC_0(VAR_2));
  VAR_4->inc_idx &= 7;
 }
}

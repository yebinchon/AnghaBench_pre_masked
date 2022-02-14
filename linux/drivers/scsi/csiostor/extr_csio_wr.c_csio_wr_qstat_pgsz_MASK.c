
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int sge_control; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct csio_hw {TYPE_2__ wrm; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(struct csio_hw *VAR_1)
{
 return (VAR_1->wrm.sge.sge_control & VAR_0) ? 128 : 64;
}

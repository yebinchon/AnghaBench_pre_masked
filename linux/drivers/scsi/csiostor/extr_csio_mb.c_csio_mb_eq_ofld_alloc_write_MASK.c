
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_mb {int dummy; } ;
struct csio_hw {int dummy; } ;
struct csio_eq_params {int dummy; } ;


 int FUNC_0 (struct csio_hw*,struct csio_mb*,void*,int ,struct csio_eq_params*,void (*) (struct csio_hw*,struct csio_mb*)) ;
 int FUNC_1 (struct csio_hw*,struct csio_mb*,void*,int ,int,struct csio_eq_params*,void (*) (struct csio_hw*,struct csio_mb*)) ;

void
FUNC_2(struct csio_hw *VAR_0, struct csio_mb *VAR_1,
       void *VAR_2, uint32_t VAR_3,
       struct csio_eq_params *VAR_4,
       void (*VAR_5) (struct csio_hw *, struct csio_mb *))
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 1,
         VAR_4, VAR_5);
}

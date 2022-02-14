
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_hw*,int) ;
 int FUNC_1 (struct csio_hw*,int,int) ;

void
FUNC_2(struct csio_hw *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
     uint32_t VAR_3)
{
 uint32_t VAR_4 = FUNC_0(VAR_0, VAR_1) & ~VAR_2;

 FUNC_1(VAR_0, VAR_4 | VAR_3, VAR_1);

 FUNC_0(VAR_0, VAR_1);

}

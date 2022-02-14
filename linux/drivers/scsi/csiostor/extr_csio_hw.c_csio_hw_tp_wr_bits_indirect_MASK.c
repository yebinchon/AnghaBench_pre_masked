
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct csio_hw*,int ) ;
 int FUNC_1 (struct csio_hw*,unsigned int,int ) ;

void
FUNC_2(struct csio_hw *VAR_2, unsigned int VAR_3,
   unsigned int VAR_4, unsigned int VAR_5)
{
 FUNC_1(VAR_2, VAR_3, VAR_0);
 VAR_5 |= FUNC_0(VAR_2, VAR_1) & ~VAR_4;
 FUNC_1(VAR_2, VAR_5, VAR_1);
}

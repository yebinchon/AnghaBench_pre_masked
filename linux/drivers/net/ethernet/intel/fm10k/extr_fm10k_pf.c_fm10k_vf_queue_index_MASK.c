
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int num_vfs; } ;
struct fm10k_hw {TYPE_1__ iov; } ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_hw*) ;

u16 FUNC_1(struct fm10k_hw *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = VAR_1->iov.num_vfs;
 u16 VAR_4 = VAR_0;

 VAR_4 -= FUNC_0(VAR_1) * (VAR_3 - VAR_2);

 return VAR_4;
}

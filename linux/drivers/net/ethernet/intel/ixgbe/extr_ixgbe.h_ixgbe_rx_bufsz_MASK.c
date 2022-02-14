
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {int state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ixgbe_ring *VAR_4)
{
 if (FUNC_1(VAR_3, &VAR_4->state))
  return VAR_2;

 if (FUNC_0(VAR_4))
  return VAR_0;

 return VAR_1;
}

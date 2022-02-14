
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ring {int dummy; } ;


 unsigned int FUNC_0 (struct ice_ring*) ;
 int FUNC_1 (struct ice_ring*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ice_ring *VAR_0, unsigned int VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_0) >= VAR_1))
  return 0;

 return FUNC_1(VAR_0, VAR_1);
}

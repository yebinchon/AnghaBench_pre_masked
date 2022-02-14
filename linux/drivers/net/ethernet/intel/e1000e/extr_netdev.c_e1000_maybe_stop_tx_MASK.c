
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_ring {int count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct e1000_ring*,int) ;
 int FUNC_2 (struct e1000_ring*) ;

__attribute__((used)) static int FUNC_3(struct e1000_ring *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 > VAR_0->count);

 if (FUNC_2(VAR_0) >= VAR_1)
  return 0;
 return FUNC_1(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_hcd {int* num_stream; } ;


 size_t FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dummy_hcd *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_2--;
 VAR_3 = VAR_0->num_stream[FUNC_0(VAR_1)];
 if (FUNC_1(VAR_1)) {
  VAR_2 <<= 4;
  VAR_3 &= 0xf;
 } else {
  VAR_3 &= 0xf0;
 }
 VAR_3 |= VAR_2;
 VAR_0->num_stream[FUNC_0(VAR_1)] = VAR_3;
}

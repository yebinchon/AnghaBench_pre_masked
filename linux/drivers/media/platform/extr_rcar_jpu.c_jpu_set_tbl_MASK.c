
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct jpu {int dummy; } ;


 int FUNC_0 (struct jpu*,unsigned int const,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct jpu *VAR_0, u32 VAR_1, const unsigned int *VAR_2,
   unsigned int VAR_3) {
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, VAR_2[VAR_4], VAR_1 + (VAR_4 << 2));
}

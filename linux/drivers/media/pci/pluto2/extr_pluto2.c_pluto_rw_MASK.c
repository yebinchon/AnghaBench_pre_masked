
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct pluto {int * io_mem; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (size_t,int *) ;

__attribute__((used)) static inline void FUNC_2(struct pluto *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(&VAR_0->io_mem[VAR_1]);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_4, &VAR_0->io_mem[VAR_1]);
}

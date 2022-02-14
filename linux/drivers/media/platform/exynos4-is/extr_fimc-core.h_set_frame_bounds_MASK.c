
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fimc_frame {void* f_height; void* f_width; void* o_height; void* o_width; } ;



__attribute__((used)) static inline void FUNC_0(struct fimc_frame *VAR_0, u32 VAR_1, u32 VAR_2)
{
 VAR_0->o_width = VAR_1;
 VAR_0->o_height = VAR_2;
 VAR_0->f_width = VAR_1;
 VAR_0->f_height = VAR_2;
}

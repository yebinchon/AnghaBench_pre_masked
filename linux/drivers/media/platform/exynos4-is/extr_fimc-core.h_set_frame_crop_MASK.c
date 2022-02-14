
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct fimc_frame {void* height; void* width; void* offs_v; void* offs_h; } ;



__attribute__((used)) static inline void FUNC_0(struct fimc_frame *VAR_0,
      u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 VAR_0->offs_h = VAR_1;
 VAR_0->offs_v = VAR_2;
 VAR_0->width = VAR_3;
 VAR_0->height = VAR_4;
}

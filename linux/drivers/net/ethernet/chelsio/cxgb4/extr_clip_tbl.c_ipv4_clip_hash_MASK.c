
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clip_tbl {int clipt_size; } ;


 unsigned int FUNC_0 (int const,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct clip_tbl *VAR_0, const u32 *VAR_1)
{
 unsigned int VAR_2 = VAR_0->clipt_size / 2;

 return FUNC_0(*VAR_1, 0) % VAR_2;
}

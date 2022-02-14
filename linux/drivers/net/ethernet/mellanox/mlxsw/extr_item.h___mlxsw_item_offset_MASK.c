
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_item {size_t step; size_t offset; size_t in_step_offset; int name; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t,size_t,size_t,size_t) ;

__attribute__((used)) static inline unsigned int
FUNC_3(const struct mlxsw_item *VAR_0, unsigned short VAR_1,
      size_t VAR_2)
{
 FUNC_1(VAR_1 && !VAR_0->step);
 if (VAR_0->offset % VAR_2 != 0 ||
     VAR_0->step % VAR_2 != 0 ||
     VAR_0->in_step_offset % VAR_2 != 0) {
  FUNC_2("mlxsw: item bug (name=%s,offset=%x,step=%x,in_step_offset=%x,typesize=%zx)\n",
         VAR_0->name, VAR_0->offset, VAR_0->step,
         VAR_0->in_step_offset, VAR_2);
  FUNC_0();
 }

 return ((VAR_0->offset + VAR_0->step * VAR_1 + VAR_0->in_step_offset) /
  VAR_2);
}

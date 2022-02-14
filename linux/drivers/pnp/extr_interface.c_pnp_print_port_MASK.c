
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_port {int flags; scalar_t__ size; scalar_t__ align; scalar_t__ max; scalar_t__ min; } ;
typedef int pnp_info_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,unsigned long long,unsigned long long,unsigned long long,unsigned long long,int) ;

__attribute__((used)) static void FUNC_1(pnp_info_buffer_t * VAR_1, char *VAR_2,
      struct pnp_port *VAR_3)
{
 FUNC_0(VAR_1, "%sport %#llx-%#llx, align %#llx, size %#llx, "
     "%i-bit address decoding\n", VAR_2,
     (unsigned long long) VAR_3->min,
     (unsigned long long) VAR_3->max,
     VAR_3->align ? ((unsigned long long) VAR_3->align - 1) : 0,
     (unsigned long long) VAR_3->size,
     VAR_3->flags & VAR_0 ? 16 : 10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_mem {int flags; scalar_t__ size; scalar_t__ align; scalar_t__ max; scalar_t__ min; } ;
typedef int pnp_info_buffer_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(pnp_info_buffer_t * VAR_6, char *VAR_7,
     struct pnp_mem *VAR_8)
{
 char *VAR_9;

 FUNC_0(VAR_6, "%sMemory %#llx-%#llx, align %#llx, size %#llx",
     VAR_7, (unsigned long long) VAR_8->min,
     (unsigned long long) VAR_8->max,
     (unsigned long long) VAR_8->align,
     (unsigned long long) VAR_8->size);
 if (VAR_8->flags & VAR_5)
  FUNC_0(VAR_6, ", writeable");
 if (VAR_8->flags & VAR_0)
  FUNC_0(VAR_6, ", cacheable");
 if (VAR_8->flags & VAR_2)
  FUNC_0(VAR_6, ", range-length");
 if (VAR_8->flags & VAR_3)
  FUNC_0(VAR_6, ", shadowable");
 if (VAR_8->flags & VAR_1)
  FUNC_0(VAR_6, ", expansion ROM");
 switch (VAR_8->flags & VAR_4) {
 case 128:
  VAR_9 = "8-bit";
  break;
 case 129:
  VAR_9 = "8-bit&16-bit";
  break;
 case 130:
  VAR_9 = "32-bit";
  break;
 default:
  VAR_9 = "16-bit";
 }
 FUNC_0(VAR_6, ", %s\n", VAR_9);
}

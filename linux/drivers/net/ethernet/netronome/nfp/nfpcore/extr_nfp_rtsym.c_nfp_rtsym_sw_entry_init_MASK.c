
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_rtsym_table {scalar_t__ strtab; } ;
struct nfp_rtsym_entry {int target; int menum; int island; int size_lo; scalar_t__ size_hi; int addr_lo; scalar_t__ addr_hi; int name; int type; } ;
struct nfp_rtsym {int addr; int size; int target; int domain; scalar_t__ name; int type; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_rtsym_table *VAR_2, u32 VAR_3,
   struct nfp_rtsym *VAR_4, struct nfp_rtsym_entry *VAR_5)
{
 VAR_4->type = VAR_5->type;
 VAR_4->name = VAR_2->strtab + FUNC_0(VAR_5->name) % VAR_3;
 VAR_4->addr = ((u64)VAR_5->addr_hi << 32) | FUNC_1(VAR_5->addr_lo);
 VAR_4->size = ((u64)VAR_5->size_hi << 32) | FUNC_1(VAR_5->size_lo);

 switch (VAR_5->target) {
 case 128:
  VAR_4->target = VAR_1;
  break;
 case 129:
  VAR_4->target = VAR_0;
  break;
 default:
  VAR_4->target = VAR_5->target;
  break;
 }

 if (VAR_5->menum != 0xff)
  VAR_4->domain = FUNC_2(VAR_5->island, VAR_5->menum);
 else if (VAR_5->island != 0xff)
  VAR_4->domain = VAR_5->island;
 else
  VAR_4->domain = -1;
}

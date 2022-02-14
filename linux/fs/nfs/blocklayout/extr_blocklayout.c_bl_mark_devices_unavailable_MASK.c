
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_block_layout {int dummy; } ;
struct pnfs_block_extent {size_t be_length; size_t be_f_offset; int be_device; } ;
struct TYPE_2__ {size_t count; size_t offset; } ;
struct nfs_pgio_header {TYPE_1__ args; int lseg; } ;
typedef size_t sector_t ;


 struct pnfs_block_layout* FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct pnfs_block_layout*,size_t,struct pnfs_block_extent*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nfs_pgio_header *VAR_1, bool VAR_2)
{
 struct pnfs_block_layout *VAR_3 = FUNC_0(VAR_1->lseg);
 size_t VAR_4 = VAR_1->args.count;
 sector_t VAR_5, VAR_6 = 0;
 struct pnfs_block_extent VAR_7;

 VAR_5 = VAR_1->args.offset >> VAR_0;
 VAR_4 += VAR_1->args.offset - (VAR_5 << VAR_0);

 while (VAR_4 > 0) {
  if (!FUNC_1(VAR_3, VAR_5, &VAR_7, VAR_2))
    return;
  VAR_6 = VAR_7.be_length - (VAR_5 - VAR_7.be_f_offset);
  FUNC_2(VAR_7.be_device);
  VAR_5 += VAR_6;
  if (VAR_4 > VAR_6 << VAR_0)
   VAR_4 -= VAR_6 << VAR_0;
  else
   VAR_4 = 0;
 }
}

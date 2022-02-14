
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs4_filelayout_segment {scalar_t__ stripe_type; } ;


 struct nfs4_filelayout_segment* FUNC_0 (struct pnfs_layout_segment*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pnfs_layout_segment*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct pnfs_layout_segment *VAR_1, u32 VAR_2)
{
 struct nfs4_filelayout_segment *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->stripe_type == VAR_0)
  return VAR_2;
 else
  return FUNC_1(VAR_1, VAR_2);
}

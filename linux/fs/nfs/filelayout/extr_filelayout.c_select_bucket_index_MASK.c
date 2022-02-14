
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_filelayout_segment {scalar_t__ stripe_type; int generic_hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static u32 FUNC_1(struct nfs4_filelayout_segment *VAR_1, u32 VAR_2)
{
 if (VAR_1->stripe_type == VAR_0)
  return FUNC_0(&VAR_1->generic_hdr, VAR_2);
 else
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pgt_info {int num_of_ptes; } ;
struct hl_ctx {int dummy; } ;


 int FUNC_0 (struct hl_ctx*,int ) ;
 struct pgt_info* FUNC_1 (struct hl_ctx*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct hl_ctx *VAR_0, u64 VAR_1)
{
 struct pgt_info *VAR_2 = FUNC_1(VAR_0, VAR_1);
 int VAR_3;

 VAR_2->num_of_ptes--;





 VAR_3 = VAR_2->num_of_ptes;
 if (!VAR_3)
  FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}

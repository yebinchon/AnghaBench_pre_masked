
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int dummy; } ;
struct nfp_dump_tl {scalar_t__ type; int length; int data; } ;
struct nfp_dump_state {scalar_t__ requested_level; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfp_pf*,int ,int ,struct nfp_dump_state*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfp_pf *VAR_1, struct nfp_dump_tl *VAR_2,
   void *VAR_3)
{
 struct nfp_dump_state *VAR_4 = VAR_3;

 if (VAR_2->type != VAR_4->requested_level)
  return 0;

 return FUNC_1(VAR_1, VAR_2->data,
     FUNC_0(VAR_2->length), VAR_4,
     VAR_0);
}

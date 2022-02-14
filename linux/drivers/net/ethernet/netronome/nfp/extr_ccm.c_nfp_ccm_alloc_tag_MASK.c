
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_ccm {int tag_alloc_next; int tag_allocator; int app; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nfp_ccm*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nfp_ccm *VAR_1)
{




 if (FUNC_4(FUNC_3(VAR_1))) {
  FUNC_2(VAR_1->app, "all FW request contexts busy!\n");
  return -VAR_0;
 }

 FUNC_0(FUNC_1(VAR_1->tag_alloc_next, VAR_1->tag_allocator));
 return VAR_1->tag_alloc_next++;
}

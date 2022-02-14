
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bm_rcr {int ithresh; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bm_portal*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bm_portal *VAR_1, u8 VAR_2)
{
 struct bm_rcr *VAR_3 = &VAR_1->rcr;

 VAR_3->ithresh = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bm_rcr {int ci; scalar_t__ cmode; int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bm_portal*,int ) ;
 int FUNC_2 (struct bm_portal*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static u8 FUNC_4(struct bm_portal *VAR_3)
{
 struct bm_rcr *VAR_4 = &VAR_3->rcr;
 u8 VAR_5, VAR_6 = VAR_4->ci;

 FUNC_0(VAR_4->cmode == VAR_2);
 VAR_4->ci = FUNC_1(VAR_3, VAR_0) & (VAR_1 - 1);
 FUNC_2(VAR_3, VAR_0);
 VAR_5 = FUNC_3(VAR_1, VAR_6, VAR_4->ci);
 VAR_4->available += VAR_5;
 return VAR_5;
}

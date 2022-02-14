
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bm_rcr_entry {int _ncw_verb; } ;
struct bm_rcr {int busy; scalar_t__ pmode; int available; int vbit; struct bm_rcr_entry* cursor; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct bm_rcr_entry*) ;
 int FUNC_3 (struct bm_rcr*) ;

__attribute__((used)) static inline void FUNC_4(struct bm_portal *VAR_1, u8 VAR_2)
{
 struct bm_rcr *VAR_3 = &VAR_1->rcr;
 struct bm_rcr_entry *VAR_4;

 FUNC_0(VAR_3->busy);
 FUNC_0(VAR_3->pmode == VAR_0);
 FUNC_0(VAR_3->available >= 1);
 FUNC_1();
 VAR_4 = VAR_3->cursor;
 VAR_4->_ncw_verb = VAR_2 | VAR_3->vbit;
 FUNC_2(VAR_4);
 FUNC_3(VAR_3);
 VAR_3->available--;



}

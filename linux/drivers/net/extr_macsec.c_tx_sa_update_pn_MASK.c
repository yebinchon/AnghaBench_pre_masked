
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct macsec_tx_sa {scalar_t__ next_pn; int active; int lock; } ;
struct macsec_secy {int operational; scalar_t__ protect_frames; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct macsec_tx_sa *VAR_0, struct macsec_secy *VAR_1)
{
 u32 VAR_2;

 FUNC_1(&VAR_0->lock);
 VAR_2 = VAR_0->next_pn;

 VAR_0->next_pn++;
 if (VAR_0->next_pn == 0) {
  FUNC_0("PN wrapped, transitioning to !oper\n");
  VAR_0->active = 0;
  if (VAR_1->protect_frames)
   VAR_1->operational = 0;
 }
 FUNC_2(&VAR_0->lock);

 return VAR_2;
}

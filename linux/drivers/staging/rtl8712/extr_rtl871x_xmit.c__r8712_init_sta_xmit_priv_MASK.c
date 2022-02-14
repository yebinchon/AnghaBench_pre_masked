
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_xmit_priv {int apsd; int legacy_dz; int vo_q; int vi_q; int bk_q; int be_q; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sta_xmit_priv *VAR_0)
{
 FUNC_2((unsigned char *)VAR_0, 0,
   sizeof(struct sta_xmit_priv));
 FUNC_3(&VAR_0->lock);
 FUNC_1(&VAR_0->be_q);
 FUNC_1(&VAR_0->bk_q);
 FUNC_1(&VAR_0->vi_q);
 FUNC_1(&VAR_0->vo_q);
 FUNC_0(&VAR_0->legacy_dz);
 FUNC_0(&VAR_0->apsd);
}

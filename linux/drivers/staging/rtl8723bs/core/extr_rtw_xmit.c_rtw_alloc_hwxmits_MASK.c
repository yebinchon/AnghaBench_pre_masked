
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int hwxmit_entry; int bk_pending; int be_pending; int vi_pending; int vo_pending; int bm_pending; struct hw_xmit* hwxmits; } ;
struct hw_xmit {int * sta_queue; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hw_xmit* FUNC_0 (int) ;

s32 FUNC_1(struct adapter *VAR_3)
{
 struct hw_xmit *VAR_4;
 struct xmit_priv *VAR_5 = &VAR_3->xmitpriv;

 VAR_5->hwxmit_entry = VAR_0;

 VAR_5->hwxmits = ((void*)0);

 VAR_5->hwxmits = FUNC_0(sizeof(struct hw_xmit) * VAR_5->hwxmit_entry);

 if (!VAR_5->hwxmits)
  return VAR_1;

 VAR_4 = VAR_5->hwxmits;

 if (VAR_5->hwxmit_entry == 5) {


  VAR_4[0] .sta_queue = &VAR_5->bm_pending;



  VAR_4[1] .sta_queue = &VAR_5->vo_pending;



  VAR_4[2] .sta_queue = &VAR_5->vi_pending;



  VAR_4[3] .sta_queue = &VAR_5->bk_pending;



  VAR_4[4] .sta_queue = &VAR_5->be_pending;

 } else if (VAR_5->hwxmit_entry == 4) {



  VAR_4[0] .sta_queue = &VAR_5->vo_pending;



  VAR_4[1] .sta_queue = &VAR_5->vi_pending;



  VAR_4[2] .sta_queue = &VAR_5->be_pending;



  VAR_4[3] .sta_queue = &VAR_5->bk_pending;
 } else {

 }

 return VAR_2;
}

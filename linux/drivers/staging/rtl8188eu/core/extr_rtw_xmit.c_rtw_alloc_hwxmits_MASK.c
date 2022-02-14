
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int bk_pending; int be_pending; int vi_pending; int vo_pending; struct hw_xmit* hwxmits; int hwxmit_entry; } ;
struct hw_xmit {int * sta_queue; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hw_xmit* FUNC_0 (int ,int,int ) ;

s32 FUNC_1(struct adapter *VAR_4)
{
 struct hw_xmit *VAR_5;
 struct xmit_priv *VAR_6 = &VAR_4->xmitpriv;

 VAR_6->hwxmit_entry = VAR_1;

 VAR_6->hwxmits = FUNC_0(VAR_6->hwxmit_entry,
         sizeof(struct hw_xmit), VAR_0);
 if (!VAR_6->hwxmits)
  return VAR_2;

 VAR_5 = VAR_6->hwxmits;

 VAR_5[0] .sta_queue = &VAR_6->vo_pending;
 VAR_5[1] .sta_queue = &VAR_6->vi_pending;
 VAR_5[2] .sta_queue = &VAR_6->be_pending;
 VAR_5[3] .sta_queue = &VAR_6->bk_pending;
 return VAR_3;
}

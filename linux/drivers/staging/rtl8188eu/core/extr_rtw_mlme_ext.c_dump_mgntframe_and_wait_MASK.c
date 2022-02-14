
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {struct xmit_buf* pxmitbuf; } ;
struct xmit_buf {struct submit_ctx* sctx; } ;
struct submit_ctx {int dummy; } ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter*,struct xmit_frame*) ;
 int FUNC_1 (struct submit_ctx*,int) ;
 scalar_t__ FUNC_2 (struct submit_ctx*) ;

__attribute__((used)) static s32 FUNC_3(struct adapter *VAR_2,
       struct xmit_frame *VAR_3,
       int VAR_4)
{
 s32 VAR_5 = VAR_0;
 struct xmit_buf *VAR_6 = VAR_3->pxmitbuf;
 struct submit_ctx VAR_7;

 if (VAR_2->bSurpriseRemoved || VAR_2->bDriverStopped)
  return VAR_5;

 FUNC_1(&VAR_7, VAR_4);
 VAR_6->sctx = &VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_2(&VAR_7);

 return VAR_5;
}

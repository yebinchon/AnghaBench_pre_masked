
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int dummy; } ;
struct adapter {scalar_t__ bDriverStopped; scalar_t__ bSurpriseRemoved; } ;


 int FUNC_0 (struct adapter*,struct xmit_frame*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0,
      struct xmit_frame *VAR_1)
{
 if (VAR_0->bSurpriseRemoved || VAR_0->bDriverStopped)
  return;

 FUNC_0(VAR_0, VAR_1);
}

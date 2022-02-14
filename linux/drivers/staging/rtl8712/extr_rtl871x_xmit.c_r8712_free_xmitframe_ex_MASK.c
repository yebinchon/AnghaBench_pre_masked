
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int dummy; } ;
struct xmit_frame {scalar_t__ frame_tag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xmit_priv*,struct xmit_frame*) ;

void FUNC_1(struct xmit_priv *VAR_1,
        struct xmit_frame *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->frame_tag == VAR_0)
  FUNC_0(VAR_1, VAR_2);
}

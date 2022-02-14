
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct xmit_priv {int vcs_setting; void* vcs; } ;
struct registry_priv {void* vcs_type; } ;
struct adapter {struct registry_priv registrypriv; struct xmit_priv xmitpriv; } ;
typedef int sint ;



 int FUNC_0 (int) ;
 void* VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int* FUNC_1 (int*,int ,int *,int) ;

void FUNC_2(struct adapter *VAR_4, u8 *VAR_5, uint VAR_6)
{

 uint VAR_7;
 u8 *VAR_8;
 sint VAR_9;
 struct xmit_priv *VAR_10 = &VAR_4->xmitpriv;
 struct registry_priv *VAR_11 = &VAR_4->registrypriv;

 switch (VAR_10->vcs_setting) {
 case 129:
  VAR_10->vcs = VAR_1;
  break;

 case 128:
  break;

 case 130:
 default:
  VAR_8 = FUNC_1(VAR_5, VAR_3, &VAR_9, VAR_6);
  if (!VAR_8)
   VAR_10->vcs = VAR_1;
  else {
   VAR_7 = (*(VAR_8 + 2)) & FUNC_0(1);
   if (VAR_7) {
    if (VAR_11->vcs_type == VAR_2)
     VAR_10->vcs = VAR_2;
    else
     VAR_10->vcs = VAR_0;
   } else
    VAR_10->vcs = VAR_1;
  }

  break;

 }
}

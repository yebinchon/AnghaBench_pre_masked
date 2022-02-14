
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union Keytype {int skey; } ;
struct TYPE_7__ {int idx; int key_len; int * key; } ;
struct TYPE_8__ {TYPE_1__ crypt; } ;
struct ieee_param {TYPE_2__ u; } ;
struct TYPE_11__ {int dhcp_timer; } ;
struct TYPE_10__ {scalar_t__ pwr_mode; } ;
struct TYPE_9__ {scalar_t__ power_mgnt; } ;
struct TYPE_12__ {int binstallGrpkey; union Keytype* XGrprxmickey; union Keytype* XGrptxmickey; union Keytype* XGrpKey; } ;
struct _adapter {TYPE_5__ mlmepriv; TYPE_4__ pwrctrlpriv; TYPE_3__ registrypriv; TYPE_6__ securitypriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct _adapter*,TYPE_6__*,int) ;

__attribute__((used)) static inline void FUNC_4(struct ieee_param *VAR_2,
        struct _adapter *VAR_3)
{
 union Keytype *VAR_4 = VAR_3->securitypriv.XGrpKey;
 union Keytype *VAR_5 = VAR_3->securitypriv.XGrptxmickey;
 union Keytype *VAR_6 = VAR_3->securitypriv.XGrprxmickey;

 if (VAR_2->u.crypt.idx > 0 &&
     VAR_2->u.crypt.idx < 3) {

  FUNC_0(VAR_4[VAR_2->u.crypt.idx - 1].skey,
         VAR_2->u.crypt.key,
         (VAR_2->u.crypt.key_len > 16 ? 16 :
   VAR_2->u.crypt.key_len));
  FUNC_0(VAR_5[VAR_2->u.crypt.idx - 1].skey,
         &VAR_2->u.crypt.key[16], 8);
  FUNC_0(VAR_6[VAR_2->u.crypt.idx - 1].skey,
         &VAR_2->u.crypt.key[24], 8);
  VAR_3->securitypriv.binstallGrpkey = 1;
  FUNC_3(VAR_3, &VAR_3->securitypriv,
   VAR_2->u.crypt.idx);
  if (VAR_3->registrypriv.power_mgnt > VAR_0) {
   if (VAR_3->registrypriv.power_mgnt !=
       VAR_3->pwrctrlpriv.pwr_mode)
    FUNC_1(&VAR_3->mlmepriv.dhcp_timer,
       VAR_1 + FUNC_2(60000));
  }
 }
}

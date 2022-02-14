
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ssb_sprom {int il0mac; int et1mac; } ;
struct brcms_hardware {int _nbands; TYPE_2__* d11core; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {struct ssb_sprom sprom; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_1, u8 VAR_2[VAR_0])
{
 struct ssb_sprom *VAR_3 = &VAR_1->d11core->bus->sprom;


 if (!FUNC_0(VAR_3->il0mac)) {
  FUNC_1(VAR_2, VAR_3->il0mac, VAR_0);
  return;
 }

 if (VAR_1->_nbands > 1)
  FUNC_1(VAR_2, VAR_3->et1mac, VAR_0);
 else
  FUNC_1(VAR_2, VAR_3->il0mac, VAR_0);
}

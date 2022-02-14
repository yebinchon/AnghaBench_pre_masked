
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bswenc; int encrypt; int ra; } ;
struct xmit_frame {int pkt; TYPE_3__ attrib; } ;
struct TYPE_4__ {int (* mgnt_xmit ) (struct adapter*,struct xmit_frame*) ;} ;
struct TYPE_5__ {int binstallBIPkey; } ;
struct adapter {TYPE_1__ HalFunc; TYPE_2__ securitypriv; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ,struct xmit_frame*) ;
 int FUNC_2 (struct adapter*,struct xmit_frame*) ;
 int FUNC_3 (struct adapter*,struct xmit_frame*) ;

s32 FUNC_4(struct adapter *VAR_3, struct xmit_frame *VAR_4)
{
 s32 VAR_5 = VAR_2;
 FUNC_3(VAR_3, VAR_4);




 if (VAR_3->securitypriv.binstallBIPkey == 1) {
  if (FUNC_0(VAR_4->attrib.ra)) {
   VAR_4->attrib.encrypt = VAR_1;

  } else {
   VAR_4->attrib.encrypt = VAR_0;
   VAR_4->attrib.bswenc = 1;
  }
  FUNC_1(VAR_3, VAR_4->pkt, VAR_4);
 }

 if (VAR_3->HalFunc.mgnt_xmit)
  VAR_5 = VAR_3->HalFunc.mgnt_xmit(VAR_3, VAR_4);
 return VAR_5;
}

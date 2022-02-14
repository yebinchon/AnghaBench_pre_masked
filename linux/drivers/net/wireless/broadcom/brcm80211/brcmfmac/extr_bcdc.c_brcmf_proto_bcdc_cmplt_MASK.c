
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pub {int bus_if; TYPE_1__* proto; } ;
struct brcmf_proto_bcdc_dcmd {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct brcmf_bcdc {TYPE_2__ msg; } ;
struct TYPE_3__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct brcmf_pub *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 struct brcmf_bcdc *VAR_5 = (struct brcmf_bcdc *)VAR_1->proto->pd;

 FUNC_2(VAR_0, "Enter\n");
 VAR_3 += sizeof(struct brcmf_proto_bcdc_dcmd);
 do {
  VAR_4 = FUNC_1(VAR_1->bus_if, (unsigned char *)&VAR_5->msg,
          VAR_3);
  if (VAR_4 < 0)
   break;
 } while (FUNC_0(FUNC_3(VAR_5->msg.flags)) != VAR_2);

 return VAR_4;
}

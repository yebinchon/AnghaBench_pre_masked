
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct brcmf_pub {int bus_if; TYPE_1__* proto; } ;
struct brcmf_proto_bcdc_dcmd {void* flags; void* len; void* cmd; } ;
struct brcmf_bcdc {int reqid; struct brcmf_proto_bcdc_dcmd msg; int buf; } ;
struct TYPE_2__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (struct brcmf_proto_bcdc_dcmd*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct brcmf_pub *VAR_6, int VAR_7, uint VAR_8, void *VAR_9,
       uint VAR_10, bool VAR_11)
{
 struct brcmf_bcdc *VAR_12 = (struct brcmf_bcdc *)VAR_6->proto->pd;
 struct brcmf_proto_bcdc_dcmd *VAR_13 = &VAR_12->msg;
 u32 VAR_14;

 FUNC_1(VAR_0, "Enter\n");

 FUNC_4(VAR_13, 0, sizeof(struct brcmf_proto_bcdc_dcmd));

 VAR_13->cmd = FUNC_2(VAR_8);
 VAR_13->len = FUNC_2(VAR_10);
 VAR_14 = (++VAR_12->reqid << VAR_1);
 if (VAR_11)
  VAR_14 |= VAR_4;
 VAR_14 = (VAR_14 & ~VAR_2) |
  (VAR_7 << VAR_3);
 VAR_13->flags = FUNC_2(VAR_14);

 if (VAR_9)
  FUNC_3(VAR_12->buf, VAR_9, VAR_10);

 VAR_10 += sizeof(*VAR_13);
 if (VAR_10 > VAR_5)
  VAR_10 = VAR_5;


 return FUNC_0(VAR_6->bus_if, (unsigned char *)&VAR_12->msg, VAR_10);
}

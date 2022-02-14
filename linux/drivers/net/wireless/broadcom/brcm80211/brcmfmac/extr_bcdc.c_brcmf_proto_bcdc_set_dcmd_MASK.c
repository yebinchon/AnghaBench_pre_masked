
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_proto_bcdc_dcmd {int status; int flags; } ;
struct brcmf_bcdc {int reqid; struct brcmf_proto_bcdc_dcmd msg; } ;
struct TYPE_2__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*,int ,int,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct brcmf_pub*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct brcmf_pub*,int,int ) ;
 int FUNC_5 (struct brcmf_pub*,int,int ,void*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct brcmf_pub *VAR_5, int VAR_6, uint VAR_7,
     void *VAR_8, uint VAR_9, int *VAR_10)
{
 struct brcmf_bcdc *VAR_11 = (struct brcmf_bcdc *)VAR_5->proto->pd;
 struct brcmf_proto_bcdc_dcmd *VAR_12 = &VAR_11->msg;
 int VAR_13;
 u32 VAR_14, VAR_15;

 FUNC_1(VAR_0, "Enter, cmd %d len %d\n", VAR_7, VAR_9);

 *VAR_10 = 0;
 VAR_13 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, 1);
 if (VAR_13 < 0)
  goto done;

 VAR_13 = FUNC_4(VAR_5, VAR_11->reqid, VAR_9);
 if (VAR_13 < 0)
  goto done;

 VAR_14 = FUNC_6(VAR_12->flags);
 VAR_15 = (VAR_14 & VAR_2) >> VAR_3;

 if (VAR_15 != VAR_11->reqid) {
  FUNC_0(VAR_5, "%s: unexpected request id %d (expected %d)\n",
    FUNC_3(FUNC_2(VAR_5, VAR_6)), VAR_15,
    VAR_11->reqid);
  VAR_13 = -VAR_4;
  goto done;
 }

 VAR_13 = 0;


 if (VAR_14 & VAR_1)
  *VAR_10 = FUNC_6(VAR_12->status);

done:
 return VAR_13;
}

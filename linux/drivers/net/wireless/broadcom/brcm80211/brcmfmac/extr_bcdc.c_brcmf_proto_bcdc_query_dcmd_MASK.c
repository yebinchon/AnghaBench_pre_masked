
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_proto_bcdc_dcmd {int status; int flags; } ;
struct brcmf_bcdc {int reqid; int * buf; struct brcmf_proto_bcdc_dcmd msg; } ;
struct TYPE_2__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*,int,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct brcmf_pub*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct brcmf_pub*,int,int) ;
 int FUNC_5 (struct brcmf_pub*,int,int,void*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,void*,int) ;

__attribute__((used)) static int
FUNC_8(struct brcmf_pub *VAR_6, int VAR_7, uint VAR_8,
       void *VAR_9, uint VAR_10, int *VAR_11)
{
 struct brcmf_bcdc *VAR_12 = (struct brcmf_bcdc *)VAR_6->proto->pd;
 struct brcmf_proto_bcdc_dcmd *VAR_13 = &VAR_12->msg;
 void *VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17, VAR_18;

 FUNC_1(VAR_0, "Enter, cmd %d len %d\n", VAR_8, VAR_10);

 *VAR_11 = 0;
 VAR_15 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, 0);
 if (VAR_15 < 0) {
  FUNC_0(VAR_6, "brcmf_proto_bcdc_msg failed w/status %d\n",
    VAR_15);
  goto done;
 }

retry:

 VAR_15 = FUNC_4(VAR_6, VAR_12->reqid, VAR_10);
 if (VAR_15 < 0)
  goto done;

 VAR_18 = FUNC_6(VAR_13->flags);
 VAR_17 = (VAR_18 & VAR_2) >> VAR_3;

 if ((VAR_17 < VAR_12->reqid) && (++VAR_16 < VAR_5))
  goto retry;
 if (VAR_17 != VAR_12->reqid) {
  FUNC_0(VAR_6, "%s: unexpected request id %d (expected %d)\n",
    FUNC_3(FUNC_2(VAR_6, VAR_7)), VAR_17,
    VAR_12->reqid);
  VAR_15 = -VAR_4;
  goto done;
 }


 VAR_14 = (void *)&VAR_12->buf[0];


 if (VAR_9) {
  if (VAR_15 < (int)VAR_10)
   VAR_10 = VAR_15;
  FUNC_7(VAR_9, VAR_14, VAR_10);
 }

 VAR_15 = 0;


 if (VAR_18 & VAR_1)
  *VAR_11 = FUNC_6(VAR_13->status);
done:
 return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qtnf_pearl_fw_hdr {int dummy; } ;
struct TYPE_3__ {int pdev; } ;
struct qtnf_pcie_pearl_state {TYPE_2__* bda; TYPE_1__ base; } ;
struct TYPE_4__ {int bda_ep_state; int bda_rc_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int,int,int const*,int const*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct qtnf_pcie_pearl_state*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct qtnf_pcie_pearl_state *VAR_7, const u8 *VAR_8, u32 VAR_9)
{
 int VAR_10 = VAR_4 - sizeof(struct qtnf_pearl_fw_hdr);
 int VAR_11 = VAR_9 / VAR_10 + ((VAR_9 % VAR_10) ? 1 : 0);
 const u8 *VAR_12 = VAR_8;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;

 FUNC_0("FW upload started: fw_addr=0x%p size=%d\n", VAR_8, VAR_9);

 while (VAR_14 < VAR_11) {
  if (++VAR_13 > 10000) {
   FUNC_1("FW upload failed: too many retries\n");
   return -VAR_0;
  }

  VAR_15 = FUNC_4(VAR_7->base.pdev, VAR_9, VAR_14, VAR_12, VAR_8);
  if (VAR_15 <= 0)
   continue;

  if (!((VAR_14 + 1) & VAR_5) ||
      (VAR_14 == (VAR_11 - 1))) {
   FUNC_8(&VAR_7->bda->bda_rc_state,
           VAR_6);
   if (FUNC_7(&VAR_7->bda->bda_ep_state,
         VAR_2,
         VAR_3)) {
    FUNC_1("FW upload failed: SYNC timed out\n");
    return -VAR_0;
   }

   FUNC_3(&VAR_7->bda->bda_ep_state,
      VAR_2);

   if (FUNC_5(&VAR_7->bda->bda_ep_state,
       VAR_1)) {
    if (VAR_14 == (VAR_11 - 1)) {
     int VAR_16 =
      VAR_11 & VAR_5;
     VAR_14 -= VAR_16;
     VAR_12 -= ((VAR_16 - 1) *
      VAR_10 + VAR_15);
    } else {
     VAR_14 -= VAR_5;
     VAR_12 -= VAR_5 * VAR_10;
    }

    FUNC_3(&VAR_7->bda->bda_ep_state,
       VAR_1);

    FUNC_2("FW upload retry: block #%d\n", VAR_14);
    continue;
   }

   FUNC_6(VAR_7);
  }

  VAR_12 += VAR_15;
  VAR_14++;
 }

 FUNC_0("FW upload completed: totally sent %d blocks\n", VAR_14);
 return 0;
}

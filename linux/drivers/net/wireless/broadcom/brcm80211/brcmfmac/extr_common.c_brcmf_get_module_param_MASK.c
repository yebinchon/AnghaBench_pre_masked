
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct TYPE_6__ {int sdio; } ;
struct brcmfmac_pd_device {int bus_type; scalar_t__ id; scalar_t__ rev; TYPE_2__ bus; int country_codes; } ;
struct TYPE_7__ {int txglomsz; } ;
struct TYPE_5__ {TYPE_3__ sdio; } ;
struct brcmf_mp_device {int p2p_enable; int roamoff; int iapp; int ignore_probe_fail; TYPE_1__ bus; int country_codes; int fcmode; int feature_disable; } ;
typedef enum brcmf_bus_type { ____Placeholder_brcmf_bus_type } brcmf_bus_type ;
struct TYPE_8__ {int device_count; struct brcmfmac_pd_device* devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_mp_device*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,int,struct brcmf_mp_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 struct brcmf_mp_device* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;

struct brcmf_mp_device *FUNC_5(struct device *VAR_11,
            enum brcmf_bus_type VAR_12,
            u32 VAR_13, u32 VAR_14)
{
 struct brcmf_mp_device *VAR_15;
 struct brcmfmac_pd_device *VAR_16;
 bool VAR_17;
 int VAR_18;

 FUNC_0(VAR_2, "Enter, bus=%d, chip=%d, rev=%d\n", VAR_12, VAR_13,
    VAR_14);
 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return ((void*)0);


 VAR_15->p2p_enable = !!VAR_7;
 VAR_15->feature_disable = VAR_4;
 VAR_15->fcmode = VAR_3;
 VAR_15->roamoff = !!VAR_8;
 VAR_15->iapp = !!VAR_5;




 if (VAR_12 == VAR_0)
  VAR_15->bus.sdio.txglomsz = VAR_9;


 VAR_17 = 0;
 if (VAR_10) {
  for (VAR_18 = 0; VAR_18 < VAR_10->device_count; VAR_18++) {
   VAR_16 = &VAR_10->devices[VAR_18];
   if ((VAR_16->bus_type == VAR_12) &&
       (VAR_16->id == VAR_13) &&
       ((VAR_16->rev == VAR_14) ||
        (VAR_16->rev == -1))) {
    FUNC_0(VAR_2, "Platform data for device found\n");
    VAR_15->country_codes =
      VAR_16->country_codes;
    if (VAR_16->bus_type == VAR_0)
     FUNC_4(&VAR_15->bus.sdio,
            &VAR_16->bus.sdio,
            sizeof(VAR_15->bus.sdio));
    VAR_17 = 1;
    break;
   }
  }
 }
 if (!VAR_17) {

  FUNC_1(VAR_15, VAR_13, VAR_14);
  FUNC_2(VAR_11, VAR_12, VAR_15);
 }
 return VAR_15;
}

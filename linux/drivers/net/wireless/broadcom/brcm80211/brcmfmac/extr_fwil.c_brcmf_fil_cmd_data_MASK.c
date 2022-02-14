
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pub {TYPE_1__* bus_if; } ;
struct brcmf_if {scalar_t__ fwil_fwerr; int ifidx; struct brcmf_pub* drvr; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct brcmf_pub*,int ,int ,void*,int ,int*) ;
 int FUNC_4 (struct brcmf_pub*,int ,int ,void*,int ,int*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static s32
FUNC_6(struct brcmf_if *VAR_6, u32 VAR_7, void *VAR_8, u32 VAR_9, bool VAR_10)
{
 struct brcmf_pub *VAR_11 = VAR_6->drvr;
 s32 VAR_12, VAR_13;

 if (VAR_11->bus_if->state != VAR_0) {
  FUNC_0(VAR_11, "bus is down. we have nothing to do.\n");
  return -VAR_3;
 }

 if (VAR_8 != ((void*)0))
  VAR_9 = FUNC_5(VAR_5, VAR_9, VAR_1);
 if (VAR_10)
  VAR_12 = FUNC_4(VAR_11, VAR_6->ifidx, VAR_7,
        VAR_8, VAR_9, &VAR_13);
 else
  VAR_12 = FUNC_3(VAR_11, VAR_6->ifidx, VAR_7,
          VAR_8, VAR_9, &VAR_13);

 if (VAR_12) {
  FUNC_1(VAR_4, "Failed: error=%d\n", VAR_12);
 } else if (VAR_13 < 0) {
  FUNC_1(VAR_4, "Firmware error: %s (%d)\n",
     FUNC_2((u32)(-VAR_13)), VAR_13);
  VAR_12 = -VAR_2;
 }
 if (VAR_6->fwil_fwerr)
  return VAR_13;

 return VAR_12;
}

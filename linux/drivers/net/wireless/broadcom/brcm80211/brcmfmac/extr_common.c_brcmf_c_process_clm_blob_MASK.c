
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct brcmf_pub {struct brcmf_bus* bus_if; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_dload_data_le {int data; } ;
struct brcmf_bus {int dev; } ;
typedef int s32 ;
typedef int clm_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*,int,...) ;
 int FUNC_1 (struct brcmf_bus*,char*,int *) ;
 int FUNC_2 (struct brcmf_if*,int ,struct brcmf_dload_data_le*,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct brcmf_if*,char*,scalar_t__*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct firmware const**,int *,int ) ;
 int FUNC_7 (struct brcmf_dload_data_le*) ;
 struct brcmf_dload_data_le* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (struct firmware const*) ;

__attribute__((used)) static int FUNC_12(struct brcmf_if *VAR_9)
{
 struct brcmf_pub *VAR_10 = VAR_9->drvr;
 struct brcmf_bus *VAR_11 = VAR_10->bus_if;
 struct brcmf_dload_data_le *VAR_12;
 const struct firmware *VAR_13 = ((void*)0);
 u8 VAR_14[VAR_0];
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u16 VAR_18 = VAR_1;
 u32 VAR_19;
 s32 VAR_20;

 FUNC_3(VAR_8, "Enter\n");

 FUNC_10(VAR_14, 0, sizeof(VAR_14));
 VAR_20 = FUNC_1(VAR_11, ".clm_blob", VAR_14);
 if (VAR_20) {
  FUNC_0(VAR_10, "get CLM blob file name failed (%d)\n", VAR_20);
  return VAR_20;
 }

 VAR_20 = FUNC_6(&VAR_13, VAR_14, VAR_11->dev);
 if (VAR_20) {
  FUNC_5("no clm_blob available (err=%d), device may have limited channels available\n",
      VAR_20);
  return 0;
 }

 VAR_12 = FUNC_8(sizeof(*VAR_12) + VAR_7 - 1, VAR_5);
 if (!VAR_12) {
  VAR_20 = -VAR_4;
  goto done;
 }

 VAR_16 = VAR_13->size;
 VAR_17 = 0;
 do {
  if (VAR_16 > VAR_7) {
   VAR_15 = VAR_7;
  } else {
   VAR_15 = VAR_16;
   VAR_18 |= VAR_2;
  }
  FUNC_9(VAR_12->data, VAR_13->data + VAR_17, VAR_15);

  VAR_20 = FUNC_2(VAR_9, VAR_18, VAR_12, VAR_15);

  VAR_18 &= ~VAR_1;

  VAR_17 += VAR_15;
  VAR_16 -= VAR_15;
 } while ((VAR_16 > 0) && (VAR_20 == 0));

 if (VAR_20) {
  FUNC_0(VAR_10, "clmload (%zu byte file) failed (%d)\n",
    VAR_13->size, VAR_20);

  VAR_20 = FUNC_4(VAR_9, "clmload_status", &VAR_19);
  if (VAR_20)
   FUNC_0(VAR_10, "get clmload_status failed (%d)\n", VAR_20);
  else
   FUNC_3(VAR_6, "clmload_status=%d\n", VAR_19);
  VAR_20 = -VAR_3;
 }

 FUNC_7(VAR_12);
done:
 FUNC_11(VAR_13);
 return VAR_20;
}

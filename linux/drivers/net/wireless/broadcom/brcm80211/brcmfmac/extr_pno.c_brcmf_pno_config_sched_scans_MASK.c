
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_pno_info {int dummy; } ;
struct brcmf_pno_config_le {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_gscan_config {int count_of_channel_buckets; int * bucket; int flags; int buffer_threshold; int retry_threshold; int version; } ;
struct brcmf_gscan_bucket_config {int count_of_channel_buckets; int * bucket; int flags; int buffer_threshold; int retry_threshold; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,struct brcmf_gscan_config*,size_t) ;
 int FUNC_2 (struct brcmf_if*,char*,int) ;
 int FUNC_3 (struct brcmf_if*,struct brcmf_pno_config_le*) ;
 int FUNC_4 (struct brcmf_if*) ;
 int FUNC_5 (struct brcmf_if*,int ,int ,int ) ;
 int FUNC_6 (struct brcmf_if*,struct brcmf_pno_info*) ;
 int FUNC_7 (struct brcmf_pno_info*,struct brcmf_pno_config_le*,struct brcmf_gscan_config**,int *) ;
 int FUNC_8 (struct brcmf_if*,struct brcmf_pno_info*) ;
 int FUNC_9 (int ) ;
 struct brcmf_pno_info* FUNC_10 (struct brcmf_if*) ;
 int FUNC_11 (struct brcmf_gscan_config*) ;
 struct brcmf_gscan_config* FUNC_12 (size_t,int ) ;
 int FUNC_13 (int *,struct brcmf_gscan_config*,int) ;

__attribute__((used)) static int FUNC_14(struct brcmf_if *VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_6->drvr;
 struct brcmf_pno_info *VAR_8;
 struct brcmf_gscan_config *VAR_9;
 struct brcmf_gscan_bucket_config *VAR_10;
 struct brcmf_pno_config_le VAR_11;
 size_t VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15;

 VAR_8 = FUNC_10(VAR_6);
 VAR_15 = FUNC_7(VAR_8, &VAR_11, &VAR_10,
         &VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12 = sizeof(*VAR_9) + (VAR_15 - 1) * sizeof(*VAR_10);
 VAR_9 = FUNC_12(VAR_12, VAR_3);
 if (!VAR_9) {
  VAR_14 = -VAR_2;
  goto free_buckets;
 }


 VAR_14 = FUNC_4(VAR_6);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "failed error=%d\n", VAR_14);
  goto free_gscan;
 }


 VAR_14 = FUNC_5(VAR_6, VAR_13, 0, 0);
 if (VAR_14 < 0)
  goto free_gscan;

 VAR_14 = FUNC_3(VAR_6, &VAR_11);
 if (VAR_14 < 0)
  goto clean;

 VAR_9->version = FUNC_9(VAR_1);
 VAR_9->retry_threshold = VAR_5;
 VAR_9->buffer_threshold = VAR_4;
 VAR_9->flags = VAR_0;

 VAR_9->count_of_channel_buckets = VAR_15;
 FUNC_13(&VAR_9->bucket[0], VAR_10,
        VAR_15 * sizeof(*VAR_10));

 VAR_14 = FUNC_1(VAR_6, "pfn_gscan_cfg", VAR_9, VAR_12);

 if (VAR_14 < 0)
  goto clean;


 VAR_14 = FUNC_8(VAR_6, VAR_8);
 if (VAR_14 < 0)
  goto clean;

 VAR_14 = FUNC_6(VAR_6, VAR_8);
 if (VAR_14 < 0)
  goto clean;


 VAR_14 = FUNC_2(VAR_6, "pfn", 1);

clean:
 if (VAR_14 < 0)
  FUNC_4(VAR_6);
free_gscan:
 FUNC_11(VAR_9);
free_buckets:
 FUNC_11(VAR_10);
 return VAR_14;
}

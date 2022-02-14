
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {int version; } ;
struct be_cmd_req_rss_config {int hash; int cpu_table; TYPE_1__ hdr; void* cpu_table_size_log2; void* enable_rss; int if_id; } ;
struct be_adapter {int mcc_lock; int if_handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 struct be_cmd_req_rss_config* FUNC_7 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int const*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct be_mcc_wrb* FUNC_12 (struct be_adapter*) ;

int FUNC_13(struct be_adapter *VAR_5, u8 *VAR_6,
        u32 VAR_7, u16 VAR_8, const u8 *VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_rss_config *VAR_11;
 int VAR_12;

 if (!(FUNC_2(VAR_5) & VAR_0))
  return 0;

 FUNC_10(&VAR_5->mcc_lock);

 VAR_10 = FUNC_12(VAR_5);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  goto err;
 }
 VAR_11 = FUNC_7(VAR_10);

 FUNC_4(&VAR_11->hdr, VAR_1,
          VAR_3, sizeof(*VAR_11), VAR_10, ((void*)0));

 VAR_11->if_id = FUNC_6(VAR_5->if_handle);
 VAR_11->enable_rss = FUNC_5(VAR_7);
 VAR_11->cpu_table_size_log2 = FUNC_5(FUNC_8(VAR_8) - 1);

 if (!FUNC_0(VAR_5))
  VAR_11->hdr.version = 1;

 FUNC_9(VAR_11->cpu_table, VAR_6, VAR_8);
 FUNC_9(VAR_11->hash, VAR_9, VAR_4);
 FUNC_1(VAR_11->hash, sizeof(VAR_11->hash));

 VAR_12 = FUNC_3(VAR_5);
err:
 FUNC_11(&VAR_5->mcc_lock);
 return VAR_12;
}

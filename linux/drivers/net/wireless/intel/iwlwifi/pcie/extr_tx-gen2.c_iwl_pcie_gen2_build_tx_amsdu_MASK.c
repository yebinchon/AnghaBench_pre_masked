
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct iwl_txq {int * first_tb_bufs; int write_ptr; } ;
struct iwl_trans {int dev; } ;
struct iwl_tfh_tfd {int dummy; } ;
struct iwl_device_cmd {int hdr; } ;
struct iwl_cmd_meta {int dummy; } ;
struct iwl_cmd_header {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct iwl_trans*,struct sk_buff*,struct iwl_tfh_tfd*,int,int,struct iwl_device_cmd*) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_tfh_tfd*,int ,int) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_cmd_meta*,struct iwl_tfh_tfd*) ;
 int FUNC_5 (struct iwl_txq*,int ) ;
 int FUNC_6 (struct iwl_txq*,int) ;
 struct iwl_tfh_tfd* FUNC_7 (struct iwl_trans*,struct iwl_txq*,int) ;
 int FUNC_8 (int *,struct iwl_device_cmd*,int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static struct
iwl_tfh_tfd *FUNC_10(struct iwl_trans *VAR_2,
       struct iwl_txq *VAR_3,
       struct iwl_device_cmd *VAR_4,
       struct sk_buff *VAR_5,
       struct iwl_cmd_meta *VAR_6,
       int VAR_7,
       int VAR_8)
{
 int VAR_9 = FUNC_5(VAR_3, VAR_3->write_ptr);
 struct iwl_tfh_tfd *VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_9);
 dma_addr_t VAR_11;
 int VAR_12;
 void *VAR_13;

 VAR_11 = FUNC_6(VAR_3, VAR_9);

 FUNC_3(VAR_2, VAR_10, VAR_11, VAR_1);







 VAR_12 = VAR_8 + sizeof(struct iwl_cmd_header) + VAR_7 -
       VAR_1;




 VAR_13 = ((u8 *)&VAR_4->hdr) + VAR_1;
 VAR_11 = FUNC_0(VAR_2->dev, VAR_13, VAR_12, VAR_0);
 if (FUNC_9(FUNC_1(VAR_2->dev, VAR_11)))
  goto out_err;
 FUNC_3(VAR_2, VAR_10, VAR_11, VAR_12);

 if (FUNC_2(VAR_2, VAR_5, VAR_10,
          VAR_12 + VAR_1,
          VAR_7, VAR_4))
  goto out_err;


 FUNC_8(&VAR_3->first_tb_bufs[VAR_9], VAR_4, VAR_1);
 return VAR_10;

out_err:
 FUNC_4(VAR_2, VAR_6, VAR_10);
 return ((void*)0);
}

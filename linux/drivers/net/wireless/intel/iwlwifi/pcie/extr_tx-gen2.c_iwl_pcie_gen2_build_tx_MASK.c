
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {void* data; } ;
struct iwl_txq {int * first_tb_bufs; int write_ptr; } ;
struct iwl_trans {int dev; } ;
struct iwl_tfh_tfd {int dummy; } ;
struct iwl_device_cmd {int hdr; } ;
struct iwl_cmd_meta {int dummy; } ;
struct iwl_cmd_header {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_tfh_tfd*,int ,int) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_cmd_meta*,struct iwl_tfh_tfd*) ;
 scalar_t__ FUNC_5 (struct iwl_trans*,struct sk_buff*,struct iwl_tfh_tfd*,struct iwl_cmd_meta*) ;
 int FUNC_6 (struct iwl_txq*,int ) ;
 int FUNC_7 (struct iwl_txq*,int) ;
 struct iwl_tfh_tfd* FUNC_8 (struct iwl_trans*,struct iwl_txq*,int) ;
 int FUNC_9 (int *,struct iwl_device_cmd*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,struct sk_buff*,struct iwl_tfh_tfd*,int,int *,int,int) ;
 int FUNC_12 (int ,struct sk_buff*,void*,int) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static struct
iwl_tfh_tfd *FUNC_14(struct iwl_trans *VAR_2,
        struct iwl_txq *VAR_3,
        struct iwl_device_cmd *VAR_4,
        struct sk_buff *VAR_5,
        struct iwl_cmd_meta *VAR_6,
        int VAR_7,
        int VAR_8,
        bool VAR_9)
{
 int VAR_10 = FUNC_6(VAR_3, VAR_3->write_ptr);
 struct iwl_tfh_tfd *VAR_11 = FUNC_8(VAR_2, VAR_3, VAR_10);
 dma_addr_t VAR_12;
 int VAR_13, VAR_14, VAR_15;
 void *VAR_16;

 VAR_12 = FUNC_7(VAR_3, VAR_10);


 FUNC_9(&VAR_3->first_tb_bufs[VAR_10], VAR_4, VAR_1);

 FUNC_3(VAR_2, VAR_11, VAR_12, VAR_1);







 VAR_13 = VAR_8 + sizeof(struct iwl_cmd_header) + VAR_7 -
       VAR_1;

 if (VAR_9)
  VAR_14 = FUNC_0(VAR_13, 4);
 else
  VAR_14 = VAR_13;


 VAR_16 = ((u8 *)&VAR_4->hdr) + VAR_1;
 VAR_12 = FUNC_1(VAR_2->dev, VAR_16, VAR_14, VAR_0);
 if (FUNC_13(FUNC_2(VAR_2->dev, VAR_12)))
  goto out_err;
 FUNC_3(VAR_2, VAR_11, VAR_12, VAR_14);
 FUNC_11(VAR_2->dev, VAR_5, VAR_11, sizeof(*VAR_11), &VAR_4->hdr,
        VAR_1 + VAR_14, VAR_7);


 VAR_15 = FUNC_10(VAR_5) - VAR_7;

 if (VAR_15 > 0) {
  VAR_12 = FUNC_1(VAR_2->dev, VAR_5->data + VAR_7,
      VAR_15, VAR_0);
  if (FUNC_13(FUNC_2(VAR_2->dev, VAR_12)))
   goto out_err;
  FUNC_3(VAR_2, VAR_11, VAR_12, VAR_15);
  FUNC_12(VAR_2->dev, VAR_5,
     VAR_5->data + VAR_7,
     VAR_15);
 }

 if (FUNC_5(VAR_2, VAR_5, VAR_11, VAR_6))
  goto out_err;

 return VAR_11;

out_err:
 FUNC_4(VAR_2, VAR_6, VAR_11);
 return ((void*)0);
}

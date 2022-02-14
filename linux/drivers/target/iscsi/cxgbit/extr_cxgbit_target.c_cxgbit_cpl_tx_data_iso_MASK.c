
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cxgbit_iso_info {int flags; int len; int burst_len; int mpdu; } ;
struct cpl_tx_data_iso {scalar_t__ reserved3; void* buffer_offset; void* datasn_offset; void* reserved2_seglen_offset; void* len; void* burst_size; int mpdu; scalar_t__ ahs_len; void* op_to_scsi; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 struct cpl_tx_data_iso* FUNC_10 (struct sk_buff*,int) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct sk_buff *VAR_3, struct cxgbit_iso_info *VAR_4)
{
 struct cpl_tx_data_iso *VAR_5;
 unsigned int VAR_6 = FUNC_11(VAR_3);
 unsigned int VAR_7 = !!(VAR_4->flags & VAR_1);
 unsigned int VAR_8 = !!(VAR_4->flags & VAR_2);

 VAR_5 = FUNC_10(VAR_3, sizeof(*VAR_5));

 VAR_5->op_to_scsi = FUNC_12(FUNC_5(VAR_0) |
   FUNC_1(VAR_7) |
   FUNC_4(VAR_8) |
   FUNC_0(0) |
   FUNC_2(VAR_6 & 1) |
   FUNC_6(((VAR_6 >> 1) & 1)) |
   FUNC_3(0) |
   FUNC_7(2));

 VAR_5->ahs_len = 0;
 VAR_5->mpdu = FUNC_13(FUNC_8(VAR_4->mpdu, 4));
 VAR_5->burst_size = FUNC_12(FUNC_8(VAR_4->burst_len, 4));
 VAR_5->len = FUNC_12(VAR_4->len);
 VAR_5->reserved2_seglen_offset = FUNC_12(0);
 VAR_5->datasn_offset = FUNC_12(0);
 VAR_5->buffer_offset = FUNC_12(0);
 VAR_5->reserved3 = 0;

 FUNC_9(VAR_3, sizeof(*VAR_5));
}

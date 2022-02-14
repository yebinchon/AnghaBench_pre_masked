
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dword_3; void* dword_2; scalar_t__ dword_1; void* dword_0; } ;
struct utp_transfer_req_desc {scalar_t__ prd_table_length; TYPE_1__ header; } ;
struct ufshcd_lrb {int command_type; scalar_t__ intr_cmd; struct utp_transfer_req_desc* utr_descriptor_ptr; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ufshcd_lrb *VAR_11,
   u32 *VAR_12, enum dma_data_direction VAR_13)
{
 struct utp_transfer_req_desc *VAR_14 = VAR_11->utr_descriptor_ptr;
 u32 VAR_15;
 u32 VAR_16;

 if (VAR_13 == VAR_0) {
  VAR_15 = VAR_7;
  *VAR_12 = VAR_4;
 } else if (VAR_13 == VAR_1) {
  VAR_15 = VAR_8;
  *VAR_12 = VAR_5;
 } else {
  VAR_15 = VAR_9;
  *VAR_12 = VAR_3;
 }

 VAR_16 = VAR_15 | (VAR_11->command_type
    << VAR_6);
 if (VAR_11->intr_cmd)
  VAR_16 |= VAR_10;


 VAR_14->header.dword_0 = FUNC_0(VAR_16);

 VAR_14->header.dword_1 = 0;





 VAR_14->header.dword_2 =
  FUNC_0(VAR_2);

 VAR_14->header.dword_3 = 0;

 VAR_14->prd_table_length = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scsi_cmnd {int dummy; } ;
struct esp_cmd_priv {int num_sg; int cur_sg; } ;
struct esp_cmd_entry {int flags; int* sense_ptr; } ;
struct esp {int prev_cfg3; int sreg; scalar_t__ rev; int config2; int data_dma_len; int prev_soff; scalar_t__ send_cmd_residual; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct esp_cmd_priv* FUNC_0 (struct scsi_cmnd*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (struct esp*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*) ;
 int* FUNC_4 (int ,int ,size_t*,size_t*) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static int FUNC_6(struct esp *VAR_21, struct esp_cmd_entry *VAR_22,
          struct scsi_cmnd *VAR_23)
{
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_24 = FUNC_2(VAR_9) & VAR_10;
 if (VAR_21->prev_cfg3 & VAR_5)
  VAR_24 <<= 1;

 VAR_25 = 0;
 if (!(VAR_21->sreg & VAR_14)) {
  VAR_25 = ((unsigned int)FUNC_2(VAR_16) |
     (((unsigned int)FUNC_2(VAR_17)) << 8));
  if (VAR_21->rev == VAR_18)
   VAR_25 |= ((unsigned int)FUNC_2(VAR_19)) << 16;
  if (VAR_21->rev == VAR_20 && (VAR_21->config2 & VAR_4))
   VAR_25 |= ((unsigned int)FUNC_2(VAR_15)) << 16;
 }

 VAR_26 = VAR_21->data_dma_len;
 VAR_26 -= VAR_25;
 VAR_26 -= VAR_21->send_cmd_residual;
 if (VAR_24 == 1 && VAR_22->flags & VAR_2) {
  size_t VAR_28 = 1;
  size_t VAR_29 = VAR_26;
  u8 VAR_30 = FUNC_2(VAR_8);

  if (VAR_22->flags & VAR_1)
   VAR_22->sense_ptr[VAR_26] = VAR_30;
  else {
   struct esp_cmd_priv *VAR_31 = FUNC_0(VAR_23);
   u8 *VAR_32;

   VAR_32 = FUNC_4(VAR_31->cur_sg, VAR_31->num_sg,
        &VAR_29, &VAR_28);
   if (FUNC_3(VAR_32)) {
    *(VAR_32 + VAR_29) = VAR_30;
    FUNC_5(VAR_32);
   }
  }
  VAR_26 += VAR_24;
  VAR_22->flags &= ~VAR_2;
 }
 if (!(VAR_22->flags & VAR_3))
  VAR_26 -= VAR_24;

 VAR_27 = 0;
 if (!VAR_21->prev_soff) {

  VAR_27 = 1;
 } else {
  if (VAR_21->rev == VAR_0) {
   u32 VAR_33, VAR_34;
   VAR_21->sreg = FUNC_2(VAR_12);
   VAR_34 = VAR_21->sreg & VAR_13;
   VAR_33 = FUNC_2(VAR_9);

   if ((VAR_34 == VAR_7 &&
        (VAR_33 & VAR_11)) ||
       (VAR_34 == VAR_6 &&
        (VAR_33 & VAR_10)))
    return -1;
  }
  if (!(VAR_22->flags & VAR_3))
   VAR_27 = 1;
 }

 if (VAR_27)
  FUNC_1(VAR_21);

 return VAR_26;
}

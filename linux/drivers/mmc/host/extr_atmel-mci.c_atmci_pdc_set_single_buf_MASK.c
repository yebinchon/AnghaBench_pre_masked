
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int has_rwproof; } ;
struct atmel_mci {unsigned int buf_size; int buf_phys_addr; unsigned int data_size; int mode_reg; int sg; TYPE_1__ caps; } ;
typedef enum atmci_xfer_dir { ____Placeholder_atmci_xfer_dir } atmci_xfer_dir ;
typedef enum atmci_pdc_buf { ____Placeholder_atmci_pdc_buf } atmci_pdc_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atmel_mci*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atmel_mci *VAR_9,
 enum atmci_xfer_dir VAR_10, enum atmci_pdc_buf VAR_11)
{
 u32 VAR_12, VAR_13;
 unsigned int VAR_14;

 if (VAR_10 == VAR_8) {
  VAR_12 = VAR_3;
  VAR_13 = VAR_2;
 } else {
  VAR_12 = VAR_6;
  VAR_13 = VAR_5;
 }

 if (VAR_11 == VAR_7) {
  VAR_12 += VAR_4;
  VAR_13 += VAR_4;
 }

 if (!VAR_9->caps.has_rwproof) {
  VAR_14 = VAR_9->buf_size;
  FUNC_0(VAR_9, VAR_12, VAR_9->buf_phys_addr);
 } else {
  VAR_14 = FUNC_2(VAR_9->sg);
  FUNC_0(VAR_9, VAR_12, FUNC_1(VAR_9->sg));
 }

 if (VAR_9->data_size <= VAR_14) {
  if (VAR_9->data_size & 0x3) {

   FUNC_0(VAR_9, VAR_13, VAR_9->data_size);
   FUNC_0(VAR_9, VAR_0, VAR_9->mode_reg | VAR_1);
  } else {

   FUNC_0(VAR_9, VAR_13, VAR_9->data_size / 4);
  }
  VAR_9->data_size = 0;
 } else {

  FUNC_0(VAR_9, VAR_13, FUNC_2(VAR_9->sg) / 4);
  VAR_9->data_size -= FUNC_2(VAR_9->sg);
  if (VAR_9->data_size)
   VAR_9->sg = FUNC_3(VAR_9->sg);
 }
}

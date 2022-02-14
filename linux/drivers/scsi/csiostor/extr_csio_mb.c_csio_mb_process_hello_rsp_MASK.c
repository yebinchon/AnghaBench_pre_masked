
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fw_hello_cmd {int err_to_clearinit; int fwrev; int retval_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {void* fwrev; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
typedef enum csio_dev_state { ____Placeholder_csio_dev_state } csio_dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 void* FUNC_2 (int ) ;

void
FUNC_3(struct csio_hw *VAR_6, struct csio_mb *VAR_7,
     enum fw_retval *VAR_8, enum csio_dev_state *VAR_9,
     uint8_t *VAR_10)
{
 struct fw_hello_cmd *VAR_11 = (struct fw_hello_cmd *)(VAR_7->mb);
 uint32_t VAR_12;

 *VAR_8 = FUNC_0(FUNC_2(VAR_11->retval_len16));

 if (*VAR_8 == VAR_5) {
  VAR_6->fwrev = FUNC_2(VAR_11->fwrev);

  VAR_12 = FUNC_2(VAR_11->err_to_clearinit);
  *VAR_10 = FUNC_1(VAR_12);

  if (VAR_12 & VAR_4)
   *VAR_9 = VAR_1;
  else if (VAR_12 & VAR_3)
   *VAR_9 = VAR_0;
  else
   *VAR_9 = VAR_2;
 }
}

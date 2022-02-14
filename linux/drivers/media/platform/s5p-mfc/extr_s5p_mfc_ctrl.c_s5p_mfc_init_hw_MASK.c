
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int virt; } ;
struct s5p_mfc_dev {int risc_on; scalar_t__ int_err; scalar_t__ int_type; scalar_t__ int_cond; int mfc_cmds; TYPE_1__ fw_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_1 (struct s5p_mfc_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 unsigned int FUNC_6 (struct s5p_mfc_dev*,int ) ;
 int FUNC_7 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_8 (struct s5p_mfc_dev*) ;
 int FUNC_9 (struct s5p_mfc_dev*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,struct s5p_mfc_dev*) ;
 int FUNC_13 (struct s5p_mfc_dev*) ;
 int FUNC_14 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_15 (struct s5p_mfc_dev*,scalar_t__) ;
 int VAR_9 ;

int FUNC_16(struct s5p_mfc_dev *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;

 FUNC_3();
 if (!VAR_10->fw_buf.virt) {
  FUNC_5("Firmware memory is not allocated.\n");
  return -VAR_0;
 }


 FUNC_2(2, "MFC reset..\n");
 FUNC_11();
 VAR_10->risc_on = 0;
 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12) {
  FUNC_5("Failed to reset MFC - timeout\n");
  return VAR_12;
 }
 FUNC_2(2, "Done MFC reset..\n");

 FUNC_13(VAR_10);

 FUNC_9(VAR_10);

 FUNC_8(VAR_10);
 if (FUNC_1(VAR_10)) {
  VAR_10->risc_on = 1;
  FUNC_7(VAR_10, 0x1, VAR_5);
 }
 else
  FUNC_7(VAR_10, 0x3ff, VAR_6);

 if (FUNC_0(VAR_10))
  FUNC_7(VAR_10, 0x0, VAR_4);

 FUNC_2(2, "Will now wait for completion of firmware transfer\n");
 if (FUNC_15(VAR_10, VAR_7)) {
  FUNC_5("Failed to load firmware\n");
  FUNC_14(VAR_10);
  FUNC_10();
  return -VAR_1;
 }
 FUNC_8(VAR_10);

 VAR_12 = FUNC_12(VAR_10->mfc_cmds, VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_5("Failed to send command to MFC - timeout\n");
  FUNC_14(VAR_10);
  FUNC_10();
  return VAR_12;
 }
 FUNC_2(2, "Ok, now will wait for completion of hardware init\n");
 if (FUNC_15(VAR_10, VAR_8)) {
  FUNC_5("Failed to init hardware\n");
  FUNC_14(VAR_10);
  FUNC_10();
  return -VAR_1;
 }
 VAR_10->int_cond = 0;
 if (VAR_10->int_err != 0 || VAR_10->int_type !=
     VAR_8) {

  FUNC_5("Failed to init firmware - error: %d int: %d\n",
      VAR_10->int_err, VAR_10->int_type);
  FUNC_14(VAR_10);
  FUNC_10();
  return -VAR_1;
 }
 if (FUNC_1(VAR_10))
  VAR_11 = FUNC_6(VAR_10, VAR_3);
 else
  VAR_11 = FUNC_6(VAR_10, VAR_2);

 FUNC_2(2, "MFC F/W version : %02xyy, %02xmm, %02xdd\n",
  (VAR_11 >> 16) & 0xFF, (VAR_11 >> 8) & 0xFF, VAR_11 & 0xFF);
 FUNC_10();
 FUNC_4();
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scsi_cmnd {int result; int sense_buffer; } ;
struct fusion_context {int dummy; } ;


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
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*,int,int,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int) ;

__attribute__((used)) static void
FUNC_6(struct fusion_context *VAR_10,
  struct scsi_cmnd *VAR_11, u8 VAR_12, u8 VAR_13,
  u32 VAR_14, u8 *VAR_15)
{
 u8 VAR_16;
 int VAR_17;

 VAR_16 = FUNC_0(VAR_11);
 switch (VAR_12) {

 case 130:
  VAR_11->result = VAR_3 << 16;
  break;

 case 128:
 case 132:
  VAR_11->result = (VAR_1 << 16) | VAR_13;
  break;

 case 129:

  VAR_11->result = (VAR_3 << 16) | VAR_13;
  if (VAR_13 == VAR_8) {
   FUNC_2(VAR_11->sense_buffer, 0,
          VAR_9);
   FUNC_1(VAR_11->sense_buffer, VAR_15,
          VAR_9);
   VAR_11->result |= VAR_4 << 24;
  }







  VAR_17 = (FUNC_4(VAR_11) - VAR_14);
  FUNC_5(VAR_11, VAR_17);

  if (VAR_17 &&
   ((VAR_16 == VAR_6) ||
   (VAR_16 == VAR_7)))
   FUNC_3(VAR_5, VAR_11, "BRCM Debug mfi stat 0x%x, data len"
    " requested/completed 0x%x/0x%x\n",
    VAR_12, FUNC_4(VAR_11), VAR_14);
  break;

 case 131:
 case 133:
  VAR_11->result = VAR_0 << 16;
  break;
 case 134:
  VAR_11->result = VAR_2 << 16;
  break;
 default:
  VAR_11->result = VAR_1 << 16;
  break;
 }
}

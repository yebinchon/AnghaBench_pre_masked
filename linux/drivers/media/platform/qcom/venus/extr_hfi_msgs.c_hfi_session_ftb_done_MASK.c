
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct venus_inst {scalar_t__ session_type; unsigned int error; TYPE_1__* ops; } ;
struct venus_core {int dummy; } ;
struct hfi_msg_session_fbd_uncompressed_plane0_pkt {scalar_t__ time_stamp_hi; scalar_t__ time_stamp_lo; scalar_t__ flags; scalar_t__ offset; scalar_t__ filled_len; scalar_t__ picture_type; scalar_t__ output_tag; int stream_id; unsigned int error_type; } ;
struct hfi_msg_session_fbd_compressed_pkt {scalar_t__ time_stamp_hi; scalar_t__ time_stamp_lo; scalar_t__ flags; scalar_t__ offset; scalar_t__ filled_len; scalar_t__ picture_type; scalar_t__ output_tag; unsigned int error_type; } ;
struct TYPE_2__ {int (* buf_done ) (struct venus_inst*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;







 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct venus_inst*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_11,
     struct venus_inst *VAR_12, void *VAR_13)
{
 u32 VAR_14 = VAR_12->session_type;
 u64 VAR_15 = 0;
 u32 VAR_16 = 0, VAR_17 = 0;
 unsigned int VAR_18;
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 u32 VAR_23 = 0, VAR_24 = 0, VAR_25 = -1;

 if (VAR_14 == VAR_10) {
  struct hfi_msg_session_fbd_compressed_pkt *VAR_26 = VAR_13;

  VAR_16 = VAR_26->time_stamp_hi;
  VAR_17 = VAR_26->time_stamp_lo;
  VAR_20 = VAR_26->flags;
  VAR_21 = VAR_26->offset;
  VAR_22 = VAR_26->filled_len;
  VAR_23 = VAR_26->picture_type;
  VAR_25 = VAR_26->output_tag;
  VAR_24 = VAR_2;

  VAR_18 = VAR_26->error_type;
 } else if (VAR_14 == VAR_9) {
  struct hfi_msg_session_fbd_uncompressed_plane0_pkt *VAR_27 =
   VAR_13;

  VAR_16 = VAR_27->time_stamp_hi;
  VAR_17 = VAR_27->time_stamp_lo;
  VAR_20 = VAR_27->flags;
  VAR_21 = VAR_27->offset;
  VAR_22 = VAR_27->filled_len;
  VAR_23 = VAR_27->picture_type;
  VAR_25 = VAR_27->output_tag;

  if (VAR_27->stream_id == 0)
   VAR_24 = VAR_2;
  else if (VAR_27->stream_id == 1)
   VAR_24 = VAR_3;

  VAR_18 = VAR_27->error_type;
 } else {
  VAR_18 = VAR_4;
 }

 if (VAR_24 != VAR_2 &&
     VAR_24 != VAR_3)
  goto done;

 if (VAR_20 & VAR_0)
  VAR_19 |= VAR_7;

 switch (VAR_23) {
 case 130:
 case 131:
  VAR_19 |= VAR_6;
  break;
 case 129:
  VAR_19 |= VAR_8;
  break;
 case 132:
  VAR_19 |= VAR_5;
  break;
 case 134:
 case 128:
 case 133:
 default:
  break;
 }

 if (!(VAR_20 & VAR_1) && VAR_22) {
  VAR_15 = VAR_16;
  VAR_15 = (VAR_15 << 32) | VAR_17;
 }

done:
 VAR_12->error = VAR_18;
 VAR_12->ops->buf_done(VAR_12, VAR_24, VAR_25, VAR_22,
       VAR_21, VAR_19, VAR_20, VAR_15);
}

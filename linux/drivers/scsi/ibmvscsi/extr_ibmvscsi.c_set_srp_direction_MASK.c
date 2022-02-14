
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct srp_cmd {int data_out_desc_cnt; int data_in_desc_cnt; int buf_fmt; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_4,
         struct srp_cmd *VAR_5,
         int VAR_6)
{
 u8 VAR_7;

 if (VAR_6 == 0)
  return;

 if (VAR_6 == 1)
  VAR_7 = VAR_2;
 else {
  VAR_7 = VAR_3;
  VAR_6 = FUNC_0(VAR_6, VAR_1);

  if (VAR_4->sc_data_direction == VAR_0)
   VAR_5->data_out_desc_cnt = VAR_6;
  else
   VAR_5->data_in_desc_cnt = VAR_6;
 }

 if (VAR_4->sc_data_direction == VAR_0)
  VAR_5->buf_fmt = VAR_7 << 4;
 else
  VAR_5->buf_fmt = VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ft_cmd {int * ft_sense_buffer; TYPE_1__* sess; int se_cmd; int req_frame; } ;
struct fcp_cmnd {int fc_tm_flags; int fc_lun; } ;
struct TYPE_2__ {int se_sess; } ;


 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fcp_cmnd* FUNC_0 (int ,int) ;
 int FUNC_1 (struct ft_cmd*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,struct ft_cmd*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ft_cmd *VAR_9)
{
 struct fcp_cmnd *VAR_10;
 int VAR_11;
 u8 VAR_12;

 VAR_10 = FUNC_0(VAR_9->req_frame, sizeof(*VAR_10));

 switch (VAR_10->fc_tm_flags) {
 case 129:
  VAR_12 = VAR_7;
  break;
 case 128:
  VAR_12 = VAR_8;
  break;
 case 130:
  VAR_12 = VAR_6;
  break;
 case 132:
  VAR_12 = VAR_4;
  break;
 case 131:
  VAR_12 = VAR_5;
  break;
 default:




  FUNC_2("invalid FCP tm_flags %x\n", VAR_10->fc_tm_flags);
  FUNC_1(VAR_9, VAR_0);
  return;
 }


 VAR_11 = FUNC_4(&VAR_9->se_cmd, VAR_9->sess->se_sess,
  &VAR_9->ft_sense_buffer[0], FUNC_3(&VAR_10->fc_lun),
  VAR_9, VAR_12, VAR_2, 0, VAR_3);
 if (VAR_11 < 0)
  FUNC_1(VAR_9, VAR_1);
}

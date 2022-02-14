
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_identifiers {int roles; int port_id; void* port_name; void* node_name; } ;
struct fc_rport {int scsi_target_id; int channel; struct bfad_itnim_data_s* dd_data; int supported_classes; int maxframe_size; } ;
struct bfad_itnim_s {int scsi_tgt_id; int channel; int fcs_itnim; struct fc_rport* fc_rport; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct bfad_im_port_s {int shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 struct fc_rport* FUNC_7 (int ,int ,struct fc_rport_identifiers*) ;
 int FUNC_8 (struct fc_rport*,int ) ;

__attribute__((used)) static void
FUNC_9(struct bfad_im_port_s *VAR_3, struct bfad_itnim_s *VAR_4)
{
 struct fc_rport_identifiers VAR_5;
 struct fc_rport *VAR_6;
 struct bfad_itnim_data_s *VAR_7;

 VAR_5.node_name =
  FUNC_6(FUNC_3(&VAR_4->fcs_itnim));
 VAR_5.port_name =
  FUNC_6(FUNC_4(&VAR_4->fcs_itnim));
 VAR_5.port_id =
  FUNC_5(FUNC_1(&VAR_4->fcs_itnim));
 VAR_5.roles = VAR_1;

 VAR_4->fc_rport = VAR_6 =
  FUNC_7(VAR_3->shost, 0, &VAR_5);

 if (!VAR_6)
  return;

 VAR_6->maxframe_size =
  FUNC_2(&VAR_4->fcs_itnim);
 VAR_6->supported_classes = FUNC_0(&VAR_4->fcs_itnim);

 VAR_7 = VAR_6->dd_data;
 VAR_7->itnim = VAR_4;

 VAR_5.roles |= VAR_0;

 if (VAR_5.roles != VAR_1)
  FUNC_8(VAR_6, VAR_5.roles);

 if ((VAR_6->scsi_target_id != -1)
     && (VAR_6->scsi_target_id < VAR_2))
  VAR_4->scsi_tgt_id = VAR_6->scsi_target_id;

 VAR_4->channel = VAR_6->channel;

 return;
}

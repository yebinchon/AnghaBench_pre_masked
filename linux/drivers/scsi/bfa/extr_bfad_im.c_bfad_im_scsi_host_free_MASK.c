
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int inst_no; } ;
struct bfad_im_port_s {int idr_id; TYPE_1__* shost; } ;
struct TYPE_4__ {int host_no; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(struct bfad_s *VAR_4, struct bfad_im_port_s *VAR_5)
{
 FUNC_1(VAR_4, VAR_4->inst_no);
 FUNC_0(VAR_0, VAR_4, VAR_1, "Free scsi%d\n",
   VAR_5->shost->host_no);

 FUNC_2(VAR_5->shost);

 FUNC_7(VAR_5->shost);
 FUNC_6(VAR_5->shost);

 FUNC_4(&VAR_3);
 FUNC_3(&VAR_2, VAR_5->idr_id);
 FUNC_5(&VAR_3);
}

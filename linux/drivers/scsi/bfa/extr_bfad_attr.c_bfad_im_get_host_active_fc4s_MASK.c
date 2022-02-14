
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_port_s {int supported_fc4s; } ;
struct bfad_im_port_s {struct bfad_port_s* port; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_1)
{
 struct bfad_im_port_s *VAR_2 =
   (struct bfad_im_port_s *) VAR_1->hostdata[0];
 struct bfad_port_s *VAR_3 = VAR_2->port;

 FUNC_1(FUNC_0(VAR_1), 0,
        sizeof(FUNC_0(VAR_1)));

 if (VAR_3->supported_fc4s & VAR_0)
  FUNC_0(VAR_1)[2] = 1;

 FUNC_0(VAR_1)[7] = 1;
}

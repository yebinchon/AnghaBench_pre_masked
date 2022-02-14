
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_im_port_s {int dummy; } ;
struct bfad_im_port_pointer {struct bfad_im_port_s* p; } ;
struct Scsi_Host {int dummy; } ;


 struct bfad_im_port_pointer* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static inline struct bfad_im_port_s *FUNC_1(struct Scsi_Host *VAR_0)
{
 struct bfad_im_port_pointer *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->p;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_ucmd {int dummy; } ;
struct TYPE_4__ {unsigned long settle_time; scalar_t__ settle_time_valid; } ;
struct sym_hcb {TYPE_2__ s; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* request; } ;
struct TYPE_3__ {unsigned long timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sym_hcb* FUNC_0 (struct scsi_cmnd*) ;
 struct sym_ucmd* FUNC_1 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int FUNC_2 (struct sym_ucmd*,int ,int) ;
 int FUNC_3 (struct sym_hcb*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_3,
     void (*VAR_4)(struct scsi_cmnd *))
{
 struct sym_hcb *VAR_5 = FUNC_0(VAR_3);
 struct sym_ucmd *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = 0;

 VAR_3->scsi_done = VAR_4;
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));





 if (VAR_5->s.settle_time_valid && VAR_3->request->timeout) {
  unsigned long VAR_8 = VAR_2 + VAR_3->request->timeout;
  VAR_8 -= VAR_1*2;
  if (FUNC_4(VAR_5->s.settle_time, VAR_8)) {
   VAR_5->s.settle_time = VAR_8;
  }
 }

 if (VAR_5->s.settle_time_valid)
  return VAR_0;

 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (VAR_7)
  return VAR_0;
 return 0;
}

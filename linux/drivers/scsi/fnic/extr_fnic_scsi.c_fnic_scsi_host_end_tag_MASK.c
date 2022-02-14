
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ host_scribble; } ;
struct request {int dummy; } ;
struct fnic {int dummy; } ;


 int FUNC_0 (struct request*) ;

__attribute__((used)) static inline void
FUNC_1(struct fnic *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct request *VAR_2 = (struct request *)VAR_1->host_scribble;

 FUNC_0(VAR_2);
}

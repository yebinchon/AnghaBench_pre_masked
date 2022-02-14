
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int shost_gendev; } ;


 int FUNC_0 (int) ;
 struct srp_rport* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int *,struct device**,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct srp_rport *FUNC_3(struct Scsi_Host *VAR_1)
{
 struct device *VAR_2 = ((void*)0);

 FUNC_0(FUNC_2(&VAR_1->shost_gendev, &VAR_2,
        VAR_0) < 0);
 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}

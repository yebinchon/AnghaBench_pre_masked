
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powertec_info {scalar_t__ base; int term_ctl; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct Scsi_Host *VAR_2, int VAR_3)
{
 struct powertec_info *VAR_4 = (struct powertec_info *)VAR_2->hostdata;

 VAR_4->term_ctl = VAR_3 ? VAR_1 : 0;
 FUNC_0(VAR_4->term_ctl, VAR_4->base + VAR_0);
}

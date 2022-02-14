
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int * sas_port; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hpsa_scsi_dev_t *VAR_0)
{
 if (VAR_0->sas_port) {
  FUNC_0(VAR_0->sas_port);
  VAR_0->sas_port = ((void*)0);
 }
}

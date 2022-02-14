
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct zfcp_adapter*,int ,int) ;
 int FUNC_1 (struct zfcp_adapter*,char*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_2, int VAR_3)
{
 struct zfcp_adapter *VAR_4 =
  (struct zfcp_adapter *)VAR_2->hostdata[0];
 int VAR_5 = 0;

 if (VAR_3 != VAR_1) {
  VAR_5 = -VAR_0;
  FUNC_0("scshr_n", VAR_4, ~0, VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_4, "scshr_y");
 return VAR_5;
}

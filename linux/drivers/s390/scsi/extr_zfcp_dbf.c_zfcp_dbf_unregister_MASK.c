
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf {int rec; int pay; int hba; int san; int scsi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zfcp_dbf*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_dbf *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->scsi);
 FUNC_0(VAR_0->san);
 FUNC_0(VAR_0->hba);
 FUNC_0(VAR_0->pay);
 FUNC_0(VAR_0->rec);
 FUNC_1(VAR_0);
}

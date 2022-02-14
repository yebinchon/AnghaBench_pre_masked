
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_scan_data {struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
typedef int async_cookie_t ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct async_scan_data*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, async_cookie_t VAR_1)
{
 struct async_scan_data *VAR_2 = VAR_0;
 struct Scsi_Host *VAR_3 = VAR_2->shost;

 FUNC_0(VAR_3);
 FUNC_1(VAR_2);
}

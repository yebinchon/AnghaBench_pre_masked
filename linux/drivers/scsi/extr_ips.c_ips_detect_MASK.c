
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct scsi_host_template * VAR_5)
{
 int VAR_6;

 FUNC_0("ips_detect", 1);






 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_2(VAR_6))
   FUNC_1(VAR_1[VAR_6]);
  VAR_4++;
 }
 VAR_2 = 1;
 return (VAR_3);
}

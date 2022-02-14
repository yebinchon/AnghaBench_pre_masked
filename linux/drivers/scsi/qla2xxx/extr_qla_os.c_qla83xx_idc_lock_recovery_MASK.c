
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(scsi_qla_host_t *VAR_5)
{
 int VAR_6 = VAR_3;
 uint32_t VAR_7, VAR_8;
 unsigned long VAR_9;

 VAR_9 = VAR_4 + VAR_1;
retry_lockid:
 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_7);
 if (VAR_6)
  goto exit;


 if (FUNC_3(VAR_4, VAR_9)) {
  if (FUNC_0(VAR_5) == VAR_3)
   return VAR_3;
  else
   return VAR_2;
 }

 VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_8);
 if (VAR_6)
  goto exit;

 if (VAR_7 == VAR_8) {
  FUNC_2();
  goto retry_lockid;
 } else
  return VAR_3;

exit:
 return VAR_6;
}

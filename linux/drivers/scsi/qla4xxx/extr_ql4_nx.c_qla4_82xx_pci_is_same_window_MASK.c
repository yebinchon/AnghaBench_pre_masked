
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int qdr_sn_window; } ;


 int FUNC_0 () ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long long,unsigned long long,unsigned long long) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;

__attribute__((used)) static int FUNC_2(struct scsi_qla_host *VAR_8,
  unsigned long long VAR_9)
{
 int VAR_10;
 unsigned long long VAR_11;

 VAR_11 = VAR_0;

 if (FUNC_1(VAR_9, VAR_1,
     VAR_2)) {

  FUNC_0();
 } else if (FUNC_1(VAR_9, VAR_3,
      VAR_4)) {
  return 1;
 } else if (FUNC_1(VAR_9, VAR_5,
      VAR_6)) {
  return 1;
 } else if (FUNC_1(VAR_9, VAR_7,
     VAR_11)) {

  VAR_10 = ((VAR_9 - VAR_7) >> 22) & 0x3f;
  if (VAR_8->qdr_sn_window == VAR_10)
   return 1;
 }

 return 0;
}

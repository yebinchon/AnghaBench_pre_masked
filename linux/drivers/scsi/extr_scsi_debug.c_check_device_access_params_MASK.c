
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_cmnd*,int ,int ,int) ;
 unsigned long long VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct scsi_cmnd *VAR_9,
 unsigned long long VAR_10, unsigned int VAR_11, bool VAR_12)
{
 if (VAR_10 + VAR_11 > VAR_6) {
  FUNC_0(VAR_9, VAR_1, VAR_3, 0);
  return VAR_5;
 }

 if (VAR_11 > VAR_7) {

  FUNC_0(VAR_9, VAR_1, VAR_2, 0);
  return VAR_5;
 }
 if (VAR_12 && FUNC_1(VAR_8)) {
  FUNC_0(VAR_9, VAR_0, VAR_4, 0x2);
  return VAR_5;
 }
 return 0;
}

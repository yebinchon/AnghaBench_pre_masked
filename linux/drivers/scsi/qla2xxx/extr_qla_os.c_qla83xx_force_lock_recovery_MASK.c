
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_4(scsi_qla_host_t *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10 = 0x3;
 uint32_t VAR_11 = 0x3c;
 struct qla_hw_data *VAR_12 = VAR_7->hw;

 FUNC_1(VAR_6, VAR_7, 0xb086,
     "Trying force recovery of the IDC lock.\n");

 VAR_8 = FUNC_2(VAR_7, VAR_4, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if ((VAR_9 & VAR_10) > 0) {
  return VAR_5;
 } else {
  VAR_9 = (VAR_0) | (VAR_12->portnum << 2);
  VAR_8 = FUNC_3(VAR_7, VAR_4,
      VAR_9);
  if (VAR_8)
   return VAR_8;

  FUNC_0(200);

  VAR_8 = FUNC_2(VAR_7, VAR_4,
      &VAR_9);
  if (VAR_8)
   return VAR_8;

  if (((VAR_9 & VAR_11) >> 2) == VAR_12->portnum) {
   VAR_9 &= (VAR_1 |
     ~(VAR_10));
   VAR_8 = FUNC_3(VAR_7,
       VAR_4, VAR_9);
   if (VAR_8)
    return VAR_8;


   VAR_8 = FUNC_2(VAR_7, VAR_3,
       &VAR_9);
   if (VAR_8)
    return VAR_8;

   VAR_8 = FUNC_3(VAR_7, VAR_2,
       0xff);
   if (VAR_8)
    return VAR_8;

   VAR_8 = FUNC_3(VAR_7,
       VAR_4, 0x0);
   if (VAR_8)
    return VAR_8;
  } else
   return VAR_5;
 }

 return VAR_8;
}

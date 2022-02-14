
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_4__ {int Ready; } ;
struct TYPE_3__ {int Ready; } ;
struct ene_ub6250_info {int* bbuf; TYPE_2__ MS_Status; TYPE_1__ SD_Status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us_data*,int ,int*) ;
 int FUNC_1 (struct us_data*) ;
 int FUNC_2 (struct us_data*) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *)(VAR_3->extra);
 u8 *VAR_7 = VAR_6->bbuf;

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_7);
 if (VAR_4 != VAR_2)
  return VAR_1;

 VAR_5 = VAR_7[0];
 if (VAR_5 & 0x01) {
  if (!VAR_6->SD_Status.Ready) {
   VAR_4 = FUNC_2(VAR_3);
   if (VAR_4 != VAR_2)
    return VAR_1;
  }
 }
 if (VAR_5 & 0x02) {
  if (!VAR_6->MS_Status.Ready) {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4 != VAR_2)
    return VAR_1;
  }
 }
 return VAR_4;
}

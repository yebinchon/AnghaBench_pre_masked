
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct csio_hw {int model_desc; int hw_ver; } ;
struct TYPE_2__ {char* model_no; char* description; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct csio_hw *VAR_5, uint16_t VAR_6, uint16_t VAR_7)
{
 uint32_t VAR_8, VAR_9;

 if (VAR_6 == VAR_3) {
  VAR_9 = (VAR_7 & VAR_0);
  VAR_8 = (VAR_7 & VAR_1);

  if (VAR_9 == VAR_2) {
   FUNC_0(VAR_5->hw_ver,
          VAR_4[VAR_8].model_no, 16);
   FUNC_0(VAR_5->model_desc,
          VAR_4[VAR_8].description,
          32);
  } else {
   char VAR_10[32] = "Chelsio FCoE Controller";
   FUNC_0(VAR_5->model_desc, VAR_10, 32);
  }
 }
}

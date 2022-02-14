
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fmdev {int asci_id; } ;
struct TYPE_3__ {int* buff; } ;
struct TYPE_4__ {TYPE_1__ groupdatabuff; } ;
struct fm_rdsdata_format {TYPE_2__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct fmdev *VAR_1,
  struct fm_rdsdata_format *VAR_2)
{
 u8 VAR_3 = 0;
 u8 *VAR_4;






 if (VAR_1->asci_id != 0x6350) {
  VAR_4 = &VAR_2->data.groupdatabuff.buff[0];
  while (VAR_3 + 1 < VAR_0) {
   FUNC_0(VAR_4[VAR_3], VAR_4[VAR_3 + 1]);
   VAR_3 += 2;
  }
 }
}

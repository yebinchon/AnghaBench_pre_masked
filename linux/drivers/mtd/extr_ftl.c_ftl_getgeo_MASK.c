
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct mtd_blktrans_dev {int dummy; } ;
struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct TYPE_3__ {int FormattedSize; } ;
struct TYPE_4__ {TYPE_1__ header; } ;
typedef TYPE_2__ partition_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_blktrans_dev *VAR_1, struct hd_geometry *VAR_2)
{
 partition_t *VAR_3 = (void *)VAR_1;
 u_long VAR_4;


 VAR_4 = FUNC_0(VAR_3->header.FormattedSize)/VAR_0;

 VAR_2->heads = 1;
 VAR_2->sectors = 8;
 VAR_2->cylinders = VAR_4 >> 3;

 return 0;
}

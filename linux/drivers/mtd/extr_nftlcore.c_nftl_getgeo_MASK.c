
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_blktrans_dev {int dummy; } ;
struct hd_geometry {int cylinders; int sectors; int heads; } ;
struct NFTLrecord {int cylinders; int sectors; int heads; } ;



__attribute__((used)) static int FUNC_0(struct mtd_blktrans_dev *VAR_0, struct hd_geometry *VAR_1)
{
 struct NFTLrecord *VAR_2 = (void *)VAR_0;

 VAR_1->heads = VAR_2->heads;
 VAR_1->sectors = VAR_2->sectors;
 VAR_1->cylinders = VAR_2->cylinders;

 return 0;
}

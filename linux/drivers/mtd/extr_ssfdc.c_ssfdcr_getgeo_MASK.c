
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssfdcr_record {int cylinders; int sectors; int heads; } ;
struct mtd_blktrans_dev {int dummy; } ;
struct hd_geometry {int cylinders; int sectors; int heads; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_blktrans_dev *VAR_0, struct hd_geometry *VAR_1)
{
 struct ssfdcr_record *VAR_2 = (struct ssfdcr_record *)VAR_0;

 FUNC_0("SSFDC_RO: ssfdcr_getgeo() C=%d, H=%d, S=%d\n",
   VAR_2->cylinders, VAR_2->heads, VAR_2->sectors);

 VAR_1->heads = VAR_2->heads;
 VAR_1->sectors = VAR_2->sectors;
 VAR_1->cylinders = VAR_2->cylinders;

 return 0;
}

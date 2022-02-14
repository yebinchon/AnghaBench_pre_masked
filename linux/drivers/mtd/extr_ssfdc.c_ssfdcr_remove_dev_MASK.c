
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssfdcr_record {int logic_block_map; } ;
struct mtd_blktrans_dev {int devnum; } ;


 int FUNC_0 (struct mtd_blktrans_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_dev *VAR_0)
{
 struct ssfdcr_record *VAR_1 = (struct ssfdcr_record *)VAR_0;

 FUNC_2("SSFDC_RO: remove_dev (i=%d)\n", VAR_0->devnum);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1->logic_block_map);
}

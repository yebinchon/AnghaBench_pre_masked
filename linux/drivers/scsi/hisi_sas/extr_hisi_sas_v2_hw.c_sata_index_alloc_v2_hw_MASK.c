
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {void* sata_dev_bitmap; struct device* dev; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 unsigned int FUNC_1 (void*,unsigned int) ;
 int FUNC_2 (unsigned int,void*) ;

__attribute__((used)) static bool FUNC_3(struct hisi_hba *VAR_1, int *VAR_2)
{
 unsigned int VAR_3;
 struct device *VAR_4 = VAR_1->dev;
 void *VAR_5 = VAR_1->sata_dev_bitmap;

 VAR_3 = FUNC_1(VAR_5, VAR_0);
 if (VAR_3 >= VAR_0) {
  FUNC_0(VAR_4, "alloc sata index failed, index=%d\n", VAR_3);
  return 0;
 }

 FUNC_2(VAR_3, VAR_5);
 *VAR_2 = VAR_3;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int size; int* data; } ;
struct cas {scalar_t__ phy_id; int fw_load_addr; int fw_size; int fw_data; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,char const*,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct cas *VAR_1)
{
 const struct firmware *VAR_2;
 const char VAR_3[] = "sun/cassini.bin";
 int VAR_4;

 if (VAR_0 != VAR_1->phy_id)
  return;

 VAR_4 = FUNC_3(&VAR_2, VAR_3, &VAR_1->pdev->dev);
 if (VAR_4) {
  FUNC_1("Failed to load firmware \"%s\"\n",
         VAR_3);
  return;
 }
 if (VAR_2->size < 2) {
  FUNC_1("bogus length %zu in \"%s\"\n",
         VAR_2->size, VAR_3);
  goto out;
 }
 VAR_1->fw_load_addr= VAR_2->data[1] << 8 | VAR_2->data[0];
 VAR_1->fw_size = VAR_2->size - 2;
 VAR_1->fw_data = FUNC_4(VAR_1->fw_size);
 if (!VAR_1->fw_data)
  goto out;
 FUNC_0(VAR_1->fw_data, &VAR_2->data[2], VAR_1->fw_size);
out:
 FUNC_2(VAR_2);
}

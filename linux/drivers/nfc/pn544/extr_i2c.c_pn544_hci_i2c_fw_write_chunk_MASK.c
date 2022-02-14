
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn544_i2c_phy {int fw_work_state; scalar_t__ fw_written; scalar_t__ fw_blob_size; scalar_t__ fw_blob_data; scalar_t__ fw_blob_dest_addr; int i2c_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pn544_i2c_phy *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->i2c_dev,
           VAR_1->fw_blob_dest_addr + VAR_1->fw_written,
           VAR_1->fw_blob_data + VAR_1->fw_written,
           VAR_1->fw_blob_size - VAR_1->fw_written);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->fw_written += VAR_2;
 VAR_1->fw_work_state = VAR_0;

 return 0;
}

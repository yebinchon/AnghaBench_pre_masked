
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i1480 {scalar_t__ phy_fw_name; int dev; } ;
struct firmware {char* data; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct i1480*,scalar_t__*,int,int) ;
 int FUNC_3 (struct i1480*,char const*,size_t) ;
 size_t FUNC_4 (size_t const,size_t) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,scalar_t__,int ) ;

int FUNC_7(struct i1480 *VAR_1)
{
 int VAR_2;
 const struct firmware *VAR_3;
 const char *VAR_4, *VAR_5;
 const size_t VAR_6 = 480;
 size_t VAR_7;
 u8 VAR_8;

 VAR_2 = FUNC_6(&VAR_3, VAR_1->phy_fw_name, VAR_1->dev);
 if (VAR_2 < 0)
  goto out;

 for (VAR_4 = VAR_3->data, VAR_5 = VAR_4 + VAR_3->size;
      VAR_4 < VAR_5; VAR_4 += VAR_6) {
  VAR_7 = FUNC_4(VAR_6, (size_t) (VAR_5 - VAR_4));
  VAR_2 = FUNC_3(VAR_1, VAR_4, VAR_7);
  if (VAR_2 < 0)
   goto error_mpi_write;
 }

 VAR_2 = FUNC_2(VAR_1, &VAR_8, 0x0006, 1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "PHY: can't get status: %d\n", VAR_2);
  goto error_mpi_status;
 }
 if (VAR_8 != 0) {
  VAR_2 = -VAR_0;
  FUNC_1(VAR_1->dev, "error, PHY not ready: %u\n", VAR_8);
  goto error_phy_status;
 }
 FUNC_1(VAR_1->dev, "PHY fw '%s': uploaded\n", VAR_1->phy_fw_name);
error_phy_status:
error_mpi_status:
error_mpi_write:
 FUNC_5(VAR_3);
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev, "PHY fw '%s': failed to upload (%d), "
   "power cycle device\n", VAR_1->phy_fw_name, VAR_2);
out:
 return VAR_2;
}

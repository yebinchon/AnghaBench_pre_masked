
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn544_i2c_phy {scalar_t__ fw_blob_data; scalar_t__ fw_written; int fw_blob_size; int fw_work; scalar_t__ fw_cmd_result; int fw_work_state; int i2c_dev; } ;
struct pn544_i2c_fw_secure_frame {scalar_t__ cmd; int be_datalen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct pn544_i2c_phy*,int ) ;
 int FUNC_3 (struct pn544_i2c_phy*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pn544_i2c_phy *VAR_8)
{
 struct pn544_i2c_fw_secure_frame *VAR_9;
 int VAR_10;

 VAR_9 = (struct pn544_i2c_fw_secure_frame *) VAR_8->fw_blob_data;
 if (VAR_8->fw_written == 0)
  VAR_8->fw_blob_size = FUNC_0(&VAR_9->be_datalen)
    + VAR_7;


 if (VAR_8->fw_blob_size > VAR_5 &&
   VAR_9->cmd != VAR_4)
  return -VAR_0;


 if (VAR_8->fw_blob_size < VAR_5) {
  VAR_10 = FUNC_1(VAR_8->i2c_dev,
   (const char *) VAR_8->fw_blob_data, VAR_8->fw_blob_size);

  if (VAR_10 == VAR_8->fw_blob_size)
   goto exit;
  else if (VAR_10 < 0)
   return VAR_10;
  else
   return -VAR_1;
 }

 VAR_10 = FUNC_3(VAR_8,
           VAR_8->fw_blob_data + VAR_8->fw_written,
           VAR_8->fw_blob_size - VAR_8->fw_written);
 if (VAR_10 < 0)
  return VAR_10;

exit:
 VAR_8->fw_written += VAR_10;
 VAR_8->fw_work_state = VAR_2;


 if (VAR_9->cmd == VAR_3) {
  FUNC_2(VAR_8, VAR_6);
  VAR_8->fw_cmd_result = 0;
  FUNC_4(&VAR_8->fw_work);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct pn544_i2c_fw_frame_write {int* be_dest_addr; int data; int be_datalen; int be_length; int cmd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i2c_client*,int *,int) ;
 int FUNC_1 (int ,int const*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4, u32 VAR_5,
          const u8 *VAR_6, u16 VAR_7)
{
 u8 VAR_8[VAR_2];
 struct pn544_i2c_fw_frame_write *VAR_9;
 u16 VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;

 VAR_9 = (struct pn544_i2c_fw_frame_write *) VAR_8;

 VAR_10 = sizeof(VAR_9->be_dest_addr) +
       sizeof(VAR_9->be_datalen) + VAR_7;
 VAR_11 = VAR_10 + sizeof(VAR_9->cmd) +
        sizeof(VAR_9->be_length);

 VAR_9->cmd = VAR_1;

 FUNC_2(VAR_10, &VAR_9->be_length);

 VAR_9->be_dest_addr[0] = (VAR_5 & 0xff0000) >> 16;
 VAR_9->be_dest_addr[1] = (VAR_5 & 0xff00) >> 8;
 VAR_9->be_dest_addr[2] = VAR_5 & 0xff;

 FUNC_2(VAR_7, &VAR_9->be_datalen);

 FUNC_1(VAR_9->data, VAR_6, VAR_7);

 VAR_12 = FUNC_0(VAR_4, VAR_8, VAR_11);

 if (VAR_12 == VAR_11)
  return VAR_7;
 else if (VAR_12 < 0)
  return VAR_12;
 else
  return -VAR_0;
}

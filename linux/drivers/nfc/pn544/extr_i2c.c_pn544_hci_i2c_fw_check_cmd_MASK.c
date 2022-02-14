
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pn544_i2c_fw_frame_check {int* be_start_addr; int be_crc; int be_datalen; int be_length; int cmd; } ;
struct i2c_client {int dummy; } ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const*,int) ;
 int FUNC_1 (struct i2c_client*,char const*,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, u32 VAR_3,
          const u8 *VAR_4, u16 VAR_5)
{
 struct pn544_i2c_fw_frame_check VAR_6;
 int VAR_7;
 u16 VAR_8;


 VAR_8 = FUNC_0(0xffff, VAR_4, VAR_5);

 VAR_6.cmd = VAR_1;

 FUNC_2(sizeof(VAR_6.be_start_addr) +
      sizeof(VAR_6.be_datalen) + sizeof(VAR_6.be_crc),
      &VAR_6.be_length);


 VAR_6.be_start_addr[0] = (VAR_3 & 0xff0000) >> 16;
 VAR_6.be_start_addr[1] = (VAR_3 & 0xff00) >> 8;
 VAR_6.be_start_addr[2] = VAR_3 & 0xff;

 FUNC_2(VAR_5, &VAR_6.be_datalen);





 FUNC_2(VAR_8, &VAR_6.be_crc);

 VAR_7 = FUNC_1(VAR_2, (const char *) &VAR_6, sizeof(VAR_6));

 if (VAR_7 == sizeof(VAR_6))
  return 0;
 else if (VAR_7 < 0)
  return VAR_7;
 else
  return -VAR_0;
}

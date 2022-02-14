
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct cxd2880_ts_buf_info {int read_ready; int almost_full; int almost_empty; int overflow; int underflow; int pkt_num; } ;
typedef int recv_data ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_1,
        struct cxd2880_ts_buf_info *VAR_2)
{
 u8 VAR_3 = 0x20;
 u8 VAR_4[2];
 int VAR_5;

 if (!VAR_1 || !VAR_2) {
  FUNC_0("invalid arg\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, &VAR_3, 1,
      VAR_4, sizeof(VAR_4));
 if (VAR_5)
  FUNC_0("spi_write_then_read failed\n");

 VAR_2->read_ready = (VAR_4[0] & 0x80) ? 1 : 0;
 VAR_2->almost_full = (VAR_4[0] & 0x40) ? 1 : 0;
 VAR_2->almost_empty = (VAR_4[0] & 0x20) ? 1 : 0;
 VAR_2->overflow = (VAR_4[0] & 0x10) ? 1 : 0;
 VAR_2->underflow = (VAR_4[0] & 0x08) ? 1 : 0;
 VAR_2->pkt_num = ((VAR_4[0] & 0x07) << 8) | VAR_4[1];

 return VAR_5;
}

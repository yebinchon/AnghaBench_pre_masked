
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct rtw_fifo_conf {int rsvd_drv_pg_num; int txff_pg_num; int rsvd_pg_num; int acq_pg_num; int rsvd_boundary; int rsvd_drv_addr; void* rsvd_h2c_info_addr; void* rsvd_h2c_sta_info_addr; void* rsvd_h2cq_addr; void* rsvd_cpu_instr_addr; void* rsvd_fw_txbuf_addr; void* rsvd_csibuf_addr; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_fifo_conf fifo; } ;
struct rtw_chip_info {int csi_buf_pg_num; int txff_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtw_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct rtw_dev *VAR_7)
{
 struct rtw_fifo_conf *VAR_8 = &VAR_7->fifo;
 struct rtw_chip_info *VAR_9 = VAR_7->chip;
 u16 VAR_10;
 u8 VAR_11 = VAR_9->csi_buf_pg_num;


 VAR_8->rsvd_drv_pg_num = 8;
 VAR_8->txff_pg_num = VAR_9->txff_size >> 7;
 VAR_8->rsvd_pg_num = VAR_8->rsvd_drv_pg_num +
      VAR_5 +
      VAR_6 +
      VAR_4 +
      VAR_2 +
      VAR_3 +
      VAR_11;

 if (VAR_8->rsvd_pg_num > VAR_8->txff_pg_num)
  return -VAR_1;

 VAR_8->acq_pg_num = VAR_8->txff_pg_num - VAR_8->rsvd_pg_num;
 VAR_8->rsvd_boundary = VAR_8->txff_pg_num - VAR_8->rsvd_pg_num;

 VAR_10 = VAR_8->txff_pg_num;
 VAR_10 -= VAR_11;
 VAR_8->rsvd_csibuf_addr = VAR_10;
 VAR_10 -= VAR_3;
 VAR_8->rsvd_fw_txbuf_addr = VAR_10;
 VAR_10 -= VAR_2;
 VAR_8->rsvd_cpu_instr_addr = VAR_10;
 VAR_10 -= VAR_4;
 VAR_8->rsvd_h2cq_addr = VAR_10;
 VAR_10 -= VAR_6;
 VAR_8->rsvd_h2c_sta_info_addr = VAR_10;
 VAR_10 -= VAR_5;
 VAR_8->rsvd_h2c_info_addr = VAR_10;
 VAR_10 -= VAR_8->rsvd_drv_pg_num;
 VAR_8->rsvd_drv_addr = VAR_10;

 if (VAR_8->rsvd_boundary != VAR_8->rsvd_drv_addr) {
  FUNC_0(VAR_7, "wrong rsvd driver address\n");
  return -VAR_0;
 }

 return 0;
}

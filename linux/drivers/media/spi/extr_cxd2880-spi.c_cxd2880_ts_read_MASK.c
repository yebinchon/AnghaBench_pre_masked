
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cxd2880_ts_buf_info {int pkt_num; } ;
struct cxd2880_dvb_spi {int ts_buf; int demux; int spi; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct cxd2880_ts_buf_info*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(void *VAR_2)
{
 struct cxd2880_dvb_spi *VAR_3 = ((void*)0);
 struct cxd2880_ts_buf_info VAR_4;
 ktime_t VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_3 = VAR_2;
 if (!VAR_3) {
  FUNC_8("invalid arg\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_3->spi);
 if (VAR_7) {
  FUNC_8("set_clear_ts_buffer failed\n");
  return VAR_7;
 }

 VAR_5 = FUNC_5();
 while (!FUNC_4()) {
  VAR_7 = FUNC_2(VAR_3->spi,
            &VAR_4);
  if (VAR_7) {
   FUNC_8("spi_read_ts_buffer_info error\n");
   return VAR_7;
  }

  if (VAR_4.pkt_num > VAR_1) {
   for (VAR_6 = 0; VAR_6 < VAR_4.pkt_num / VAR_1; VAR_6++) {
    FUNC_1(VAR_3->spi,
          VAR_3->ts_buf,
          VAR_1);
    FUNC_3(&VAR_3->demux,
       VAR_3->ts_buf,
       VAR_1 * 188);
   }
   VAR_5 = FUNC_5();
  } else if ((VAR_4.pkt_num > 0) &&
      (FUNC_7(FUNC_6(FUNC_5(), VAR_5)) >= 500)) {
   FUNC_1(VAR_3->spi,
         VAR_3->ts_buf,
         VAR_4.pkt_num);
   FUNC_3(&VAR_3->demux,
      VAR_3->ts_buf,
      VAR_4.pkt_num * 188);
   VAR_5 = FUNC_5();
  } else {
   FUNC_9(10000, 11000);
  }
 }

 return 0;
}

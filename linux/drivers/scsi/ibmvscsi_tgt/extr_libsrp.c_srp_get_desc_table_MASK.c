
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u64 ;
struct srp_indirect_buf {int len; } ;
struct srp_direct_buf {int len; } ;
struct srp_cmd {int buf_fmt; int add_cdb_len; int * add_data; } ;
typedef int s8 ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct srp_cmd *VAR_5, enum dma_data_direction *VAR_6,
         u64 *VAR_7)
{
 struct srp_indirect_buf *VAR_8;
 struct srp_direct_buf *VAR_9;
 uint VAR_10;
 int VAR_11;






 FUNC_1(!FUNC_2(VAR_5->add_data[0], (s8)0)
       && !FUNC_2(VAR_5->add_data[0], (u8)0));

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);

 VAR_11 = 0;
 *VAR_7 = 0;

 *VAR_6 = VAR_1;

 if (VAR_5->buf_fmt & 0xf)
  *VAR_6 = VAR_0;
 else if (VAR_5->buf_fmt >> 4)
  *VAR_6 = VAR_2;

 VAR_10 = VAR_5->add_cdb_len & ~3;
 if (((VAR_5->buf_fmt & 0xf) == VAR_3) ||
     ((VAR_5->buf_fmt >> 4) == VAR_3)) {
  VAR_9 = (struct srp_direct_buf *)(VAR_5->add_data
            + VAR_10);
  *VAR_7 = FUNC_3(VAR_9->len);
 } else if (((VAR_5->buf_fmt & 0xf) == VAR_4) ||
     ((VAR_5->buf_fmt >> 4) == VAR_4)) {
  VAR_8 = (struct srp_indirect_buf *)(VAR_5->add_data
        + VAR_10);

  *VAR_7 = FUNC_3(VAR_8->len);
 }
 return VAR_11;
}

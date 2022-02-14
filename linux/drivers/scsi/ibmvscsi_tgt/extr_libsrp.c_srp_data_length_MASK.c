
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u64 ;
struct srp_indirect_buf {int len; } ;
struct srp_direct_buf {int len; } ;
struct srp_cmd {int add_cdb_len; int buf_fmt; int add_data; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct srp_cmd*) ;
 int FUNC_2 (char*,int) ;

u64 FUNC_3(struct srp_cmd *VAR_1, enum dma_data_direction VAR_2)
{
 struct srp_direct_buf *VAR_3;
 struct srp_indirect_buf *VAR_4;
 u64 VAR_5 = 0;
 uint VAR_6 = VAR_1->add_cdb_len & ~3;
 u8 VAR_7;

 if (VAR_2 == VAR_0) {
  VAR_7 = VAR_1->buf_fmt >> 4;
 } else {
  VAR_7 = VAR_1->buf_fmt & ((1U << 4) - 1);
  VAR_6 += FUNC_1(VAR_1);
 }

 switch (VAR_7) {
 case 128:
  break;
 case 130:
  VAR_3 = (struct srp_direct_buf *)(VAR_1->add_data + VAR_6);
  VAR_5 = FUNC_0(VAR_3->len);
  break;
 case 129:
  VAR_4 = (struct srp_indirect_buf *)(VAR_1->add_data + VAR_6);
  VAR_5 = FUNC_0(VAR_4->len);
  break;
 default:
  FUNC_2("invalid data format %x\n", VAR_7);
  break;
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct srp_indirect_buf {int dummy; } ;
struct srp_direct_buf {int dummy; } ;
struct srp_cmd {int buf_fmt; int data_out_desc_cnt; } ;





 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct srp_cmd *VAR_0)
{
 int VAR_1 = 0;
 u8 VAR_2 = VAR_0->buf_fmt >> 4;

 switch (VAR_2) {
 case 128:
  break;
 case 130:
  VAR_1 = sizeof(struct srp_direct_buf);
  break;
 case 129:
  VAR_1 = sizeof(struct srp_indirect_buf) +
   sizeof(struct srp_direct_buf) * VAR_0->data_out_desc_cnt;
  break;
 default:
  FUNC_0("client error. Invalid data_out_format %x\n", VAR_2);
  break;
 }
 return VAR_1;
}

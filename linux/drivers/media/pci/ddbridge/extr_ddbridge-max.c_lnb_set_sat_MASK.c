
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_diseqc_master_cmd {int* msg; int msg_len; } ;
struct ddb {int dummy; } ;


 int FUNC_0 (struct ddb*,int,int,struct dvb_diseqc_master_cmd*) ;

__attribute__((used)) static int FUNC_1(struct ddb *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
         u32 VAR_5)
{
 struct dvb_diseqc_master_cmd VAR_6 = {
  .msg = {0xe0, 0x10, 0x38, 0xf0, 0x00, 0x00},
  .msg_len = 4
 };
 VAR_6.msg[3] = 0xf0 | (((VAR_3 << 2) & 0x0c) | (VAR_4 ? 1 : 0) |
  (VAR_5 ? 2 : 0));
 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6);
}

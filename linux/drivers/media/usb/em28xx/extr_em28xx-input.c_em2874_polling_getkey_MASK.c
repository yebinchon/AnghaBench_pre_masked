
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct em28xx_ir_poll_result {int toggle_bit; int read_count; int scancode; int protocol; } ;
struct em28xx_IR {int rc_proto; struct em28xx* dev; } ;
struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int ,int ,int*,int) ;} ;
typedef int msg ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int,int *) ;
 int FUNC_3 (struct em28xx*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct em28xx_IR *VAR_4,
     struct em28xx_ir_poll_result *VAR_5)
{
 struct em28xx *VAR_6 = VAR_4->dev;
 int VAR_7;
 u8 VAR_8[5] = { 0, 0, 0, 0, 0 };





 VAR_7 = VAR_6->em28xx_read_reg_req_len(VAR_6, 0, VAR_0,
       VAR_8, sizeof(VAR_8));
 if (VAR_7 < 0)
  return VAR_7;


 VAR_5->toggle_bit = (VAR_8[0] >> 7);


 VAR_5->read_count = (VAR_8[0] & 0x7f);





 switch (VAR_4->rc_proto) {
 case 129:
  VAR_5->protocol = VAR_1;
  VAR_5->scancode = FUNC_0(VAR_8[1], VAR_8[2]);
  break;

 case 130:
  VAR_5->scancode = FUNC_2(VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4],
         &VAR_5->protocol);
  break;

 case 128:
  VAR_5->protocol = VAR_2;
  VAR_5->scancode = FUNC_1(VAR_8[1], VAR_8[2]);
  break;

 default:
  VAR_5->protocol = VAR_3;
  VAR_5->scancode = (VAR_8[1] << 24) | (VAR_8[2] << 16) |
     (VAR_8[3] << 8) | VAR_8[4];
  break;
 }

 return 0;
}

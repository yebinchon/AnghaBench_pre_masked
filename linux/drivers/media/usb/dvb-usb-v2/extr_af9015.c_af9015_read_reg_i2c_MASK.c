
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct req_t {scalar_t__ member_1; int member_4; int member_5; scalar_t__* member_6; int addr_len; int member_3; int member_2; int member_0; } ;
struct dvb_usb_device {int dummy; } ;
struct af9015_state {scalar_t__* af9013_i2c_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 struct af9015_state* FUNC_1 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1, u8 VAR_2, u16 VAR_3,
          u8 *VAR_4)
{
 struct af9015_state *VAR_5 = FUNC_1(VAR_1);
 struct req_t VAR_6 = {VAR_0, VAR_2, VAR_3, 0, 1, 1, VAR_4};

 if (VAR_2 == VAR_5->af9013_i2c_addr[0] ||
     VAR_2 == VAR_5->af9013_i2c_addr[1])
  VAR_6.addr_len = 3;

 return FUNC_0(VAR_1, &VAR_6);
}

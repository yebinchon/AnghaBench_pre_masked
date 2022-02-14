
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ican3_msg {int* data; void* len; int spec; } ;
struct ican3_dev {scalar_t__ fwtype; } ;
typedef int msg ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (struct ican3_msg*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ican3_dev *VAR_6, u8 VAR_7)
{
 struct ican3_msg VAR_8;

 if (VAR_6->fwtype == VAR_2) {
  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.spec = VAR_4;
  VAR_8.len = FUNC_0(2);
  VAR_8.data[0] = 0x00;
  VAR_8.data[1] = VAR_7;
 } else if (VAR_6->fwtype == VAR_1) {
  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.spec = VAR_5;
  VAR_8.len = FUNC_0(4);
  VAR_8.data[0] = VAR_3;
  VAR_8.data[1] = 0x00;
  VAR_8.data[2] = 0x00;
  VAR_8.data[3] = VAR_7;
 } else {
  return -VAR_0;
 }
 return FUNC_1(VAR_6, &VAR_8);
}

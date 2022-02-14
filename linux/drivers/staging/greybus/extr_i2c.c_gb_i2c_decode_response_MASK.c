
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct i2c_msg {int flags; int len; int buf; } ;
struct gb_i2c_transfer_response {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct i2c_msg *VAR_1, u32 VAR_2,
       struct gb_i2c_transfer_response *VAR_3)
{
 struct i2c_msg *VAR_4 = VAR_1;
 u8 *VAR_5;
 u32 VAR_6;

 if (!VAR_3)
  return;
 VAR_5 = VAR_3->data;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4->flags & VAR_0) {
   FUNC_0(VAR_4->buf, VAR_5, VAR_4->len);
   VAR_5 += VAR_4->len;
  }
  VAR_4++;
 }
}

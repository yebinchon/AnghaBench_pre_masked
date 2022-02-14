
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct urb {int actual_length; scalar_t__ transfer_buffer; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0, __le16 VAR_1)
{
 static const u8 VAR_2[4] = { 0xDE, 0xAD, 0xBE, 0xEF };
 u32 VAR_3 = VAR_0->actual_length % FUNC_0(VAR_1);

 if (((VAR_3 == 5) || (VAR_3 == 6)) &&
     !FUNC_1(((u8 *)VAR_0->transfer_buffer) + VAR_0->actual_length - 4,
      VAR_2, 4)) {
  VAR_0->actual_length -= 4;
 }
}

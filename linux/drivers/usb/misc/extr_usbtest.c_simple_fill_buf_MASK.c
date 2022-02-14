
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct urb {unsigned int transfer_buffer_length; int pipe; int dev; int * transfer_buffer; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 unsigned VAR_2;
 u8 *VAR_3 = VAR_1->transfer_buffer;
 unsigned VAR_4 = VAR_1->transfer_buffer_length;
 unsigned VAR_5;

 switch (VAR_0) {
 default:

 case 0:
  FUNC_1(VAR_3, 0, VAR_4);
  break;
 case 1:
  VAR_5 = FUNC_0(VAR_1->dev, VAR_1->pipe);
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
   *VAR_3++ = (u8) ((VAR_2 % VAR_5) % 63);
  break;
 }
}

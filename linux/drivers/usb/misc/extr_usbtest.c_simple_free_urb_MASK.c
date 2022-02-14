
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; scalar_t__ transfer_buffer; scalar_t__ transfer_dma; scalar_t__ transfer_buffer_length; int dev; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1->transfer_buffer);

 if (VAR_1->transfer_flags & VAR_0)
  FUNC_2(
   VAR_1->dev,
   VAR_1->transfer_buffer_length + VAR_2,
   VAR_1->transfer_buffer - VAR_2,
   VAR_1->transfer_dma - VAR_2);
 else
  FUNC_1(VAR_1->transfer_buffer - VAR_2);
 FUNC_3(VAR_1);
}

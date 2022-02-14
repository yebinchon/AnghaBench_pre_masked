
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer_length; int transfer_dma; } ;


 unsigned int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct urb *VAR_0)
{
 return FUNC_0(VAR_0->transfer_dma, VAR_0->transfer_buffer_length);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int dma_callback_data; int (* dma_callback ) (int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u16 VAR_1, void *VAR_2)
{
 if (VAR_0.dma_callback)
  VAR_0.dma_callback(VAR_0.dma_callback_data);
}

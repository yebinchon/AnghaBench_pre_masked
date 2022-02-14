
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macb {size_t rx_buffer_size; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct macb*) ;
 int FUNC_1 (TYPE_1__*,char*,int,...) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct macb *VAR_2, size_t VAR_3)
{
 if (!FUNC_0(VAR_2)) {
  VAR_2->rx_buffer_size = VAR_0;
 } else {
  VAR_2->rx_buffer_size = VAR_3;

  if (VAR_2->rx_buffer_size % VAR_1) {
   FUNC_1(VAR_2->dev,
       "RX buffer must be multiple of %d bytes, expanding\n",
       VAR_1);
   VAR_2->rx_buffer_size =
    FUNC_2(VAR_2->rx_buffer_size, VAR_1);
  }
 }

 FUNC_1(VAR_2->dev, "mtu [%u] rx_buffer_size [%zu]\n",
     VAR_2->dev->mtu, VAR_2->rx_buffer_size);
}

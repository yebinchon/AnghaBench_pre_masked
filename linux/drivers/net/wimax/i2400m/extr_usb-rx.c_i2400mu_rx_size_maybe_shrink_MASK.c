
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400mu {int rx_size_cnt; size_t rx_size_acc; int rx_size; scalar_t__ rx_size_auto_shrink; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int,struct device*,char*,size_t,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static
void FUNC_2(struct i2400mu *VAR_0)
{
 const size_t VAR_1 = 512;
 struct device *VAR_2 = &VAR_0->usb_iface->dev;

 if (FUNC_1(VAR_0->rx_size_cnt >= 100
       && VAR_0->rx_size_auto_shrink)) {
  size_t VAR_3 =
   VAR_0->rx_size_acc / VAR_0->rx_size_cnt;
  size_t VAR_4 = VAR_0->rx_size / 2;
  if (VAR_3 < VAR_4) {
   if (VAR_4 % VAR_1 == 0) {
    VAR_4 -= 8;
    FUNC_0(1, VAR_2,
      "RX: expected size shrank to %zu "
      "[adjusted -8] from %zu\n",
      VAR_4, VAR_0->rx_size);
   } else
    FUNC_0(1, VAR_2,
      "RX: expected size shrank to %zu "
      "from %zu\n",
      VAR_4, VAR_0->rx_size);
   VAR_0->rx_size = VAR_4;
   VAR_0->rx_size_cnt = 0;
   VAR_0->rx_size_acc = VAR_0->rx_size;
  }
 }
}

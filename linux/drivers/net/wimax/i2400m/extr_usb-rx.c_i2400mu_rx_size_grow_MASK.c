
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400mu {int rx_size; TYPE_1__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int,struct device*,char*,size_t,int) ;

__attribute__((used)) static
size_t FUNC_1(struct i2400mu *VAR_0)
{
 struct device *VAR_1 = &VAR_0->usb_iface->dev;
 size_t VAR_2;
 const size_t VAR_3 = 512;

 VAR_2 = 2 * VAR_0->rx_size;
 if (VAR_2 % VAR_3 == 0) {
  VAR_2 -= 8;
  FUNC_0(1, VAR_1,
    "RX: expected size grew to %zu [adjusted -8] "
    "from %zu\n",
    VAR_2, VAR_0->rx_size);
 } else
  FUNC_0(1, VAR_1,
    "RX: expected size grew to %zu from %zu\n",
    VAR_2, VAR_0->rx_size);
 return VAR_2;
}

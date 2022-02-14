
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_6__ {TYPE_2__* spi; } ;
struct ad7192_state {int mclk; TYPE_3__ sd; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct ad7192_state *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->sd.spi->dev.of_node;
 unsigned int VAR_7;

 VAR_7 = VAR_2;


 if (FUNC_0(VAR_5->mclk) == -VAR_4) {
  if (FUNC_1(VAR_6, "adi,int-clock-output-enable"))
   VAR_7 = VAR_3;
 } else {
  if (FUNC_1(VAR_6, "adi,clock-xtal"))
   VAR_7 = VAR_0;
  else
   VAR_7 = VAR_1;
 }

 return VAR_7;
}

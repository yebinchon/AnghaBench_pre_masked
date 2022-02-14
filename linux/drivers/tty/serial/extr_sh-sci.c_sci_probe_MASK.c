
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fifosize; scalar_t__ type; } ;
struct sci_port {TYPE_1__ port; } ;
struct TYPE_6__ {struct plat_sci_port* platform_data; scalar_t__ of_node; } ;
struct platform_device {unsigned int id; TYPE_2__ dev; } ;
struct plat_sci_port {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct sci_port*) ;
 struct plat_sci_port* FUNC_6 (struct platform_device*,unsigned int*) ;
 struct sci_port* VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,unsigned int,struct plat_sci_port*,struct sci_port*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct plat_sci_port *VAR_9;
 struct sci_port *VAR_10;
 unsigned int VAR_11;
 int VAR_12;






 if (FUNC_4(VAR_8))
  return FUNC_7(VAR_8);

 if (VAR_8->dev.of_node) {
  VAR_9 = FUNC_6(VAR_8, &VAR_11);
  if (VAR_9 == ((void*)0))
   return -VAR_0;
 } else {
  VAR_9 = VAR_8->dev.platform_data;
  if (VAR_9 == ((void*)0)) {
   FUNC_1(&VAR_8->dev, "no platform data supplied\n");
   return -VAR_0;
  }

  VAR_11 = VAR_8->id;
 }

 VAR_10 = &VAR_6[VAR_11];
 FUNC_5(VAR_8, VAR_10);

 VAR_12 = FUNC_8(VAR_8, VAR_11, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 if (VAR_10->port.fifosize > 1) {
  VAR_12 = FUNC_2(&VAR_8->dev, &VAR_5);
  if (VAR_12)
   return VAR_12;
 }
 if (VAR_10->port.type == VAR_2 || VAR_10->port.type == VAR_3 ||
     VAR_10->port.type == VAR_1) {
  VAR_12 = FUNC_2(&VAR_8->dev, &VAR_4);
  if (VAR_12) {
   if (VAR_10->port.fifosize > 1) {
    FUNC_3(&VAR_8->dev,
         &VAR_5);
   }
   return VAR_12;
  }
 }





 VAR_7 |= FUNC_0(VAR_11);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int * dev; int * ops; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int nr; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 struct uart_port* VAR_3 ;
 int FUNC_1 (TYPE_1__*,struct uart_port*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct uart_port *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 <= 0)
  return -VAR_0;

 VAR_1.nr = VAR_6;
 VAR_8 = FUNC_2(&VAR_1);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = &VAR_3[VAR_7];
  VAR_5->ops = &VAR_2;
  VAR_5->dev = &VAR_4->dev;

  VAR_8 = FUNC_1(&VAR_1, VAR_5);
  if (VAR_8 < 0) {
   VAR_5->dev = ((void*)0);
   break;
  }
 }

 if (VAR_7 == 0 && VAR_8 < 0) {
  FUNC_3(&VAR_1);
  return VAR_8;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {TYPE_1__* data; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq_handler ) (struct s3c_rtc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s3c_rtc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct s3c_rtc *VAR_4 = (struct s3c_rtc *)VAR_3;

 if (VAR_4->data->irq_handler)
  VAR_4->data->irq_handler(VAR_4, VAR_1);

 return VAR_0;
}

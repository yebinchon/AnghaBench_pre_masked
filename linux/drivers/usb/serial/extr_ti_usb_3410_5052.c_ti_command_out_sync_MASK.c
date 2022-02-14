
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_device {TYPE_1__* td_serial; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ti_device *VAR_3, __u8 VAR_4,
 __u16 VAR_5, __u16 VAR_6, __u8 *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3->td_serial->dev,
  FUNC_1(VAR_3->td_serial->dev, 0), VAR_4,
  (VAR_2 | VAR_1 | VAR_0),
  VAR_6, VAR_5, VAR_7, VAR_8, 1000);

 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}

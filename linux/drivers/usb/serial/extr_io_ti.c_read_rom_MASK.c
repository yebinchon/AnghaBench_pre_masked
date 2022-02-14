
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ TiMode; } ;
struct edgeport_serial {int TI_I2C_Type; TYPE_2__* serial; TYPE_1__ product_info; } ;
typedef int __u8 ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct edgeport_serial*,int,int,int *) ;
 int FUNC_1 (int ,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct edgeport_serial *VAR_1,
    int VAR_2, int VAR_3, __u8 *VAR_4)
{
 int VAR_5;

 if (VAR_1->product_info.TiMode == VAR_0) {
  VAR_5 = FUNC_1(VAR_1->serial->dev,
            VAR_2,
            VAR_3,
            VAR_1->TI_I2C_Type,
            VAR_4);
 } else {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3,
        VAR_4);
 }
 return VAR_5;
}

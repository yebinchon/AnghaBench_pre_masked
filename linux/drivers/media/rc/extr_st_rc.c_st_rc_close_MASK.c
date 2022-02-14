
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rc_device {scalar_t__ rx_base; } ;
struct rc_dev {struct st_rc_device* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_2)
{
 struct st_rc_device *VAR_3 = VAR_2->priv;

 FUNC_0(0x00, VAR_3->rx_base + VAR_0);
 FUNC_0(0x00, VAR_3->rx_base + VAR_1);
}

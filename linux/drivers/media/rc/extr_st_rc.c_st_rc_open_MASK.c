
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rc_device {scalar_t__ rx_base; } ;
struct rc_dev {struct st_rc_device* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_3)
{
 struct st_rc_device *VAR_4 = VAR_3->priv;
 unsigned long VAR_5;
 FUNC_1(VAR_5);

 FUNC_2(VAR_1, VAR_4->rx_base + VAR_2);
 FUNC_2(0x01, VAR_4->rx_base + VAR_0);
 FUNC_0(VAR_5);

 return 0;
}

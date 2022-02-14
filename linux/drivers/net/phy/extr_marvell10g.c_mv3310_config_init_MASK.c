
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(struct phy_device *VAR_6)
{

 if (VAR_6->interface != VAR_4 &&
     VAR_6->interface != VAR_2 &&
     VAR_6->interface != VAR_5 &&
     VAR_6->interface != VAR_3 &&
     VAR_6->interface != VAR_1)
  return -VAR_0;

 return 0;
}

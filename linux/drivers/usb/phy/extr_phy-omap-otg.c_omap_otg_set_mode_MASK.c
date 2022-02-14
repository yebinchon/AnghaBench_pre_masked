
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_device {int id; scalar_t__ vbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct otg_device*,int) ;

__attribute__((used)) static void FUNC_1(struct otg_device *VAR_4)
{
 if (!VAR_4->id && VAR_4->vbus)

  FUNC_0(VAR_4, VAR_3 | VAR_2);
 else if (VAR_4->vbus)

  FUNC_0(VAR_4, VAR_0);
 else if (!VAR_4->id)

  FUNC_0(VAR_4, VAR_3 | VAR_1);
}

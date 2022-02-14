
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ usecount; int owner; int (* _put_device ) (struct mtd_info*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*) ;

void FUNC_3(struct mtd_info *VAR_0)
{
 --VAR_0->usecount;
 FUNC_0(VAR_0->usecount < 0);

 if (VAR_0->_put_device)
  VAR_0->_put_device(VAR_0);

 FUNC_1(VAR_0->owner);
}

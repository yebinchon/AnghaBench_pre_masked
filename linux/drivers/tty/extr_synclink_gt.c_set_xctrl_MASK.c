
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int xctrl; int lock; int device_name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct slgt_info*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct slgt_info *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(("%s set_xctrl=%x)\n", VAR_1->device_name, VAR_2));
 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_1->xctrl = VAR_2;
 FUNC_3(VAR_1, VAR_0, VAR_2);
 FUNC_2(&VAR_1->lock, VAR_3);
 return 0;
}

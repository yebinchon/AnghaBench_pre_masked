
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_dev {struct vme_bridge* bridge; } ;
struct vme_bridge {int num; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(struct vme_dev *VAR_1)
{
 struct vme_bridge *VAR_2;

 VAR_2 = VAR_1->bridge;
 if (!VAR_2) {
  FUNC_0("Can't find VME bus\n");
  return -VAR_0;
 }

 return VAR_2->num;
}

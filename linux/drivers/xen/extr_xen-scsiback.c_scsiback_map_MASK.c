
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend; } ;
struct vscsibk_info {struct xenbus_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct vscsibk_info*,unsigned int,unsigned int) ;
 int FUNC_1 (struct xenbus_device*,int,char*,int ) ;
 int FUNC_2 (int ,int ,char*,char*,unsigned int*,char*,char*,unsigned int*,int *) ;

__attribute__((used)) static int FUNC_3(struct vscsibk_info *VAR_1)
{
 struct xenbus_device *VAR_2 = VAR_1->dev;
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_2->otherend,
   "ring-ref", "%u", &VAR_3,
   "event-channel", "%u", &VAR_4, ((void*)0));
 if (VAR_5) {
  FUNC_1(VAR_2, VAR_5, "reading %s ring", VAR_2->otherend);
  return VAR_5;
 }

 return FUNC_0(VAR_1, VAR_3, VAR_4);
}

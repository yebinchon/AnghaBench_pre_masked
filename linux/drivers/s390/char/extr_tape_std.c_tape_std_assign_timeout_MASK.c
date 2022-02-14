
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tape_request {struct tape_device* device; } ;
struct tape_device {int cdev_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,...) ;
 struct tape_request* FUNC_2 (int ,struct timer_list*,int ) ;
 struct tape_request* VAR_0 ;
 int FUNC_3 (struct tape_device*,struct tape_request*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_2)
{
 struct tape_request * VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_1);
 struct tape_device * VAR_4 = VAR_3->device;
 int VAR_5;

 FUNC_0(!VAR_4);

 FUNC_1(3, "%08x: Assignment timeout. Device busy.\n",
   VAR_4->cdev_id);
 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if(VAR_5)
  FUNC_1(3, "(%08x): Assign timeout: Cancel failed with rc = "
     "%i\n", VAR_4->cdev_id, VAR_5);
}

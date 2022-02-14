
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_device {scalar_t__ address; int dev; } ;
struct scm_blk_dev {int dummy; } ;
typedef enum scm_event { ____Placeholder_scm_event } scm_event ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct scm_device*) ;
 struct scm_blk_dev* FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (struct scm_blk_dev*) ;

__attribute__((used)) static void FUNC_5(struct scm_device *VAR_0, enum scm_event VAR_1)
{
 struct scm_blk_dev *VAR_2 = FUNC_2(&VAR_0->dev);

 switch (VAR_1) {
 case 128:
  FUNC_3("%lx: The capabilities of the SCM increment changed\n",
   (unsigned long) VAR_0->address);
  FUNC_0(2, "State changed");
  FUNC_1(2, VAR_0);
  break;
 case 129:
  FUNC_0(2, "Increment available");
  FUNC_1(2, VAR_0);
  FUNC_4(VAR_2);
  break;
 }
}

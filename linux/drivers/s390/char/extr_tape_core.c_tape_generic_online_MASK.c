
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_discipline {int (* setup_device ) (struct tape_device*) ;int owner; int (* cleanup_device ) (struct tape_device*) ;} ;
struct tape_device {scalar_t__ tape_state; scalar_t__ cdev_id; struct tape_discipline* discipline; int lb_timeout; } ;


 int FUNC_0 (int,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tape_device*) ;
 int FUNC_3 (struct tape_device*) ;
 int FUNC_4 (struct tape_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct tape_device*) ;
 int FUNC_6 (struct tape_device*,int ) ;
 int FUNC_7 (struct tape_device*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct tape_device *VAR_4,
     struct tape_discipline *VAR_5)
{
 int VAR_6;

 FUNC_0(6, "tape_enable_device(%p, %p)\n", VAR_4, VAR_5);

 if (VAR_4->tape_state != VAR_1) {
  FUNC_0(3, "Tapestate not INIT (%d)\n", VAR_4->tape_state);
  return -VAR_0;
 }

 FUNC_8(&VAR_4->lb_timeout, VAR_3, 0);


 VAR_4->discipline = VAR_5;
 if (!FUNC_9(VAR_5->owner)) {
  return -VAR_0;
 }

 VAR_6 = VAR_5->setup_device(VAR_4);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto out_discipline;

 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6)
  goto out_minor;

 FUNC_6(VAR_4, VAR_2);

 FUNC_0(3, "(%08x): Drive set online\n", VAR_4->cdev_id);

 return 0;

out_minor:
 FUNC_5(VAR_4);
out_discipline:
 VAR_4->discipline->cleanup_device(VAR_4);
 VAR_4->discipline = ((void*)0);
out:
 FUNC_1(VAR_5->owner);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {struct tape_device* modeset_byte; int ref_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,struct tape_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tape_device*) ;

void
FUNC_4(struct tape_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->ref_count);
 FUNC_1(4, "tape_put_device(%p) -> %i\n", VAR_0, VAR_1);
 FUNC_0(VAR_1 < 0);
 if (VAR_1 == 0) {
  FUNC_3(VAR_0->modeset_byte);
  FUNC_3(VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int flags; int ** cdevs; int minor_start; int major; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_1 ;

void FUNC_3(struct tty_driver *VAR_2, unsigned VAR_3)
{
 FUNC_2(VAR_1,
  FUNC_0(VAR_2->major, VAR_2->minor_start) + VAR_3);
 if (!(VAR_2->flags & VAR_0)) {
  FUNC_1(VAR_2->cdevs[VAR_3]);
  VAR_2->cdevs[VAR_3] = ((void*)0);
 }
}

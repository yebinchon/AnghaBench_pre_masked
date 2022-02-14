
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {int * discdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct tape_device*) ;

__attribute__((used)) static void
FUNC_3(struct tape_device *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);

 FUNC_1(VAR_1->discdata);
 VAR_1->discdata = ((void*)0);
}

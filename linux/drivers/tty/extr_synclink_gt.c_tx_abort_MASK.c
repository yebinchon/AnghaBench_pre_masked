
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int lock; int device_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_4(struct slgt_info *VAR_0)
{
  unsigned long VAR_1;
 FUNC_0(("%s tx_abort\n", VAR_0->device_name));
 FUNC_1(&VAR_0->lock,VAR_1);
 FUNC_3(VAR_0);
 FUNC_2(&VAR_0->lock,VAR_1);
 return 0;
}

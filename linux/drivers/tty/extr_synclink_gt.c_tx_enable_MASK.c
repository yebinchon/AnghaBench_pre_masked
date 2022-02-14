
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int lock; scalar_t__ tx_enabled; int device_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_5(struct slgt_info *VAR_0, int VAR_1)
{
  unsigned long VAR_2;
 FUNC_0(("%s tx_enable(%d)\n", VAR_0->device_name, VAR_1));
 FUNC_1(&VAR_0->lock,VAR_2);
 if (VAR_1) {
  if (!VAR_0->tx_enabled)
   FUNC_3(VAR_0);
 } else {
  if (VAR_0->tx_enabled)
   FUNC_4(VAR_0);
 }
 FUNC_2(&VAR_0->lock,VAR_2);
 return 0;
}

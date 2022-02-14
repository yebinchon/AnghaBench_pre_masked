
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct vc_data*
FUNC_2(struct inode *VAR_2, int *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);

 FUNC_0();

 if (VAR_4 == 0) {
  VAR_4 = VAR_0;
  if (VAR_3)
   *VAR_3 = 1;
 } else {
  VAR_4--;
  if (VAR_3)
   *VAR_3 = 0;
 }
 return VAR_1[VAR_4].d;
}

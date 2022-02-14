
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct firmware {int size; int * data; } ;
struct _adapter {struct firmware* fw; TYPE_1__* pnetdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static u32 FUNC_1(struct _adapter *VAR_0, const u8 **VAR_1)
{
 const struct firmware **VAR_2 = &VAR_0->fw;

 if (VAR_0->fw->size > 200000) {
  FUNC_0(&VAR_0->pnetdev->dev, "r8172u: Badfw->size of %d\n",
   (int)VAR_0->fw->size);
  return 0;
 }
 *VAR_1 = (*VAR_2)->data;
 return (*VAR_2)->size;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int dummy; } ;
struct cxl {int slices; int afu_list_lock; struct cxl_afu** afu; TYPE_1__* guest; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cxl_afu*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cxl *VAR_5)
{
 struct cxl_afu *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;

 FUNC_3("Adapter reset request\n");
 FUNC_4(&VAR_5->afu_list_lock);
 for (VAR_7 = 0; VAR_7 < VAR_5->slices; VAR_7++) {
  if ((VAR_6 = VAR_5->afu[VAR_7])) {
   FUNC_2(VAR_6, VAR_0,
     VAR_3);
   FUNC_0(VAR_6);
  }
 }

 VAR_8 = FUNC_1(VAR_5->guest->handle);
 for (VAR_7 = 0; VAR_7 < VAR_5->slices; VAR_7++) {
  if (!VAR_8 && (VAR_6 = VAR_5->afu[VAR_7])) {
   FUNC_2(VAR_6, VAR_2,
     VAR_4);
   FUNC_2(VAR_6, VAR_1, 0);
  }
 }
 FUNC_5(&VAR_5->afu_list_lock);
 return VAR_8;
}

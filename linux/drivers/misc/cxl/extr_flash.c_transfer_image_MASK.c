
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_adapter_image {int dummy; } ;
struct cxl {int slices; TYPE_1__* guest; int * afu; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct cxl*,int,int *,struct cxl_adapter_image*) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (struct cxl*,int ) ;

__attribute__((used)) static int FUNC_5(struct cxl *VAR_5, int VAR_6,
   struct cxl_adapter_image *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;

 switch (VAR_6) {
 case 129:
  VAR_8 = FUNC_2(VAR_5, VAR_6,
    &VAR_2, VAR_7);
  if (VAR_8 < 0) {
   FUNC_3("resetting adapter\n");
   FUNC_1(VAR_5->guest->handle);
  }
  return VAR_8;

 case 128:
  VAR_8 = FUNC_2(VAR_5, VAR_6,
    &VAR_3, VAR_7);
  if (VAR_8 < 0) {
   FUNC_3("resetting adapter\n");
   FUNC_1(VAR_5->guest->handle);
   return VAR_8;
  }
  if (VAR_8 == 0) {
   FUNC_3("remove current afu\n");
   for (VAR_9 = 0; VAR_9 < VAR_5->slices; VAR_9++)
    FUNC_0(VAR_5->afu[VAR_9]);

   FUNC_3("resetting adapter\n");
   FUNC_1(VAR_5->guest->handle);
   VAR_8 = FUNC_4(VAR_5, VAR_0);
   VAR_4 = 1;
  }
  return VAR_8;
 }

 return -VAR_1;
}

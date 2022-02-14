
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {TYPE_1__* guest; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_5, int *VAR_6)
{
 u64 VAR_7;
 int VAR_8 = 0;

 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5->guest->handle, &VAR_7);
 if (!VAR_8) {
  FUNC_0(VAR_7 != VAR_2 &&
   VAR_7 != VAR_1 &&
   VAR_7 != VAR_4 &&
   VAR_7 != VAR_3);
  *VAR_6 = VAR_7 & 0xffffffff;
 }
 return VAR_8;
}

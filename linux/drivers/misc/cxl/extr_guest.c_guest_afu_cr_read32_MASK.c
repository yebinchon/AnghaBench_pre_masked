
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct cxl_afu {int dummy; } ;


 int FUNC_0 (int,struct cxl_afu*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct cxl_afu *VAR_0, int VAR_1, u64 VAR_2,
   u32 *VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_0(4, VAR_0, VAR_1, VAR_2, &VAR_5);
 if (!VAR_4)
  *VAR_3 = (u32) VAR_5;
 return VAR_4;
}

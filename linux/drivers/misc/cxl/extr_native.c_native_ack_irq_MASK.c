
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cxl_context {int afu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct cxl_context*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cxl_context *VAR_1, u64 VAR_2, u64 VAR_3)
{
 FUNC_2(VAR_1, VAR_2);
 if (VAR_2)
  FUNC_0(VAR_1->afu, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_1->afu, VAR_3);

 return 0;
}

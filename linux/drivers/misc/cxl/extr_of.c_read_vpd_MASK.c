
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vpd ;
struct cxl_afu {int dummy; } ;
struct cxl {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cxl*,char*,size_t) ;
 int FUNC_2 (struct cxl_afu*,char*,size_t) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct cxl *VAR_0, struct cxl_afu *VAR_1)
{
 char VAR_2[256];
 int VAR_3;
 size_t VAR_4 = sizeof(VAR_2);

 FUNC_3(VAR_2, 0, VAR_4);

 if (VAR_0)
  VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_4);
 else
  VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_4);

 if (VAR_3 > 0) {
  FUNC_0(VAR_2, VAR_3);
  VAR_3 = 0;
 }
 return VAR_3;
}

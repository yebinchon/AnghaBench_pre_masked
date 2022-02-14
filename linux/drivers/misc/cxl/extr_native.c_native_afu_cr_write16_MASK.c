
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct cxl_afu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct cxl_afu*,int,int,int*) ;
 int FUNC_2 (struct cxl_afu*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct cxl_afu *VAR_0, int VAR_1, u64 VAR_2, u16 VAR_3)
{
 u64 VAR_4 = VAR_2 & ~0x3L;
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_4, &VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_7 = (VAR_2 & 0x3) * 8;
 FUNC_0(VAR_7 == 24);
 VAR_6 = 0xffff << VAR_7;
 VAR_5 = (VAR_5 & ~VAR_6) | (VAR_3 << VAR_7);

 VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_5);
 return VAR_8;
}

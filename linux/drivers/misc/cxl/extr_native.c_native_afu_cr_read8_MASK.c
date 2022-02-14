
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct cxl_afu {int dummy; } ;


 int FUNC_0 (struct cxl_afu*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct cxl_afu *VAR_0, int VAR_1, u64 VAR_2, u8 *VAR_3)
{
 u64 VAR_4 = VAR_2 & ~0x3L;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_5);
 if (!VAR_6)
  *VAR_3 = (VAR_5 >> ((VAR_2 & 0x3) * 8)) & 0xff;
 return VAR_6;
}

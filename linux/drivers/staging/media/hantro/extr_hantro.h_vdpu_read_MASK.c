
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hantro_dev {scalar_t__ dec_base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static inline u32 FUNC_2(struct hantro_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->dec_base + VAR_1);

 FUNC_1(6, "0x%04x = 0x%08x\n", VAR_1 / 4, VAR_2);
 return VAR_2;
}

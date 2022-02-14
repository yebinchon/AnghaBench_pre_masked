
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hantro_dev {scalar_t__ dec_base; } ;


 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct hantro_dev *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 FUNC_0(6, "0x%04x = 0x%08x\n", VAR_2 / 4, VAR_1);
 FUNC_1(VAR_1, VAR_0->dec_base + VAR_2);
}

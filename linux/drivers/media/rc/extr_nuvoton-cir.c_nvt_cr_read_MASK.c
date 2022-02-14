
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvt_dev {int cr_efdr; int cr_efir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct nvt_dev *VAR_0, u8 VAR_1)
{
 FUNC_1(VAR_1, VAR_0->cr_efir);
 return FUNC_0(VAR_0->cr_efdr);
}

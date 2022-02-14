
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ksz_device {int * regmap; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ksz_device *VAR_0, int VAR_1, int VAR_2,
          u32 VAR_3, bool VAR_4)
{
 FUNC_1(VAR_0->regmap[2], FUNC_0(VAR_1, VAR_2),
      VAR_3, VAR_4 ? VAR_3 : 0);
}

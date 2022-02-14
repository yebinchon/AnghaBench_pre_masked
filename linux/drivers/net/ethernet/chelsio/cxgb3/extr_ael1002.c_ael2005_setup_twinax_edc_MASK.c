
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct reg_val {int member_1; int member_2; int member_3; int const member_0; } ;
struct cphy {scalar_t__ priv; int * phy_cache; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct cphy*,struct reg_val const*) ;
 int FUNC_2 (struct cphy*,int ,int) ;
 int FUNC_3 (struct cphy*,int const,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_4, int VAR_5)
{
 static const struct reg_val VAR_6[] = {
  { 128, 0xc04a, 0xffff, 0x5a00 },
  { 0, 0, 0, 0 }
 };
 static const struct reg_val VAR_7[] = {
  { 128, 0xc014, 0xffff, 0xfe16 },
  { 128, 0xc015, 0xffff, 0xa000 },
  { 0, 0, 0, 0 }
 };
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_6);
 if (!VAR_9 && VAR_5 == VAR_3)
  VAR_9 = FUNC_1(VAR_4, VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_0(50);

 if (VAR_4->priv != VAR_2)
  VAR_9 = FUNC_2(VAR_4, VAR_0,
        VAR_1);
 if (VAR_9)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_1 / sizeof(u16) && !VAR_9; VAR_8 += 2)
  VAR_9 = FUNC_3(VAR_4, 128,
        VAR_4->phy_cache[VAR_8],
        VAR_4->phy_cache[VAR_8 + 1]);
 if (!VAR_9)
  VAR_4->priv = VAR_2;
 return VAR_9;
}

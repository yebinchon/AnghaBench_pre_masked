
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
 int FUNC_1 (struct cphy*,struct reg_val const*) ;
 int FUNC_2 (struct cphy*,int ,int) ;
 int FUNC_3 (struct cphy*,int const,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cphy *VAR_3)
{
 static const struct reg_val VAR_4[] = {
  { 128, 0xc003, 0xffff, 0x181 },
  { 128, 0xc010, 0xffff, 0x448a },
  { 128, 0xc04a, 0xffff, 0x5200 },
  { 0, 0, 0, 0 }
 };

 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_0(50);

 if (VAR_3->priv != VAR_2)
  VAR_6 = FUNC_2(VAR_3, VAR_0,
        VAR_1);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1 / sizeof(u16) && !VAR_6; VAR_5 += 2)
  VAR_6 = FUNC_3(VAR_3, 128,
        VAR_3->phy_cache[VAR_5],
        VAR_3->phy_cache[VAR_5 + 1]);
 if (!VAR_6)
  VAR_3->priv = VAR_2;
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qca8k_priv {int reg_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qca8k_priv*,int ,int) ;
 int FUNC_3 (struct qca8k_priv*,int ,int ,int const*,int ) ;

__attribute__((used)) static int
FUNC_4(struct qca8k_priv *VAR_1, const u8 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_1->reg_mutex);
 FUNC_3(VAR_1, VAR_4, VAR_3, VAR_2, 0);
 VAR_5 = FUNC_2(VAR_1, VAR_0, -1);
 FUNC_1(&VAR_1->reg_mutex);

 return VAR_5;
}

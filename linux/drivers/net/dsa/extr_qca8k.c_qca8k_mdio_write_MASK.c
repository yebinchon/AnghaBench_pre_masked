
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct qca8k_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct qca8k_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct qca8k_priv*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct qca8k_priv *VAR_7, int VAR_8, u32 VAR_9, u16 VAR_10)
{
 u32 VAR_11, VAR_12;

 if (VAR_9 >= VAR_5)
  return -VAR_0;




 VAR_11 = FUNC_4(VAR_8) % VAR_1;
 VAR_12 = VAR_2 | VAR_4 |
       VAR_6 | FUNC_1(VAR_11) |
       FUNC_2(VAR_9) |
       FUNC_0(VAR_10);

 FUNC_5(VAR_7, VAR_3, VAR_12);

 return FUNC_3(VAR_7, VAR_3,
  VAR_2);
}

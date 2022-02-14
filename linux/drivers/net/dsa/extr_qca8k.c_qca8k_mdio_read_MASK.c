
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qca8k_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct qca8k_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct qca8k_priv*,int ) ;
 int FUNC_5 (struct qca8k_priv*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct qca8k_priv *VAR_9, int VAR_10, u32 VAR_11)
{
 u32 VAR_12, VAR_13;

 if (VAR_11 >= VAR_7)
  return -VAR_0;




 VAR_12 = FUNC_3(VAR_10) % VAR_2;
 VAR_13 = VAR_3 | VAR_6 |
       VAR_8 | FUNC_0(VAR_12) |
       FUNC_1(VAR_11);

 FUNC_5(VAR_9, VAR_4, VAR_13);

 if (FUNC_2(VAR_9, VAR_4,
       VAR_3))
  return -VAR_1;

 VAR_13 = (FUNC_4(VAR_9, VAR_4) &
  VAR_5);

 return VAR_13;
}

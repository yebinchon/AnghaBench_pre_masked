
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int dummy; } ;
typedef enum qca8k_fdb_cmd { ____Placeholder_qca8k_fdb_cmd } qca8k_fdb_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct qca8k_priv*,int ,int) ;
 int FUNC_1 (struct qca8k_priv*,int ) ;
 int FUNC_2 (struct qca8k_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct qca8k_priv *VAR_7, enum qca8k_fdb_cmd VAR_8, int VAR_9)
{
 u32 VAR_10;


 VAR_10 = VAR_0;
 VAR_10 |= VAR_8;
 if (VAR_9 >= 0) {
  VAR_10 |= VAR_2;
  VAR_10 |= (VAR_9 & VAR_3) << VAR_4;
 }


 FUNC_2(VAR_7, VAR_6, VAR_10);


 if (FUNC_0(VAR_7, VAR_6, VAR_0))
  return -1;


 if (VAR_8 == VAR_5) {
  VAR_10 = FUNC_1(VAR_7, VAR_6);
  if (VAR_10 & VAR_1)
   return -1;
 }

 return 0;
}

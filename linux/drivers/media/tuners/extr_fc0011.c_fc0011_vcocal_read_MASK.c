
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fc0011_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc0011_priv*,int ,int *) ;
 int FUNC_1 (struct fc0011_priv*,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fc0011_priv *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;
 FUNC_2(10000, 20000);
 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_3);
 if (VAR_4)
  return VAR_4;

 return 0;
}

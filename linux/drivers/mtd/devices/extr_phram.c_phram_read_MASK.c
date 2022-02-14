
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int * priv; } ;
typedef int loff_t ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, u_char *VAR_4)
{
 u_char *VAR_5 = VAR_0->priv;

 FUNC_0(VAR_4, VAR_5 + VAR_1, VAR_2);
 *VAR_3 = VAR_2;
 return 0;
}

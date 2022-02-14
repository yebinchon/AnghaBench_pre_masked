
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {struct map_info* priv; } ;
struct map_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct map_info*,int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_1 (struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2, size_t *VAR_3, const u_char *VAR_4)
{
 struct map_info *VAR_5 = VAR_0->priv;

 FUNC_0(VAR_5, VAR_1, VAR_4, VAR_2);
 *VAR_3 = VAR_2;
 return 0;
}

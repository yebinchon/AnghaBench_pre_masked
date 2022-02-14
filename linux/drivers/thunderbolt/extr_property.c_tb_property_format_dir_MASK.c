
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_property_dir {int dummy; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (struct tb_property_dir const*,int *,int ,size_t) ;
 size_t FUNC_1 (struct tb_property_dir const*,int,size_t*) ;

ssize_t FUNC_2(const struct tb_property_dir *VAR_0, u32 *VAR_1,
          size_t VAR_2)
{
 ssize_t VAR_3;

 if (!VAR_1) {
  size_t VAR_4, VAR_5 = 0;

  VAR_4 = FUNC_1(VAR_0, 1, &VAR_5);
  return VAR_4 + VAR_5;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1, 0, VAR_2);
 return VAR_3 < 0 ? VAR_3 : 0;
}

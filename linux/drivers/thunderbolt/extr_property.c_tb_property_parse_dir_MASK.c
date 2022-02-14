
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_property_rootdir_entry {scalar_t__ magic; size_t length; } ;
struct tb_property_dir {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tb_property_dir* FUNC_0 (int const*,size_t,int ,size_t,int) ;

struct tb_property_dir *FUNC_1(const u32 *VAR_1,
           size_t VAR_2)
{
 const struct tb_property_rootdir_entry *VAR_3 =
  (const struct tb_property_rootdir_entry *)VAR_1;

 if (VAR_3->magic != VAR_0)
  return ((void*)0);
 if (VAR_3->length > VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2, 0, VAR_3->length,
           1);
}

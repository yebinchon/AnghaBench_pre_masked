
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct xfs_dir2_data_entry {scalar_t__* name; size_t namelen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(
 struct xfs_dir2_data_entry *VAR_2)
{
 uint8_t VAR_3 = VAR_2->name[VAR_2->namelen];

 if (VAR_3 >= VAR_0)
  return VAR_1;
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct xfs_dir2_data_entry {size_t namelen; scalar_t__* name; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_dir2_data_entry *VAR_1,
 uint8_t VAR_2)
{
 FUNC_0(VAR_2 < VAR_0);
 FUNC_0(VAR_1->namelen != 0);

 VAR_1->name[VAR_1->namelen] = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_data_free {int length; int offset; } ;
typedef struct xfs_dir2_data_free xfs_dir2_data_free_t ;
struct xfs_dir2_data_unused {int length; } ;
struct xfs_dir2_data_hdr {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

xfs_dir2_data_free_t *
FUNC_4(
 struct xfs_dir2_data_hdr *VAR_4,
 struct xfs_dir2_data_free *VAR_5,
 struct xfs_dir2_data_unused *VAR_6,
 int *VAR_7)
{
 xfs_dir2_data_free_t VAR_8;

 FUNC_0(VAR_4->magic == FUNC_3(VAR_1) ||
        VAR_4->magic == FUNC_3(VAR_0) ||
        VAR_4->magic == FUNC_3(VAR_3) ||
        VAR_4->magic == FUNC_3(VAR_2));

 VAR_8.length = VAR_6->length;
 VAR_8.offset = FUNC_2((char *)VAR_6 - (char *)VAR_4);




 if (FUNC_1(VAR_8.length) > FUNC_1(VAR_5[0].length)) {
  VAR_5[2] = VAR_5[1];
  VAR_5[1] = VAR_5[0];
  VAR_5[0] = VAR_8;
  *VAR_7 = 1;
  return &VAR_5[0];
 }
 if (FUNC_1(VAR_8.length) > FUNC_1(VAR_5[1].length)) {
  VAR_5[2] = VAR_5[1];
  VAR_5[1] = VAR_8;
  *VAR_7 = 1;
  return &VAR_5[1];
 }
 if (FUNC_1(VAR_8.length) > FUNC_1(VAR_5[2].length)) {
  VAR_5[2] = VAR_8;
  *VAR_7 = 1;
  return &VAR_5[2];
 }
 return ((void*)0);
}

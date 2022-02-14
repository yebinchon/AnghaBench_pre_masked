
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
typedef int uint8_t ;
struct xfs_dir2_sf_hdr {scalar_t__ i8count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static xfs_ino_t
FUNC_2(
 struct xfs_dir2_sf_hdr *VAR_0,
 uint8_t *VAR_1)
{
 if (VAR_0->i8count)
  return FUNC_1(VAR_1) & 0x00ffffffffffffffULL;
 else
  return FUNC_0(VAR_1);
}

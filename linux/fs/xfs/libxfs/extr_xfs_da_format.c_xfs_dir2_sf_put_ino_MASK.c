
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
typedef int uint8_t ;
struct xfs_dir2_sf_hdr {scalar_t__ i8count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_dir2_sf_hdr *VAR_0,
 uint8_t *VAR_1,
 xfs_ino_t VAR_2)
{
 FUNC_0((VAR_2 & 0xff00000000000000ULL) == 0);

 if (VAR_0->i8count)
  FUNC_2(VAR_2, VAR_1);
 else
  FUNC_1(VAR_2, VAR_1);
}

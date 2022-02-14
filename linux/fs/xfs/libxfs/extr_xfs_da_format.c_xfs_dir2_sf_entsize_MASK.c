
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_sf_hdr {scalar_t__ i8count; } ;
struct xfs_dir2_sf_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(
 struct xfs_dir2_sf_hdr *VAR_2,
 int VAR_3)
{
 int VAR_4 = sizeof(struct xfs_dir2_sf_entry);

 VAR_4 += VAR_3;
 VAR_4 += VAR_2->i8count ? VAR_1 : VAR_0;
 return VAR_4;
}

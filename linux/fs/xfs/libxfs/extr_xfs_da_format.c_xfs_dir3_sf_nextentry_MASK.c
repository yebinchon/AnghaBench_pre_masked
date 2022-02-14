
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_sf_hdr {int dummy; } ;
struct xfs_dir2_sf_entry {int namelen; } ;


 int FUNC_0 (struct xfs_dir2_sf_hdr*,int ) ;

__attribute__((used)) static struct xfs_dir2_sf_entry *
FUNC_1(
 struct xfs_dir2_sf_hdr *VAR_0,
 struct xfs_dir2_sf_entry *VAR_1)
{
 return (struct xfs_dir2_sf_entry *)
  ((char *)VAR_1 + FUNC_0(VAR_0, VAR_1->namelen));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
struct xfs_dir2_sf_hdr {int dummy; } ;
struct xfs_dir2_sf_entry {size_t namelen; int * name; } ;


 int FUNC_0 (struct xfs_dir2_sf_hdr*,int *) ;

__attribute__((used)) static xfs_ino_t
FUNC_1(
 struct xfs_dir2_sf_hdr *VAR_0,
 struct xfs_dir2_sf_entry *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->name[VAR_1->namelen]);
}

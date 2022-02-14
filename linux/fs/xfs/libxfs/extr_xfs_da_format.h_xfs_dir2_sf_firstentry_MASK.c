
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dir2_sf_hdr {int i8count; } ;
struct xfs_dir2_sf_entry {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct xfs_dir2_sf_entry *
FUNC_1(struct xfs_dir2_sf_hdr *VAR_0)
{
 return (struct xfs_dir2_sf_entry *)
  ((char *)VAR_0 + FUNC_0(VAR_0->i8count));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
struct TYPE_4__ {scalar_t__ di_aformat; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct TYPE_5__ {scalar_t__ if_data; } ;
struct xfs_ifork {int if_bytes; TYPE_2__ if_u1; } ;
struct TYPE_6__ {int count; } ;
struct xfs_attr_shortform {TYPE_3__ hdr; struct xfs_attr_sf_entry* list; } ;
struct xfs_attr_sf_hdr {int dummy; } ;
struct xfs_attr_sf_entry {scalar_t__ namelen; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xfs_attr_sf_entry* FUNC_1 (struct xfs_attr_sf_entry*) ;
 scalar_t__ VAR_2 ;
 struct xfs_ifork* FUNC_2 (struct xfs_inode*,int ) ;
 int * VAR_3 ;
 int FUNC_3 (int) ;

xfs_failaddr_t
FUNC_4(
 struct xfs_inode *VAR_4)
{
 struct xfs_attr_shortform *VAR_5;
 struct xfs_attr_sf_entry *VAR_6;
 struct xfs_attr_sf_entry *VAR_7;
 char *VAR_8;
 struct xfs_ifork *VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0(VAR_4->i_d.di_aformat == VAR_2);
 VAR_9 = FUNC_2(VAR_4, VAR_0);
 VAR_5 = (struct xfs_attr_shortform *)VAR_9->if_u1.if_data;
 VAR_11 = VAR_9->if_bytes;




 if (VAR_11 < sizeof(struct xfs_attr_sf_hdr))
  return VAR_3;

 VAR_8 = (char *)VAR_5 + VAR_11;


 VAR_6 = &VAR_5->list[0];
 for (VAR_10 = 0; VAR_10 < VAR_5->hdr.count; VAR_10++) {





  if (((char *)VAR_6 + sizeof(*VAR_6)) >= VAR_8)
   return VAR_3;


  if (VAR_6->namelen == 0)
   return VAR_3;






  VAR_7 = FUNC_1(VAR_6);
  if ((char *)VAR_7 > VAR_8)
   return VAR_3;






  if (VAR_6->flags & ~VAR_1)
   return VAR_3;






  if (FUNC_3(VAR_6->flags & VAR_1) > 1)
   return VAR_3;

  VAR_6 = VAR_7;
 }
 if ((void *)VAR_6 != (void *)VAR_8)
  return VAR_3;

 return ((void*)0);
}

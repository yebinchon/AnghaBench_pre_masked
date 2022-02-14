
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int i_mount; TYPE_3__* i_afp; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_23__ {int count; } ;
struct TYPE_26__ {TYPE_2__ hdr; TYPE_7__* list; } ;
typedef TYPE_5__ xfs_attr_shortform_t ;
struct TYPE_27__ {int entno; scalar_t__ hash; int namelen; int valuelen; int name; int flags; } ;
typedef TYPE_6__ xfs_attr_sf_sort_t ;
struct TYPE_28__ {int namelen; int valuelen; int flags; int nameval; } ;
typedef TYPE_7__ xfs_attr_sf_entry_t ;
struct TYPE_29__ {scalar_t__ bufsize; scalar_t__ seen_enough; int (* put_listent ) (TYPE_8__*,int ,int ,int,int) ;TYPE_4__* dp; TYPE_9__* cursor; } ;
typedef TYPE_8__ xfs_attr_list_context_t ;
struct TYPE_30__ {int initted; scalar_t__ hashval; int offset; scalar_t__ blkno; } ;
typedef TYPE_9__ attrlist_cursor_kern_t ;
struct TYPE_22__ {scalar_t__ if_data; } ;
struct TYPE_24__ {scalar_t__ if_bytes; TYPE_1__ if_u1; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (char*,int ,int ,TYPE_7__*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 TYPE_6__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_8__*,int ,int ,int,int) ;
 int FUNC_7 (TYPE_8__*,int ,int ,int,int) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_6__*,int,int,int ) ;

__attribute__((used)) static int
FUNC_13(xfs_attr_list_context_t *VAR_4)
{
 attrlist_cursor_kern_t *VAR_5;
 xfs_attr_sf_sort_t *VAR_6, *VAR_7;
 xfs_attr_shortform_t *VAR_8;
 xfs_attr_sf_entry_t *VAR_9;
 xfs_inode_t *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_0(VAR_4 != ((void*)0));
 VAR_10 = VAR_4->dp;
 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(VAR_10->i_afp != ((void*)0));
 VAR_8 = (xfs_attr_shortform_t *)VAR_10->i_afp->if_u1.if_data;
 FUNC_0(VAR_8 != ((void*)0));
 if (!VAR_8->hdr.count)
  return 0;
 VAR_5 = VAR_4->cursor;
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_8(VAR_4);
 if (VAR_4->bufsize == 0 ||
     (FUNC_3(VAR_5) &&
      (VAR_10->i_afp->if_bytes + VAR_8->hdr.count * 16) < VAR_4->bufsize)) {
  for (VAR_14 = 0, VAR_9 = &VAR_8->list[0]; VAR_14 < VAR_8->hdr.count; VAR_14++) {
   VAR_4->put_listent(VAR_4,
          VAR_9->flags,
          VAR_9->nameval,
          (int)VAR_9->namelen,
          (int)VAR_9->valuelen);




   if (VAR_4->seen_enough)
    break;
   VAR_9 = FUNC_1(VAR_9);
  }
  FUNC_9(VAR_4);
  return 0;
 }


 if (VAR_4->bufsize == 0)
  return 0;




 VAR_11 = VAR_8->hdr.count * sizeof(*VAR_6);
 VAR_7 = VAR_6 = FUNC_4(VAR_11, VAR_1);





 VAR_12 = 0;
 for (VAR_14 = 0, VAR_9 = &VAR_8->list[0]; VAR_14 < VAR_8->hdr.count; VAR_14++) {
  if (FUNC_10(
      ((char *)VAR_9 < (char *)VAR_8) ||
      ((char *)VAR_9 >= ((char *)VAR_8 + VAR_10->i_afp->if_bytes)))) {
   FUNC_2("xfs_attr_shortform_list",
          VAR_2,
          VAR_4->dp->i_mount, VAR_9,
          sizeof(*VAR_9));
   FUNC_5(VAR_6);
   return -VAR_0;
  }

  VAR_7->entno = VAR_14;
  VAR_7->hash = FUNC_11(VAR_9->nameval, VAR_9->namelen);
  VAR_7->name = VAR_9->nameval;
  VAR_7->namelen = VAR_9->namelen;

  VAR_7->valuelen = VAR_9->valuelen;
  VAR_7->flags = VAR_9->flags;
  VAR_9 = FUNC_1(VAR_9);
  VAR_7++;
  VAR_12++;
 }




 FUNC_12(VAR_6, VAR_12, sizeof(*VAR_6), VAR_3);




 VAR_13 = 0;
 VAR_5->initted = 1;
 VAR_5->blkno = 0;
 for (VAR_7 = VAR_6, VAR_14 = 0; VAR_14 < VAR_12; VAR_14++, VAR_7++) {
  if (VAR_7->hash == VAR_5->hashval) {
   if (VAR_5->offset == VAR_13) {
    break;
   }
   VAR_13++;
  } else if (VAR_7->hash > VAR_5->hashval) {
   break;
  }
 }
 if (VAR_14 == VAR_12) {
  FUNC_5(VAR_6);
  return 0;
 }




 for ( ; VAR_14 < VAR_12; VAR_14++, VAR_7++) {
  if (VAR_5->hashval != VAR_7->hash) {
   VAR_5->hashval = VAR_7->hash;
   VAR_5->offset = 0;
  }
  VAR_4->put_listent(VAR_4,
         VAR_7->flags,
         VAR_7->name,
         VAR_7->namelen,
         VAR_7->valuelen);
  if (VAR_4->seen_enough)
   break;
  VAR_5->offset++;
 }

 FUNC_5(VAR_6);
 return 0;
}

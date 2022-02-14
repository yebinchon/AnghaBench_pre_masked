
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int namelen; int valuelen; } ;
typedef TYPE_2__ xfs_attr_leaf_name_remote_t ;
struct TYPE_8__ {char* nameval; int namelen; int valuelen; } ;
typedef TYPE_3__ xfs_attr_leaf_name_local_t ;
struct xfs_mount {int m_attr_geo; } ;
struct xfs_buf {struct xfs_attr_leafblock* b_addr; } ;
struct xfs_attr_list_context {scalar_t__ dupcnt; int flags; scalar_t__ seen_enough; int (* put_listent ) (struct xfs_attr_list_context*,int,char*,int,int) ;scalar_t__ resynch; struct attrlist_cursor_kern* cursor; TYPE_1__* dp; } ;
struct xfs_attr_leafblock {int dummy; } ;
struct xfs_attr_leaf_entry {int flags; int hashval; } ;
struct xfs_attr3_icleaf_hdr {int count; } ;
struct attrlist_cursor_kern {int initted; scalar_t__ hashval; scalar_t__ offset; } ;
struct TYPE_6__ {struct xfs_mount* i_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_attr_list_context*,int,char*,int,int) ;
 int FUNC_3 (struct xfs_attr_list_context*) ;
 int FUNC_4 (struct xfs_attr_list_context*) ;
 int FUNC_5 (struct xfs_attr_list_context*) ;
 struct xfs_attr_leaf_entry* FUNC_6 (struct xfs_attr_leafblock*) ;
 int FUNC_7 (int ,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;
 TYPE_3__* FUNC_8 (struct xfs_attr_leafblock*,int) ;
 TYPE_2__* FUNC_9 (struct xfs_attr_leafblock*,int) ;

void
FUNC_10(
 struct xfs_buf *VAR_3,
 struct xfs_attr_list_context *VAR_4)
{
 struct attrlist_cursor_kern *VAR_5;
 struct xfs_attr_leafblock *VAR_6;
 struct xfs_attr3_icleaf_hdr VAR_7;
 struct xfs_attr_leaf_entry *VAR_8;
 struct xfs_attr_leaf_entry *VAR_9;
 int VAR_10;
 struct xfs_mount *VAR_11 = VAR_4->dp->i_mount;

 FUNC_3(VAR_4);

 VAR_6 = VAR_3->b_addr;
 FUNC_7(VAR_11->m_attr_geo, &VAR_7, VAR_6);
 VAR_8 = FUNC_6(VAR_6);

 VAR_5 = VAR_4->cursor;
 VAR_5->initted = 1;




 if (VAR_4->resynch) {
  VAR_9 = &VAR_8[0];
  for (VAR_10 = 0; VAR_10 < VAR_7.count; VAR_9++, VAR_10++) {
   if (FUNC_1(VAR_9->hashval) == VAR_5->hashval) {
    if (VAR_5->offset == VAR_4->dupcnt) {
     VAR_4->dupcnt = 0;
     break;
    }
    VAR_4->dupcnt++;
   } else if (FUNC_1(VAR_9->hashval) >
     VAR_5->hashval) {
    VAR_4->dupcnt = 0;
    break;
   }
  }
  if (VAR_10 == VAR_7.count) {
   FUNC_5(VAR_4);
   return;
  }
 } else {
  VAR_9 = &VAR_8[0];
  VAR_10 = 0;
 }
 VAR_4->resynch = 0;




 for (; VAR_10 < VAR_7.count; VAR_9++, VAR_10++) {
  char *VAR_12;
  int VAR_13, VAR_14;

  if (FUNC_1(VAR_9->hashval) != VAR_5->hashval) {
   VAR_5->hashval = FUNC_1(VAR_9->hashval);
   VAR_5->offset = 0;
  }

  if ((VAR_9->flags & VAR_1) &&
      !(VAR_4->flags & VAR_0))
   continue;

  if (VAR_9->flags & VAR_2) {
   xfs_attr_leaf_name_local_t *VAR_15;

   VAR_15 = FUNC_8(VAR_6, VAR_10);
   VAR_12 = VAR_15->nameval;
   VAR_13 = VAR_15->namelen;
   VAR_14 = FUNC_0(VAR_15->valuelen);
  } else {
   xfs_attr_leaf_name_remote_t *VAR_16;

   VAR_16 = FUNC_9(VAR_6, VAR_10);
   VAR_12 = VAR_16->name;
   VAR_13 = VAR_16->namelen;
   VAR_14 = FUNC_1(VAR_16->valuelen);
  }

  VAR_4->put_listent(VAR_4, VAR_9->flags,
           VAR_12, VAR_13, VAR_14);
  if (VAR_4->seen_enough)
   break;
  VAR_5->offset++;
 }
 FUNC_4(VAR_4);
 return;
}

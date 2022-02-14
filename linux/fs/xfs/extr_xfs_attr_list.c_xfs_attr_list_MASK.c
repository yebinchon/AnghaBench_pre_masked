
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_inode_t ;
struct TYPE_6__ {int resynch; int flags; char* alist; int bufsize; int firstu; int put_listent; TYPE_2__* cursor; int * dp; } ;
typedef TYPE_1__ xfs_attr_list_context_t ;
struct attrlist {int* al_offset; scalar_t__ al_more; scalar_t__ al_count; } ;
typedef int context ;
struct TYPE_7__ {scalar_t__ initted; scalar_t__ offset; scalar_t__ blkno; scalar_t__ hashval; scalar_t__ pad2; scalar_t__ pad1; } ;
typedef TYPE_2__ attrlist_cursor_kern_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;

int
FUNC_3(
 xfs_inode_t *VAR_5,
 char *VAR_6,
 int VAR_7,
 int VAR_8,
 attrlist_cursor_kern_t *VAR_9)
{
 xfs_attr_list_context_t VAR_10;
 struct attrlist *VAR_11;
 int VAR_12;




 if (VAR_9->pad1 || VAR_9->pad2)
  return -VAR_3;
 if ((VAR_9->initted == 0) &&
     (VAR_9->hashval || VAR_9->blkno || VAR_9->offset))
  return -VAR_3;


 if (VAR_8 & VAR_0)
  return -VAR_3;




 if (((long)VAR_6) & (sizeof(int)-1))
  return -VAR_2;
 if (VAR_8 & VAR_1)
  VAR_7 = 0;




 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.dp = VAR_5;
 VAR_10.cursor = VAR_9;
 VAR_10.resynch = 1;
 VAR_10.flags = VAR_8;
 VAR_10.alist = VAR_6;
 VAR_10.bufsize = (VAR_7 & ~(sizeof(int)-1));
 VAR_10.firstu = VAR_10.bufsize;
 VAR_10.put_listent = VAR_4;

 VAR_11 = (struct attrlist *)VAR_10.alist;
 VAR_11->al_count = 0;
 VAR_11->al_more = 0;
 VAR_11->al_offset[0] = VAR_10.bufsize;

 VAR_12 = FUNC_2(&VAR_10);
 FUNC_0(VAR_12 <= 0);
 return VAR_12;
}

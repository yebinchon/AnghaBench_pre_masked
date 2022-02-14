
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
typedef int xfs_daddr_t ;
struct xfs_mount {int m_sb; TYPE_1__* m_attr_geo; } ;
struct xfs_buf {char* b_addr; int b_length; int b_bn; struct xfs_mount* b_mount; } ;
struct TYPE_2__ {int blksize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct xfs_mount*,struct xfs_buf*,char*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_buf *VAR_4,
 bool VAR_5,
 xfs_failaddr_t *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_4->b_mount;
 char *VAR_8;
 int VAR_9;
 xfs_daddr_t VAR_10;
 int VAR_11 = VAR_7->m_attr_geo->blksize;


 if (!FUNC_4(&VAR_7->m_sb))
  return 0;

 VAR_8 = VAR_4->b_addr;
 VAR_10 = VAR_4->b_bn;
 VAR_9 = FUNC_1(VAR_4->b_length);
 FUNC_0(VAR_9 >= VAR_11);

 while (VAR_9 > 0) {
  if (VAR_5 &&
      !FUNC_5(VAR_8, VAR_11, VAR_2)) {
   *VAR_6 = VAR_3;
   return -VAR_0;
  }
  *VAR_6 = FUNC_3(VAR_7, VAR_4, VAR_8, VAR_11, VAR_10);
  if (*VAR_6)
   return -VAR_1;
  VAR_9 -= VAR_11;
  VAR_8 += VAR_11;
  VAR_10 += FUNC_2(VAR_11);
 }

 if (VAR_9 != 0) {
  *VAR_6 = VAR_3;
  return -VAR_1;
 }

 return 0;
}

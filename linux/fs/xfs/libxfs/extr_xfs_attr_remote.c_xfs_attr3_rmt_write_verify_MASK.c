
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_failaddr_t ;
typedef int xfs_daddr_t ;
struct xfs_mount {int m_sb; TYPE_1__* m_attr_geo; } ;
struct xfs_buf {char* b_addr; int b_length; int b_bn; struct xfs_mount* b_mount; } ;
struct xfs_attr3_rmt_hdr {scalar_t__ rm_lsn; } ;
struct TYPE_2__ {int blksize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct xfs_mount*,struct xfs_buf*,char*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (struct xfs_buf*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_buf *VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_4->b_mount;
 xfs_failaddr_t VAR_6;
 int VAR_7 = VAR_5->m_attr_geo->blksize;
 char *VAR_8;
 int VAR_9;
 xfs_daddr_t VAR_10;


 if (!FUNC_5(&VAR_5->m_sb))
  return;

 VAR_8 = VAR_4->b_addr;
 VAR_10 = VAR_4->b_bn;
 VAR_9 = FUNC_1(VAR_4->b_length);
 FUNC_0(VAR_9 >= VAR_7);

 while (VAR_9 > 0) {
  struct xfs_attr3_rmt_hdr *VAR_11 = (struct xfs_attr3_rmt_hdr *)VAR_8;

  VAR_6 = FUNC_4(VAR_5, VAR_4, VAR_8, VAR_7, VAR_10);
  if (VAR_6) {
   FUNC_7(VAR_4, -VAR_0, VAR_6);
   return;
  }





  if (VAR_11->rm_lsn != FUNC_3(VAR_1)) {
   FUNC_7(VAR_4, -VAR_0, VAR_3);
   return;
  }
  FUNC_6(VAR_8, VAR_7, VAR_2);

  VAR_9 -= VAR_7;
  VAR_8 += VAR_7;
  VAR_10 += FUNC_2(VAR_7);
 }

 if (VAR_9 != 0)
  FUNC_7(VAR_4, -VAR_0, VAR_3);
}

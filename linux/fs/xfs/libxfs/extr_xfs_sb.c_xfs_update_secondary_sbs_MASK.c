
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
struct TYPE_2__ {int sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_ddev_targp; } ;
struct xfs_buf {int b_length; int * b_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_mount*,int,int ) ;
 int FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_mount*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct xfs_buf*,int *) ;
 int FUNC_6 (int *) ;
 struct xfs_buf* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct xfs_buf*) ;
 int FUNC_9 (struct xfs_buf*) ;
 int FUNC_10 (struct xfs_buf*,int ,int ) ;
 int VAR_3 ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (struct xfs_mount*,char*,int,...) ;

int
FUNC_13(
 struct xfs_mount *VAR_4)
{
 xfs_agnumber_t VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 FUNC_1 (VAR_2);


 for (VAR_5 = 1; VAR_5 < VAR_4->m_sb.sb_agcount; VAR_5++) {
  struct xfs_buf *VAR_8;

  VAR_8 = FUNC_7(VAR_4->m_ddev_targp,
     FUNC_2(VAR_4, VAR_5, VAR_1),
     FUNC_4(VAR_4, 1));







  if (!VAR_8) {
   FUNC_12(VAR_4,
  "error allocating secondary superblock for ag %d",
    VAR_5);
   if (!VAR_6)
    VAR_6 = -VAR_0;
   continue;
  }

  VAR_8->b_ops = &VAR_3;
  FUNC_8(VAR_8);
  FUNC_10(VAR_8, 0, FUNC_0(VAR_8->b_length));
  FUNC_11(FUNC_3(VAR_8), &VAR_4->m_sb);
  FUNC_5(VAR_8, &VAR_2);
  FUNC_9(VAR_8);


  if (VAR_5 % 16)
   continue;

  VAR_7 = FUNC_6(&VAR_2);
  if (VAR_7) {
   FUNC_12(VAR_4,
  "write error %d updating a secondary superblock near ag %d",
    VAR_7, VAR_5);
   if (!VAR_6)
    VAR_6 = VAR_7;
   continue;
  }
 }
 VAR_7 = FUNC_6(&VAR_2);
 if (VAR_7) {
  FUNC_12(VAR_4,
  "write error %d updating a secondary superblock near ag %d",
   VAR_7, VAR_5);
 }

 return VAR_6 ? VAR_6 : VAR_7;
}

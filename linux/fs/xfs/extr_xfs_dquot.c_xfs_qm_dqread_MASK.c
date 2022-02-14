
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct xfs_dquot {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_dquot*) ;
 int FUNC_2 (struct xfs_dquot*) ;
 int FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_buf*) ;
 struct xfs_dquot* FUNC_5 (struct xfs_mount*,int ,int ) ;
 int FUNC_6 (struct xfs_mount*,struct xfs_dquot*,struct xfs_buf**) ;
 int FUNC_7 (struct xfs_dquot*,struct xfs_buf*) ;
 int FUNC_8 (struct xfs_dquot*) ;
 int FUNC_9 (struct xfs_mount*,struct xfs_dquot*,struct xfs_buf**) ;

__attribute__((used)) static int
FUNC_10(
 struct xfs_mount *VAR_1,
 xfs_dqid_t VAR_2,
 uint VAR_3,
 bool VAR_4,
 struct xfs_dquot **VAR_5)
{
 struct xfs_dquot *VAR_6;
 struct xfs_buf *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_6);


 VAR_8 = FUNC_6(VAR_1, VAR_6, &VAR_7);
 if (VAR_8 == -VAR_0 && VAR_4)
  VAR_8 = FUNC_9(VAR_1, VAR_6, &VAR_7);
 if (VAR_8)
  goto err;







 FUNC_0(FUNC_3(VAR_7));
 FUNC_7(VAR_6, VAR_7);

 FUNC_4(VAR_7);
 *VAR_5 = VAR_6;
 return VAR_8;

err:
 FUNC_2(VAR_6);
 FUNC_8(VAR_6);
 *VAR_5 = ((void*)0);
 return VAR_8;
}

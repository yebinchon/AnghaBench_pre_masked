
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_2__ {int sb_agcount; scalar_t__ sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_agi {scalar_t__ agi_length; } ;
struct xfs_agf {scalar_t__ agf_length; } ;
struct aghdr_init_data {int agno; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_agf* FUNC_2 (struct xfs_buf*) ;
 struct xfs_agi* FUNC_3 (struct xfs_buf*) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_trans*,int,int ,struct xfs_buf**) ;
 int FUNC_8 (struct xfs_trans*,int ,scalar_t__,int *,int ) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_10 (struct xfs_mount*,struct xfs_trans*,int,struct xfs_buf**) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_buf*,int,scalar_t__,scalar_t__,int *) ;

int
FUNC_12(
 struct xfs_mount *VAR_4,
 struct xfs_trans *VAR_5,
 struct aghdr_init_data *VAR_6,
 xfs_extlen_t VAR_7)
{
 struct xfs_buf *VAR_8;
 struct xfs_agi *VAR_9;
 struct xfs_agf *VAR_10;
 int VAR_11;




 VAR_11 = FUNC_10(VAR_4, VAR_5, VAR_6->agno, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 FUNC_4(&VAR_9->agi_length, VAR_7);
 FUNC_0(VAR_6->agno == VAR_4->m_sb.sb_agcount - 1 ||
        FUNC_5(VAR_9->agi_length) == VAR_4->m_sb.sb_agblocks);
 FUNC_9(VAR_5, VAR_8, VAR_1);




 VAR_11 = FUNC_7(VAR_4, VAR_5, VAR_6->agno, 0, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_2(VAR_8);
 FUNC_4(&VAR_10->agf_length, VAR_7);
 FUNC_0(VAR_10->agf_length == VAR_9->agi_length);
 FUNC_6(VAR_5, VAR_8, VAR_0);







 VAR_11 = FUNC_11(VAR_5, VAR_8, VAR_6->agno,
    FUNC_5(VAR_10->agf_length) - VAR_7,
    VAR_7, &VAR_3);
 if (VAR_11)
  return VAR_11;

 return FUNC_8(VAR_5, FUNC_1(VAR_4, VAR_6->agno,
     FUNC_5(VAR_10->agf_length) - VAR_7),
    VAR_7, &VAR_3,
    VAR_2);
}

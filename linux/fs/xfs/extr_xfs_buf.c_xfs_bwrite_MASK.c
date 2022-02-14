
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; int b_mount; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(
 struct xfs_buf *VAR_7)
{
 int VAR_8;

 FUNC_0(FUNC_1(VAR_7));

 VAR_7->b_flags |= VAR_4;
 VAR_7->b_flags &= ~(VAR_1 | VAR_3 | VAR_6 |
    VAR_5 | VAR_2);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  FUNC_3(VAR_7->b_mount, VAR_0);
 return VAR_8;
}

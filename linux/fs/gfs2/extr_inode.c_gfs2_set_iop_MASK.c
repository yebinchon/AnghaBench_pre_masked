
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_rdev; int i_mode; int * i_op; int * i_fop; } ;
struct gfs2_sbd {int dummy; } ;


 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct gfs2_sbd*) ;
 int VAR_6 ;
 int FUNC_5 (struct inode*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_7)
{
 struct gfs2_sbd *VAR_8 = FUNC_0(VAR_7);
 umode_t VAR_9 = VAR_7->i_mode;

 if (FUNC_3(VAR_9)) {
  VAR_7->i_op = &VAR_5;
  if (FUNC_4(VAR_8))
   VAR_7->i_fop = &VAR_4;
  else
   VAR_7->i_fop = &VAR_3;
 } else if (FUNC_1(VAR_9)) {
  VAR_7->i_op = &VAR_2;
  if (FUNC_4(VAR_8))
   VAR_7->i_fop = &VAR_1;
  else
   VAR_7->i_fop = &VAR_0;
 } else if (FUNC_2(VAR_9)) {
  VAR_7->i_op = &VAR_6;
 } else {
  VAR_7->i_op = &VAR_5;
  FUNC_5(VAR_7, VAR_7->i_mode, VAR_7->i_rdev);
 }
}

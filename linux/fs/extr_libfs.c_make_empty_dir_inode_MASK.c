
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int * i_fop; int i_opflags; int * i_op; scalar_t__ i_blocks; int i_blkbits; scalar_t__ i_size; scalar_t__ i_rdev; int i_gid; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct inode*,int) ;

void FUNC_1(struct inode *VAR_9)
{
 FUNC_0(VAR_9, 2);
 VAR_9->i_mode = VAR_4 | VAR_5 | VAR_6;
 VAR_9->i_uid = VAR_1;
 VAR_9->i_gid = VAR_0;
 VAR_9->i_rdev = 0;
 VAR_9->i_size = 0;
 VAR_9->i_blkbits = VAR_3;
 VAR_9->i_blocks = 0;

 VAR_9->i_op = &VAR_7;
 VAR_9->i_opflags &= ~VAR_2;
 VAR_9->i_fop = &VAR_8;
}

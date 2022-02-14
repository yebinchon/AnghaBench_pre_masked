
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_flags; int i_mode; } ;
struct gfs2_inode {scalar_t__ i_eattr; int i_diskflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct inode *VAR_10)
{
 struct gfs2_inode *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = VAR_10->i_flags;

 VAR_12 &= ~(VAR_9|VAR_4|VAR_6|VAR_7|VAR_5|VAR_8);
 if ((VAR_11->i_eattr == 0) && !FUNC_1(VAR_10->i_mode))
  VAR_12 |= VAR_8;
 if (VAR_11->i_diskflags & VAR_1)
  VAR_12 |= VAR_6;
 if (VAR_11->i_diskflags & VAR_0)
  VAR_12 |= VAR_4;
 if (VAR_11->i_diskflags & VAR_2)
  VAR_12 |= VAR_7;
 if (VAR_11->i_diskflags & VAR_3)
  VAR_12 |= VAR_9;
 VAR_10->i_flags = VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int u32 ;
struct inode {int i_mode; } ;
struct TYPE_2__ {int i_protect; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_1(struct inode *VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_9)->i_protect;
 umode_t VAR_11 = VAR_9->i_mode;

 if (!(VAR_11 & 0100))
  VAR_10 |= VAR_3;
 if (!(VAR_11 & 0400))
  VAR_10 |= VAR_4;
 if (!(VAR_11 & 0200))
  VAR_10 |= VAR_5;
 if (VAR_11 & 0010)
  VAR_10 |= VAR_0;
 if (VAR_11 & 0040)
  VAR_10 |= VAR_1;
 if (VAR_11 & 0020)
  VAR_10 |= VAR_2;
 if (VAR_11 & 0001)
  VAR_10 |= VAR_6;
 if (VAR_11 & 0004)
  VAR_10 |= VAR_7;
 if (VAR_11 & 0002)
  VAR_10 |= VAR_8;

 FUNC_0(VAR_9)->i_protect = VAR_10;
}

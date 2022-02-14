
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int mctrl; scalar_t__ break_ctl; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_0(struct fwtty_port *VAR_8)
{
 unsigned int VAR_9 = 0;



 if (VAR_8->mctrl & VAR_5)
  VAR_9 |= VAR_4 | VAR_2;
 if (VAR_8->mctrl & VAR_6)
  VAR_9 |= VAR_3;
 if (VAR_8->mctrl & VAR_0)
  VAR_9 |= VAR_1;

 if (VAR_8->break_ctl)
  VAR_9 |= VAR_7 << 24;

 return VAR_9;
}

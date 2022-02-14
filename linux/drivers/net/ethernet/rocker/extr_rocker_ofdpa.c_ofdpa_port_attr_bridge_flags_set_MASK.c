
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {unsigned long brport_flags; int rocker_port; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_2(struct rocker_port *VAR_1,
         unsigned long VAR_2,
         struct switchdev_trans *VAR_3)
{
 struct ofdpa_port *VAR_4 = VAR_1->wpriv;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4->brport_flags;
 VAR_4->brport_flags = VAR_2;
 if ((VAR_5 ^ VAR_4->brport_flags) & VAR_0 &&
     !FUNC_1(VAR_3))
  VAR_6 = FUNC_0(VAR_4->rocker_port,
            !!(VAR_4->brport_flags & VAR_0));

 if (FUNC_1(VAR_3))
  VAR_4->brport_flags = VAR_5;

 return VAR_6;
}

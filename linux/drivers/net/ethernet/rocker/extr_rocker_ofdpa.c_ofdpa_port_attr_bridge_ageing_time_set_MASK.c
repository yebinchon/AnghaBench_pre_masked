
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct switchdev_trans {int dummy; } ;
struct rocker_port {struct ofdpa_port* wpriv; } ;
struct ofdpa_port {scalar_t__ ageing_time; struct ofdpa* ofdpa; } ;
struct ofdpa {scalar_t__ ageing_time; int fdb_cleanup_timer; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct switchdev_trans*) ;

__attribute__((used)) static int
FUNC_3(struct rocker_port *VAR_1,
           u32 VAR_2,
           struct switchdev_trans *VAR_3)
{
 struct ofdpa_port *VAR_4 = VAR_1->wpriv;
 struct ofdpa *VAR_5 = VAR_4->ofdpa;

 if (!FUNC_2(VAR_3)) {
  VAR_4->ageing_time = FUNC_0(VAR_2);
  if (VAR_4->ageing_time < VAR_5->ageing_time)
   VAR_5->ageing_time = VAR_4->ageing_time;
  FUNC_1(&VAR_4->ofdpa->fdb_cleanup_timer, VAR_0);
 }

 return 0;
}

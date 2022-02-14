
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int rx_over_errors; int rx_errors; } ;
struct fza_private {int ring_uns_index; TYPE_2__* ring_uns; TYPE_1__ stats; } ;
struct TYPE_4__ {int own; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct fza_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct fza_private *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;
 int VAR_7;

 while (1) {
  VAR_7 = VAR_5->ring_uns_index;
  VAR_6 = FUNC_1(&VAR_5->ring_uns[VAR_7].own);
  if ((VAR_6 & VAR_1) == VAR_0)
   break;

  if (FUNC_2(&VAR_5->ring_uns[VAR_7].id) == VAR_2) {
   VAR_5->stats.rx_errors++;
   VAR_5->stats.rx_over_errors++;
  }

  FUNC_3(VAR_0, &VAR_5->ring_uns[VAR_7].own);
  VAR_5->ring_uns_index =
   (VAR_5->ring_uns_index + 1) % VAR_3;
 }
}

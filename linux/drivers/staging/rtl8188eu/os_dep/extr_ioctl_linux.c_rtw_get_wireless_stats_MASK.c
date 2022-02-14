
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int qual; int level; int noise; int updated; } ;
struct iw_statistics {TYPE_2__ qual; } ;
struct TYPE_3__ {int signal_strength; int signal_qual; int noise; } ;
struct adapter {struct iw_statistics iwstats; TYPE_1__ recvpriv; int mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct iw_statistics *FUNC_2(struct net_device *VAR_2)
{
 struct adapter *VAR_3 = (struct adapter *)FUNC_1(VAR_2);
 struct iw_statistics *VAR_4 = &VAR_3->iwstats;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!FUNC_0(&VAR_3->mlmepriv, VAR_1)) {
  VAR_4->qual.qual = 0;
  VAR_4->qual.level = 0;
  VAR_4->qual.noise = 0;
 } else {
  VAR_5 = VAR_3->recvpriv.signal_strength;
  VAR_6 = VAR_3->recvpriv.signal_qual;
  VAR_7 = VAR_3->recvpriv.noise;

  VAR_4->qual.level = VAR_5;
  VAR_4->qual.qual = VAR_6;
  VAR_4->qual.noise = VAR_7;
 }
 VAR_4->qual.updated = VAR_0;
 return &VAR_3->iwstats;
}

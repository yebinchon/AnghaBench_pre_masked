
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct parport {TYPE_4__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int scram; } ;
struct TYPE_7__ {TYPE_2__ par96; } ;
struct baycom_state {TYPE_3__ modem; TYPE_1__* pdev; int hdrv; } ;
struct TYPE_8__ {int (* write_data ) (struct parport*,unsigned char) ;} ;
struct TYPE_5__ {struct parport* port; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct parport*,unsigned char) ;
 int FUNC_2 (struct parport*,unsigned char) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_6, struct baycom_state *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9 = FUNC_0(&VAR_7->hdrv);
 struct parport *VAR_10 = VAR_7->pdev->port;

 for(VAR_8 = 0; VAR_8 < VAR_1; VAR_8++, VAR_9 >>= 1) {
  unsigned char VAR_11 = VAR_5;
  VAR_7->modem.par96.scram = ((VAR_7->modem.par96.scram << 1) |
      (VAR_7->modem.par96.scram & 1));
  if (!(VAR_9 & 1))
   VAR_7->modem.par96.scram ^= 1;
  if (VAR_7->modem.par96.scram & (VAR_2 << 1))
   VAR_7->modem.par96.scram ^=
    (VAR_3 << 1);
  if (VAR_7->modem.par96.scram & (VAR_2 << 2))
   VAR_11 |= VAR_4;
  VAR_10->ops->write_data(VAR_10, VAR_11);
  VAR_10->ops->write_data(VAR_10, VAR_11 | VAR_0);
 }
}

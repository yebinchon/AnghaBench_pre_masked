
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct il_priv {TYPE_3__* txq; TYPE_1__* cfg; } ;
struct TYPE_5__ {int read_ptr; int write_ptr; } ;
struct TYPE_6__ {TYPE_2__ q; } ;
struct TYPE_4__ {int num_of_ampdu_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct il_priv*,int,int) ;
 int FUNC_2 (struct il_priv*,TYPE_3__*,int ,int ) ;
 int FUNC_3 (struct il_priv*,int) ;
 int FUNC_4 (struct il_priv*,int ,int) ;
 int FUNC_5 (struct il_priv*,int) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_4, u16 VAR_5, u16 VAR_6, u8 VAR_7)
{
 if ((VAR_1 > VAR_5) ||
     (VAR_1 +
      VAR_4->cfg->num_of_ampdu_queues <= VAR_5)) {
  FUNC_0("queue number out of range: %d, must be %d to %d\n",
   VAR_5, VAR_1,
   VAR_1 +
   VAR_4->cfg->num_of_ampdu_queues - 1);
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_5);

 FUNC_4(VAR_4, VAR_3, (1 << VAR_5));

 VAR_4->txq[VAR_5].q.read_ptr = (VAR_6 & 0xff);
 VAR_4->txq[VAR_5].q.write_ptr = (VAR_6 & 0xff);

 FUNC_1(VAR_4, VAR_5, VAR_6);

 FUNC_4(VAR_4, VAR_2, (1 << VAR_5));
 FUNC_5(VAR_4, VAR_5);
 FUNC_2(VAR_4, &VAR_4->txq[VAR_5], VAR_7, 0);

 return 0;
}

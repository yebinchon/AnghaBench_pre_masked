
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2400m_roq_log {int dummy; } ;
struct i2400m {int rx_reorder; TYPE_1__* rx_roq; int rx_roq_refcount; } ;
struct TYPE_3__ {struct i2400m_roq_log* log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct i2400m *VAR_4)
{
 int VAR_5 = 0;

 VAR_4->rx_reorder = VAR_3? 0 : 1;
 if (VAR_4->rx_reorder) {
  unsigned VAR_6;
  struct i2400m_roq_log *VAR_7;

  VAR_5 = -VAR_0;

  VAR_4->rx_roq = FUNC_1(VAR_2 + 1,
      sizeof(VAR_4->rx_roq[0]), VAR_1);
  if (VAR_4->rx_roq == ((void*)0))
   goto error_roq_alloc;

  VAR_7 = FUNC_1(VAR_2 + 1, sizeof(*VAR_4->rx_roq[0].log),
        VAR_1);
  if (VAR_7 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto error_roq_log_alloc;
  }

  for(VAR_6 = 0; VAR_6 < VAR_2 + 1; VAR_6++) {
   FUNC_0(&VAR_4->rx_roq[VAR_6]);
   VAR_4->rx_roq[VAR_6].log = &VAR_7[VAR_6];
  }
  FUNC_3(&VAR_4->rx_roq_refcount);
 }
 return 0;

error_roq_log_alloc:
 FUNC_2(VAR_4->rx_roq);
error_roq_alloc:
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct i40e_vsi {size_t num_queue_pairs; int * rx_rings; void* rx_buf_len; void* max_frame; TYPE_2__* netdev; TYPE_1__* back; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;
struct TYPE_3__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct i40e_vsi *VAR_9)
{
 int VAR_10 = 0;
 u16 VAR_11;

 if (!VAR_9->netdev || (VAR_9->back->flags & VAR_2)) {
  VAR_9->max_frame = VAR_3;
  VAR_9->rx_buf_len = VAR_5;

 } else if (!VAR_1 &&
     (VAR_9->netdev->mtu <= VAR_0)) {
  VAR_9->max_frame = VAR_4 - VAR_7;
  VAR_9->rx_buf_len = VAR_4 - VAR_7;

 } else {
  VAR_9->max_frame = VAR_3;
  VAR_9->rx_buf_len = (VAR_8 < 8192) ? VAR_6 :
             VAR_5;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9->num_queue_pairs && !VAR_10; VAR_11++)
  VAR_10 = FUNC_0(VAR_9->rx_rings[VAR_11]);

 return VAR_10;
}

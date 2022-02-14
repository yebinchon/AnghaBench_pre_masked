
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_wrm {struct csio_q** q_arr; } ;
struct csio_q {int dummy; } ;
struct csio_hw {int dummy; } ;


 struct csio_wrm* FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*,struct csio_q*,void (*) (struct csio_hw*,void*,VAR_0,struct csio_fl_dma_buf*,void*),void*) ;

int
FUNC_2(struct csio_hw *VAR_1, int VAR_2,
     void (*VAR_3)(struct csio_hw *, void *,
          VAR_4, struct csio_fl_dma_buf *,
          void *),
     void *VAR_5)
{
 struct csio_wrm *VAR_6 = FUNC_0(VAR_1);
 struct csio_q *VAR_7 = VAR_6->q_arr[VAR_2];

 return FUNC_1(VAR_1, VAR_7, VAR_3, VAR_5);
}

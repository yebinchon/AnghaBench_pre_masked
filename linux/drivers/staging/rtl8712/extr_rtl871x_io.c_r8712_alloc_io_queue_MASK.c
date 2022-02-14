
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef int u32 ;
struct io_req {int list; } ;
struct io_queue {struct io_queue* pallocated_free_ioreqs_buf; int intf; int free_ioreqs; struct io_queue* free_ioreqs_buf; int lock; int pending; int processing; } ;
struct _adapter {struct io_queue* pio_queue; } ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct io_queue*) ;
 struct io_queue* FUNC_2 (int,int ) ;
 struct io_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

uint FUNC_7(struct _adapter *VAR_4)
{
 u32 VAR_5;
 struct io_queue *VAR_6;
 struct io_req *VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto alloc_io_queue_fail;
 FUNC_0(&VAR_6->free_ioreqs);
 FUNC_0(&VAR_6->processing);
 FUNC_0(&VAR_6->pending);
 FUNC_6(&VAR_6->lock);
 VAR_6->pallocated_free_ioreqs_buf = FUNC_3(VAR_1 *
      (sizeof(struct io_req)) + 4,
      VAR_0);
 if ((VAR_6->pallocated_free_ioreqs_buf) == ((void*)0))
  goto alloc_io_queue_fail;
 VAR_6->free_ioreqs_buf = VAR_6->pallocated_free_ioreqs_buf + 4
   - ((addr_t)(VAR_6->pallocated_free_ioreqs_buf)
   & 3);
 VAR_7 = (struct io_req *)(VAR_6->free_ioreqs_buf);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&VAR_7->list);
  FUNC_4(&VAR_7->list, &VAR_6->free_ioreqs);
  VAR_7++;
 }
 if ((FUNC_5((u8 *)VAR_4, &VAR_6->intf)) == VAR_2)
  goto alloc_io_queue_fail;
 VAR_4->pio_queue = VAR_6;
 return VAR_3;
alloc_io_queue_fail:
 if (VAR_6) {
  FUNC_1(VAR_6->pallocated_free_ioreqs_buf);
  FUNC_1(VAR_6);
 }
 VAR_4->pio_queue = ((void*)0);
 return VAR_2;
}

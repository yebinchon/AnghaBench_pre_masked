
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u64 ;
struct TYPE_5__ {int * page; } ;
struct TYPE_4__ {void** vas; } ;
struct TYPE_6__ {TYPE_2__ h; TYPE_1__ g; } ;
struct vmci_queue_kern_if {TYPE_3__ u; scalar_t__ host; } ;
struct vmci_queue {struct vmci_queue_kern_if* kernel_if; } ;
struct iov_iter {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t,struct iov_iter*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iov_iter *VAR_3,
        const struct vmci_queue *VAR_4,
        u64 VAR_5, size_t VAR_6)
{
 struct vmci_queue_kern_if *VAR_7 = VAR_4->kernel_if;
 size_t VAR_8 = 0;

 while (VAR_8 < VAR_6) {
  const u64 VAR_9 =
   (VAR_5 + VAR_8) / VAR_0;
  const size_t VAR_10 =
      (VAR_5 + VAR_8) & (VAR_0 - 1);
  void *VAR_11;
  size_t VAR_12;
  int VAR_13;

  if (VAR_7->host)
   VAR_11 = FUNC_1(VAR_7->u.h.page[VAR_9]);
  else
   VAR_11 = VAR_7->u.g.vas[VAR_9 + 1];


  if (VAR_6 - VAR_8 > VAR_0 - VAR_10)

   VAR_12 = VAR_0 - VAR_10;
  else
   VAR_12 = VAR_6 - VAR_8;

  VAR_13 = FUNC_0((u8 *)VAR_11 + VAR_10, VAR_12, VAR_3);
  if (VAR_13 != VAR_12) {
   if (VAR_7->host)
    FUNC_2(VAR_7->u.h.page[VAR_9]);
   return VAR_1;
  }
  VAR_8 += VAR_12;
  if (VAR_7->host)
   FUNC_2(VAR_7->u.h.page[VAR_9]);
 }

 return VAR_2;
}

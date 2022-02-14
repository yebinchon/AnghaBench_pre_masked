
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct pollfd {int dummy; } ;
struct TYPE_3__ {int * _qproc; } ;
struct poll_wqueues {int error; TYPE_1__ pt; } ;
struct poll_list {int len; struct pollfd* entries; struct poll_list* next; } ;
typedef TYPE_1__ poll_table ;
typedef int ktime_t ;
typedef scalar_t__ __poll_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct pollfd*,TYPE_1__*,int*,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct poll_wqueues*,int ,int *,int ) ;
 int FUNC_6 (struct timespec64*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct timespec64) ;

__attribute__((used)) static int FUNC_9(struct poll_list *VAR_4, struct poll_wqueues *VAR_5,
     struct timespec64 *VAR_6)
{
 poll_table* VAR_7 = &VAR_5->pt;
 ktime_t VAR_8, *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = 0;
 u64 VAR_12 = 0;
 __poll_t VAR_13 = FUNC_4() ? VAR_1 : 0;
 unsigned long VAR_14 = 0;


 if (VAR_6 && !VAR_6->tv_sec && !VAR_6->tv_nsec) {
  VAR_7->_qproc = ((void*)0);
  VAR_10 = 1;
 }

 if (VAR_6 && !VAR_10)
  VAR_12 = FUNC_6(VAR_6);

 for (;;) {
  struct poll_list *VAR_15;
  bool VAR_16 = 0;

  for (VAR_15 = VAR_4; VAR_15 != ((void*)0); VAR_15 = VAR_15->next) {
   struct pollfd * VAR_17, * VAR_18;

   VAR_17 = VAR_15->entries;
   VAR_18 = VAR_17 + VAR_15->len;
   for (; VAR_17 != VAR_18; VAR_17++) {







    if (FUNC_2(VAR_17, VAR_7, &VAR_16,
           VAR_13)) {
     VAR_11++;
     VAR_7->_qproc = ((void*)0);

     VAR_13 = 0;
     VAR_16 = 0;
    }
   }
  }




  VAR_7->_qproc = ((void*)0);
  if (!VAR_11) {
   VAR_11 = VAR_5->error;
   if (FUNC_7(VAR_3))
    VAR_11 = -VAR_0;
  }
  if (VAR_11 || VAR_10)
   break;


  if (VAR_16 && !FUNC_3()) {
   if (!VAR_14) {
    VAR_14 = FUNC_0();
    continue;
   }
   if (!FUNC_1(VAR_14))
    continue;
  }
  VAR_13 = 0;






  if (VAR_6 && !VAR_9) {
   VAR_8 = FUNC_8(*VAR_6);
   VAR_9 = &VAR_8;
  }

  if (!FUNC_5(VAR_5, VAR_2, VAR_9, VAR_12))
   VAR_10 = 1;
 }
 return VAR_11;
}

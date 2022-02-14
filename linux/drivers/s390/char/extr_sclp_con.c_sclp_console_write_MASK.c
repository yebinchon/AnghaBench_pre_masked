
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct console {int dummy; } ;
struct TYPE_3__ {void* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_9 ;
 int * FUNC_6 (void*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned char const*,unsigned int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct console *VAR_10, const char *VAR_11,
     unsigned int VAR_12)
{
 unsigned long VAR_13;
 void *VAR_14;
 int VAR_15;

 if (VAR_12 == 0)
  return;
 FUNC_9(&VAR_3, VAR_13);




 do {

  if (VAR_8 == ((void*)0)) {
   if (FUNC_1(&VAR_4))
    VAR_9++;
   while (FUNC_1(&VAR_4)) {
    if (VAR_5)
     goto out;
    if (FUNC_5())
     break;
    FUNC_10(&VAR_3, VAR_13);
    FUNC_7();
    FUNC_9(&VAR_3, VAR_13);
   }
   VAR_14 = VAR_4.next;
   FUNC_0((struct list_head *) VAR_14);
   VAR_8 = FUNC_6(VAR_14, VAR_2,
             VAR_7);
  }

  VAR_15 = FUNC_8(VAR_8, (const unsigned char *)
         VAR_11, VAR_12);
  if (VAR_15 == VAR_12)
   break;





  FUNC_10(&VAR_3, VAR_13);
  FUNC_4();
  FUNC_9(&VAR_3, VAR_13);
  VAR_11 += VAR_15;
  VAR_12 -= VAR_15;
 } while (VAR_12 > 0);

 if (VAR_8 != ((void*)0) && FUNC_3(VAR_8) != 0 &&
     !FUNC_11(&VAR_6)) {
  FUNC_2(&VAR_6, VAR_1 + VAR_0 / 10);
 }
out:
 FUNC_10(&VAR_3, VAR_13);
}

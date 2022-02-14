
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_7__ {scalar_t__ next; } ;
struct TYPE_6__ {scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned char const*,int,int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_3__ VAR_4 ;
 int * FUNC_7 (void*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(const unsigned char *VAR_8, int VAR_9, int VAR_10,
     int VAR_11, int VAR_12)
{
 unsigned long VAR_13;
 void *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_9 <= 0)
  return 0;
 VAR_16 = 0;
 FUNC_8(&VAR_5, VAR_13);
 do {

  if (VAR_3 == ((void*)0)) {
   if (FUNC_2(&VAR_4))
    VAR_2++;
   while (FUNC_2(&VAR_4)) {
    if (VAR_12 || VAR_6)
     goto out;
    if (FUNC_5())
     break;
    FUNC_9(&VAR_5, VAR_13);

    FUNC_3();
    FUNC_8(&VAR_5, VAR_13);
   }
   VAR_14 = (void *) VAR_4.next;
   FUNC_1((struct list_head *) VAR_14);
   VAR_3 =
    FUNC_7(VAR_14);
  }

  VAR_15 = FUNC_4(VAR_3,
          VAR_8, VAR_9, VAR_11);
  VAR_16 += VAR_15;
  if (VAR_15 == VAR_9)
   break;





  FUNC_9(&VAR_5, VAR_13);
  FUNC_6();
  FUNC_8(&VAR_5, VAR_13);
  VAR_8 += VAR_15;
  VAR_9 -= VAR_15;
 } while (VAR_9 > 0);

 if (VAR_3 != ((void*)0) &&
     !FUNC_10(&VAR_7) && VAR_10) {
  VAR_7.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_7);
 }
out:
 FUNC_9(&VAR_5, VAR_13);
 return VAR_16;
}

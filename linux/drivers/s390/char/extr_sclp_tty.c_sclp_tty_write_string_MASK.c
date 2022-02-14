
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sclp_buffer {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_3__ {void* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sclp_buffer*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sclp_buffer*) ;
 struct sclp_buffer* FUNC_5 (void*,int ,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 struct sclp_buffer* VAR_7 ;
 int FUNC_7 (struct sclp_buffer*,unsigned char const*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(const unsigned char *VAR_8, int VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 void *VAR_12;
 int VAR_13;
 int VAR_14;
 struct sclp_buffer *VAR_15;

 if (VAR_9 <= 0)
  return 0;
 VAR_14 = 0;
 FUNC_8(&VAR_4, VAR_11);
 do {

  if (VAR_7 == ((void*)0)) {
   while (FUNC_2(&VAR_5)) {
    FUNC_9(&VAR_4, VAR_11);
    if (VAR_10)
     goto out;
    else
     FUNC_6();
    FUNC_8(&VAR_4, VAR_11);
   }
   VAR_12 = VAR_5.next;
   FUNC_1((struct list_head *) VAR_12);
   VAR_7 = FUNC_5(VAR_12, VAR_3,
             VAR_1);
  }

  VAR_13 = FUNC_7(VAR_7, VAR_8, VAR_9);
  VAR_14 += VAR_13;
  if (VAR_13 == VAR_9)
   break;





  VAR_15 = VAR_7;
  VAR_7 = ((void*)0);
  FUNC_9(&VAR_4, VAR_11);
  FUNC_0(VAR_15);
  FUNC_8(&VAR_4, VAR_11);
  VAR_8 += VAR_13;
  VAR_9 -= VAR_13;
 } while (VAR_9 > 0);

 if (VAR_7 && FUNC_4(VAR_7) &&
     !FUNC_10(&VAR_6)) {
  FUNC_3(&VAR_6, VAR_2 + VAR_0 / 10);
 }
 FUNC_9(&VAR_4, VAR_11);
out:
 return VAR_14;
}

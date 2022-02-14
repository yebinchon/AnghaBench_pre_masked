
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int io_thread_lock; int req; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct r592_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(void *VAR_4)
{
 int VAR_5;
 struct r592_device *VAR_6 = (struct r592_device *)VAR_4;
 unsigned long VAR_7;

 while (!FUNC_2()) {
  FUNC_7(&VAR_6->io_thread_lock, VAR_7);
  FUNC_6(VAR_2);
  VAR_5 = FUNC_3(VAR_6->host, &VAR_6->req);
  FUNC_8(&VAR_6->io_thread_lock, VAR_7);

  if (VAR_5) {
   if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0) {
    FUNC_1("IO: done IO, sleeping");
   } else {
    FUNC_0("IO: unknown error from "
     "memstick_next_req %d", VAR_5);
   }

   if (FUNC_2())
    FUNC_6(VAR_3);

   FUNC_5();
  } else {
   FUNC_6(VAR_3);
   FUNC_4(VAR_6);
  }
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; void* content; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (size_t) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,size_t) ;

int FUNC_4(size_t VAR_5)
{
 if (VAR_5 > 0) {
  VAR_4 = FUNC_1(VAR_5);
  VAR_3.content =
   (void *) FUNC_0(VAR_2 | VAR_1,
        VAR_4);

  if (!VAR_3.content) {
   FUNC_3("Allocating the requested cache size of %zu bytes failed\n",
          VAR_5);
   return -VAR_0;
  }

  FUNC_2("content cache enabled, size is %zu bytes\n",
    VAR_5);
 }

 VAR_3.len = VAR_5;
 return 0;
}

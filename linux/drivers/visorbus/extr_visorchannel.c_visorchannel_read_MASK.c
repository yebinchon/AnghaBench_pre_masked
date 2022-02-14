
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct visorchannel {scalar_t__ nbytes; scalar_t__ mapped; } ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__) ;

int FUNC_1(struct visorchannel *VAR_1, ulong VAR_2, void *VAR_3,
        ulong VAR_4)
{
 if (VAR_2 + VAR_4 > VAR_1->nbytes)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_1->mapped + VAR_2, VAR_4);
 return 0;
}

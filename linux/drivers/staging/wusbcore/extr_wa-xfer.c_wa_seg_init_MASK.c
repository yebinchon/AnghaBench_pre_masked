
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_seg {int tr_urb; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct wa_seg *VAR_0)
{
 FUNC_1(&VAR_0->tr_urb);


 FUNC_0(((void *)VAR_0) + sizeof(VAR_0->tr_urb), 0,
  sizeof(*VAR_0) - sizeof(VAR_0->tr_urb));
}

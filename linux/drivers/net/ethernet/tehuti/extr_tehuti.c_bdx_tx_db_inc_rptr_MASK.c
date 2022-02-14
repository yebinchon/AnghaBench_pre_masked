
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdb {scalar_t__ rptr; scalar_t__ wptr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct txdb*,scalar_t__*) ;

__attribute__((used)) static inline void FUNC_2(struct txdb *VAR_0)
{
 FUNC_0(VAR_0->rptr == VAR_0->wptr);
 FUNC_1(VAR_0, &VAR_0->rptr);
}

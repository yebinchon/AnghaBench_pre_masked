
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RxD_t {int Control_1; int Control_2; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct RxD_t *VAR_2)
{
 int VAR_3;

 VAR_3 = ((!(VAR_2->Control_1 & VAR_0)) &&
        (FUNC_0(VAR_2->Control_2) != VAR_1));

 return VAR_3;
}

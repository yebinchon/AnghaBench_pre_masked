
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ AS_Host ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(AS_Host *VAR_3, unsigned int VAR_4)
{
    if(VAR_4 == VAR_0)
    return FUNC_0(VAR_3->base + VAR_1) & 255;
    FUNC_1(VAR_4, VAR_3->base + VAR_1);
    return FUNC_0(VAR_3->base + VAR_2) & 255;
}

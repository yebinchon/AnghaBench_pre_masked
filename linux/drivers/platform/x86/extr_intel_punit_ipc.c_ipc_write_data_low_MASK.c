
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__** base; } ;
typedef size_t IPC_TYPE ;
typedef TYPE_1__ IPC_DEV ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(IPC_DEV *VAR_2, IPC_TYPE VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_4, VAR_2->base[VAR_3][VAR_0] + VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AS_Host ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static
unsigned long FUNC_2(AS_Host *VAR_1)
{
    unsigned long VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0) << 16;
    VAR_2 |= FUNC_1(VAR_1) << 8;
    VAR_2 |= FUNC_1(VAR_1);

    return VAR_2;
}

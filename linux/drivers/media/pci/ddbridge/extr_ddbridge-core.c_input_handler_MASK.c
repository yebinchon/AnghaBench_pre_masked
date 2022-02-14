
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_input {struct ddb_dma* dma; } ;
struct ddb_dma {int work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct ddb_input *VAR_2 = (struct ddb_input *)VAR_1;
 struct ddb_dma *VAR_3 = VAR_2->dma;

 FUNC_0(VAR_0, &VAR_3->work);
}

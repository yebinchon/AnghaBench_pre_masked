
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {size_t op; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int * VAR_0 ;

__attribute__((used)) static inline int
FUNC_1(struct tape_request *VAR_1, int VAR_2)
{
 FUNC_0(3, "Error recovery failed for %s (RC=%d)\n",
    VAR_0[VAR_1->op], VAR_2);
 return VAR_2;
}

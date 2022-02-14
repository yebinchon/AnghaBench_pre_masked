
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgaimage {int dmethod; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct fpgaimage *VAR_1)
{
 FUNC_0("set program method\n");

 VAR_1->dmethod = VAR_0;

 FUNC_0("systemmap program method\n");

 return 0;
}

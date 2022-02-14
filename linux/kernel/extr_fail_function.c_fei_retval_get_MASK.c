
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fei_attr {int retval; } ;


 int VAR_0 ;
 int FUNC_0 (struct fei_attr*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, u64 *VAR_3)
{
 struct fei_attr *VAR_4 = VAR_2;
 int VAR_5 = 0;

 FUNC_1(&VAR_1);

 if (!FUNC_0(VAR_4))
  VAR_5 = -VAR_0;
 else
  *VAR_3 = VAR_4->retval;
 FUNC_2(&VAR_1);

 return VAR_5;
}

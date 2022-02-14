
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct ni_gpct {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct ni_gpct*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct ni_gpct*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct ni_gpct *VAR_0,
    unsigned int *VAR_1,
    unsigned int *VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_0, *VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_0(VAR_3, 1000);
 *VAR_2 = VAR_3;
 return 0;
}

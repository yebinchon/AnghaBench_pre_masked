
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_7, int *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 FUNC_1(&VAR_6);
 VAR_9 = FUNC_0(VAR_5, VAR_0,
          VAR_2, &VAR_10);
 FUNC_2(&VAR_6);

 if (VAR_9)
  return VAR_9;







 *VAR_8 = (VAR_10 >> (VAR_7 * VAR_3)) & VAR_1;
 *VAR_8 -= VAR_4;

 return 0;
}

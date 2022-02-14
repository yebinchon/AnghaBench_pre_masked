
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rvu*,int,int) ;
 int FUNC_2 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   FUNC_2(VAR_7, VAR_8,
        FUNC_0(VAR_11, VAR_12),
        0);
 }


 VAR_9 = VAR_2 | VAR_3;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_10 = VAR_9;
 VAR_9 = VAR_10 | VAR_5;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_6;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_4;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_5 |
   VAR_6;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_5 |
   VAR_4;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_6 |
   VAR_4;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_9 = VAR_10 | VAR_5 |
        VAR_6 | VAR_4;
 VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}

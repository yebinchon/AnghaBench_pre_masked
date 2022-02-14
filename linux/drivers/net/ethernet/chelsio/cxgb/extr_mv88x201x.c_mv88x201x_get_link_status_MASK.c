
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cphy*,int ,int ,int *) ;
 int FUNC_1 (struct cphy*,int) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_7, int *VAR_8,
         int *VAR_9, int *VAR_10, int *VAR_11)
{
 u32 VAR_12 = 0;

 if (VAR_8) {

  FUNC_0(VAR_7, VAR_1, VAR_2, &VAR_12);
  VAR_12 &= VAR_3;
  *VAR_8 = (VAR_12 == VAR_3);

  FUNC_1(VAR_7, *VAR_8);
 }
 if (VAR_9)
  *VAR_9 = VAR_6;
 if (VAR_10)
  *VAR_10 = VAR_0;
 if (VAR_11)
  *VAR_11 = VAR_4 | VAR_5;
 return 0;
}

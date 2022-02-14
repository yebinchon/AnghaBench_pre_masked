
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct cphy*,int ,int*) ;
 int FUNC_2 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cphy *VAR_3, int VAR_4)
{
 u32 VAR_5;

 (void) FUNC_1(VAR_3,
  VAR_0, &VAR_5);





 VAR_5 &= ~(VAR_2 | FUNC_0(VAR_1));

 if (VAR_4)
  VAR_5 |= VAR_2 | FUNC_0(2);
 (void) FUNC_2(VAR_3,
   VAR_0, VAR_5);
 return 0;
}

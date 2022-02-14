
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
 int FUNC_0 (struct cphy*,int ) ;
 int FUNC_1 (struct cphy*,int ,int*) ;
 int FUNC_2 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cphy *VAR_4)
{
 u32 VAR_5;





 (void) FUNC_0(VAR_4, VAR_2);





 (void) FUNC_1(VAR_4, VAR_3, &VAR_5);
 VAR_5 &= ~VAR_0;
 (void) FUNC_2(VAR_4, VAR_3, VAR_5 | VAR_1);
 return 0;
}

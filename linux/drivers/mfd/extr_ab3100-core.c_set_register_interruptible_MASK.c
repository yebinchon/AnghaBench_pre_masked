
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int parent; } ;
struct ab3100 {int dummy; } ;


 int FUNC_0 (struct ab3100*,int ,int ) ;
 struct ab3100* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
 u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ab3100 *VAR_4 = FUNC_1(VAR_0->parent);

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}

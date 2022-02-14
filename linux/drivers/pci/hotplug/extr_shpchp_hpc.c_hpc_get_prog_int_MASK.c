
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {struct controller* ctrl; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,int ) ;

__attribute__((used)) static int FUNC_1(struct slot *VAR_1, u8 *VAR_2)
{
 struct controller *VAR_3 = VAR_1->ctrl;

 *VAR_2 = FUNC_0(VAR_3, VAR_0);

 return 0;
}

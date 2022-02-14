
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc {TYPE_1__* attr; } ;
struct TYPE_2__ {char asic_rev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc *VAR_1, char *VAR_2)
{
 FUNC_0(!(VAR_2));

 FUNC_1(VAR_2, 0, VAR_0);

 VAR_2[0] = 'R';
 VAR_2[1] = 'e';
 VAR_2[2] = 'v';
 VAR_2[3] = '-';
 VAR_2[4] = VAR_1->attr->asic_rev;
 VAR_2[5] = '\0';
}

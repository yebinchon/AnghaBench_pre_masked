
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ocp_en; } ;
struct rtsx_pcr {TYPE_1__ option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_6, VAR_5,
    VAR_3, VAR_4);
 VAR_8 = FUNC_2(VAR_6, VAR_2,
    VAR_1, VAR_0);
 if (VAR_6->option.ocp_en)
  FUNC_1(VAR_6);

 return VAR_8;
}

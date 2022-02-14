
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int model; } ;
struct niu {TYPE_1__ vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_9)
{
 int VAR_10 = 0;

 if ((!FUNC_0(VAR_9->vpd.model, VAR_7)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_8)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_6)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_5)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_3))) {
  VAR_10 = 4;
 } else if ((!FUNC_0(VAR_9->vpd.model, VAR_0)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_2)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_4)) ||
     (!FUNC_0(VAR_9->vpd.model, VAR_1))) {
  VAR_10 = 2;
 }

 return VAR_10;
}

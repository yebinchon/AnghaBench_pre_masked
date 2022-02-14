
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int dummy; } ;
typedef enum ci_revision { ____Placeholder_ci_revision } ci_revision ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ci_hdrc*,int ,int ) ;

__attribute__((used)) static enum ci_revision FUNC_2(struct ci_hdrc *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_5) >> FUNC_0(VAR_5);
 enum ci_revision VAR_8 = VAR_2;

 if (VAR_7 == 0x2) {
  VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_4)
   >> FUNC_0(VAR_4);
  VAR_8 += VAR_1;
 } else if (VAR_7 == 0x0) {
  VAR_8 = VAR_0;
 }

 return VAR_8;
}

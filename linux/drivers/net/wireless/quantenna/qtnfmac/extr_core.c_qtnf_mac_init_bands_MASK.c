
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_2__ {int bands_cap; } ;
struct qtnf_wmac {TYPE_1__ macinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wiphy* FUNC_0 (struct qtnf_wmac*) ;
 int FUNC_1 (struct wiphy*,struct qtnf_wmac*,int ) ;

__attribute__((used)) static int FUNC_2(struct qtnf_wmac *VAR_6)
{
 struct wiphy *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = 0;

 if (VAR_6->macinfo.bands_cap & VAR_3) {
  VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_0);
  if (VAR_8)
   goto out;
 }

 if (VAR_6->macinfo.bands_cap & VAR_4) {
  VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_1);
  if (VAR_8)
   goto out;
 }

 if (VAR_6->macinfo.bands_cap & VAR_5)
  VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_2);

out:
 return VAR_8;
}

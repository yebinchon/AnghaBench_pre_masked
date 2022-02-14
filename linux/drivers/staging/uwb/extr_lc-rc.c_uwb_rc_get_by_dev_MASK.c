
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int dummy; } ;
struct uwb_dev_addr {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,struct uwb_dev_addr const*,int ) ;
 struct uwb_rc* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;

struct uwb_rc *FUNC_3(const struct uwb_dev_addr *VAR_2)
{
 struct device *VAR_3;
 struct uwb_rc *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), VAR_2, VAR_0);
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }

 return VAR_4;
}

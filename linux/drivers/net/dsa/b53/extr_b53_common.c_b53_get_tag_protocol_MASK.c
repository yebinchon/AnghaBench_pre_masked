
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {scalar_t__ chip_id; } ;
typedef enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;
 scalar_t__ FUNC_4 (struct b53_device*) ;

enum dsa_tag_protocol FUNC_5(struct dsa_switch *VAR_5, int VAR_6)
{
 struct b53_device *VAR_7 = VAR_5->priv;






 if (FUNC_2(VAR_7) || FUNC_3(VAR_7) || FUNC_4(VAR_7) || FUNC_1(VAR_7) ||
     !FUNC_0(VAR_5, VAR_6))
  return VAR_4;




 if (VAR_7->chip_id == VAR_1 && VAR_6 == VAR_0)
  return VAR_3;

 return VAR_2;
}

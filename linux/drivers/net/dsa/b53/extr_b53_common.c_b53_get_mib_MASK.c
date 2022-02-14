
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_mib_desc {int dummy; } ;
struct b53_device {int dummy; } ;


 struct b53_mib_desc const* VAR_0 ;
 struct b53_mib_desc const* VAR_1 ;
 struct b53_mib_desc const* VAR_2 ;
 struct b53_mib_desc const* VAR_3 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;

__attribute__((used)) static const struct b53_mib_desc *FUNC_3(struct b53_device *VAR_4)
{
 if (FUNC_0(VAR_4))
  return VAR_3;
 else if (FUNC_2(VAR_4))
  return VAR_2;
 else if (FUNC_1(VAR_4))
  return VAR_1;
 else
  return VAR_0;
}

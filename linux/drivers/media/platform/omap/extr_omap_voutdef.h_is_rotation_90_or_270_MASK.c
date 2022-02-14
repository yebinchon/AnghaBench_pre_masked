
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_vout_device {scalar_t__ rotation; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct omap_vout_device *VAR_2)
{
 return (VAR_2->rotation == VAR_1 ||
   VAR_2->rotation == VAR_0);
}

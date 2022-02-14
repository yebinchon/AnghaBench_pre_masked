
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_vout_device {scalar_t__ mirror; scalar_t__ rotation; } ;



__attribute__((used)) static inline int FUNC_0(const struct omap_vout_device *VAR_0)
{
 return VAR_0->rotation || VAR_0->mirror;
}

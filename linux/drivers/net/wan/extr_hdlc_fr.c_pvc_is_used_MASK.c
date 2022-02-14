
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvc_device {scalar_t__ ether; scalar_t__ main; } ;



__attribute__((used)) static inline int FUNC_0(struct pvc_device *VAR_0)
{
 return VAR_0->main || VAR_0->ether;
}

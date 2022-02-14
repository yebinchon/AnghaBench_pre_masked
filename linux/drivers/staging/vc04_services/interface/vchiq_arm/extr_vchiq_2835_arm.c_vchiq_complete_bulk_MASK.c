
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_pagelist_info {int dummy; } ;
struct vchiq_bulk {scalar_t__ actual; scalar_t__ remote_data; } ;


 int FUNC_0 (struct vchiq_pagelist_info*,scalar_t__) ;

void
FUNC_1(struct vchiq_bulk *VAR_0)
{
 if (VAR_0 && VAR_0->remote_data && VAR_0->actual)
  FUNC_0((struct vchiq_pagelist_info *)VAR_0->remote_data,
         VAR_0->actual);
}

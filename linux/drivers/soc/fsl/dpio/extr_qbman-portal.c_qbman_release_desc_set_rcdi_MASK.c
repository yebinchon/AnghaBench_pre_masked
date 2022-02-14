
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qbman_release_desc {int verb; } ;



void FUNC_0(struct qbman_release_desc *VAR_0, int VAR_1)
{
 if (VAR_1)
  VAR_0->verb |= 1 << 6;
 else
  VAR_0->verb &= ~(1 << 6);
}

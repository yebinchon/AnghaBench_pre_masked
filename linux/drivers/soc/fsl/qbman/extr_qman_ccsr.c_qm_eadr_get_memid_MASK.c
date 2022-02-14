
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_eadr {int info; } ;



__attribute__((used)) static int FUNC_0(const struct qm_eadr *VAR_0)
{
 return (VAR_0->info >> 24) & 0xf;
}

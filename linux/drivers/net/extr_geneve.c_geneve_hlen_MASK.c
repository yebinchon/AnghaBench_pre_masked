
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genevehdr {int opt_len; } ;



__attribute__((used)) static int FUNC_0(struct genevehdr *VAR_0)
{
 return sizeof(*VAR_0) + VAR_0->opt_len * 4;
}

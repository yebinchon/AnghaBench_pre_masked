
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcw {scalar_t__ output; scalar_t__ w; scalar_t__ input; scalar_t__ r; } ;
typedef scalar_t__ addr_t ;



void *FUNC_0(struct tcw *VAR_0)
{
 if (VAR_0->r)
  return (void *) ((addr_t) VAR_0->input);
 if (VAR_0->w)
  return (void *) ((addr_t) VAR_0->output);
 return ((void*)0);
}

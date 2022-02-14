
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {scalar_t__ blocked; int initialized; } ;



__attribute__((used)) static bool FUNC_0(struct fuse_conn *VAR_0, bool VAR_1)
{
 return !VAR_0->initialized || (VAR_1 && VAR_0->blocked);
}

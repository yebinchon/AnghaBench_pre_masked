
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_readdir_cache_control {int * page; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ceph_readdir_cache_control *VAR_0)
{
 if (VAR_0->page) {
  FUNC_0(VAR_0->page);
  FUNC_1(VAR_0->page);
  VAR_0->page = ((void*)0);
 }
}

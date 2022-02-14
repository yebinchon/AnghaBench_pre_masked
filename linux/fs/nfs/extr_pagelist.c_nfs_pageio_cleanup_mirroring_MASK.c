
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_mirror_count; int * pg_mirrors_dynamic; int pg_mirrors_static; int pg_mirrors; scalar_t__ pg_mirror_idx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs_pageio_descriptor *VAR_0)
{
 VAR_0->pg_mirror_count = 1;
 VAR_0->pg_mirror_idx = 0;
 VAR_0->pg_mirrors = VAR_0->pg_mirrors_static;
 FUNC_0(VAR_0->pg_mirrors_dynamic);
 VAR_0->pg_mirrors_dynamic = ((void*)0);
}

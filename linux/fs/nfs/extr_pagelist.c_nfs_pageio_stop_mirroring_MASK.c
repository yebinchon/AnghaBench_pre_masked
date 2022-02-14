
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_mirror_count; scalar_t__ pg_mirror_idx; } ;



void FUNC_0(struct nfs_pageio_descriptor *VAR_0)
{
 VAR_0->pg_mirror_count = 1;
 VAR_0->pg_mirror_idx = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int pg_mirror_count; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct nfs_pageio_descriptor *VAR_0)
{
 FUNC_0(VAR_0->pg_mirror_count < 1);
 return VAR_0->pg_mirror_count > 1;
}

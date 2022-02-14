
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_mirror {unsigned int pg_bsize; scalar_t__ pg_recoalesce; scalar_t__ pg_base; scalar_t__ pg_count; scalar_t__ pg_bytes_written; int pg_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs_pgio_mirror *VAR_0,
       unsigned int VAR_1)
{
 FUNC_0(&VAR_0->pg_list);
 VAR_0->pg_bytes_written = 0;
 VAR_0->pg_count = 0;
 VAR_0->pg_bsize = VAR_1;
 VAR_0->pg_base = 0;
 VAR_0->pg_recoalesce = 0;
}

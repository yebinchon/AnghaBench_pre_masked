
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {scalar_t__ io_start; scalar_t__ good_bytes; } ;
struct nfs_direct_req {scalar_t__ io_start; scalar_t__ max_count; scalar_t__ count; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct nfs_direct_req*,struct nfs_pgio_header const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nfs_direct_req *VAR_0,
         const struct nfs_pgio_header *VAR_1)
{
 loff_t VAR_2 = VAR_1->io_start + VAR_1->good_bytes;
 ssize_t VAR_3 = 0;

 if (VAR_2 > VAR_0->io_start)
  VAR_3 = VAR_2 - VAR_0->io_start;

 FUNC_0(VAR_0, VAR_1, VAR_3);

 if (VAR_3 > VAR_0->max_count)
  VAR_3 = VAR_0->max_count;

 if (VAR_0->count < VAR_3)
  VAR_0->count = VAR_3;
}

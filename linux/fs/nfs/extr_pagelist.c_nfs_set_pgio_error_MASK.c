
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {unsigned int io_start; unsigned int good_bytes; int error; int flags; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct nfs_pgio_header *VAR_2, int VAR_3, loff_t VAR_4)
{
 unsigned int VAR_5 = VAR_4 - VAR_2->io_start;

 if (VAR_2->good_bytes > VAR_5) {
  VAR_2->good_bytes = VAR_5;
  FUNC_0(VAR_0, &VAR_2->flags);
  if (!FUNC_1(VAR_1, &VAR_2->flags))
   VAR_2->error = VAR_3;
 }
}

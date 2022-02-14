
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_direct_req {scalar_t__ count; scalar_t__ error; int completion; scalar_t__ iocb; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct nfs_direct_req *VAR_1)
{
 ssize_t VAR_2 = -VAR_0;


 if (VAR_1->iocb)
  goto out;

 VAR_2 = FUNC_1(&VAR_1->completion);

 if (!VAR_2) {
  VAR_2 = VAR_1->count;
  FUNC_0(VAR_1->count < 0);
 }
 if (!VAR_2)
  VAR_2 = VAR_1->error;

out:
 return (ssize_t) VAR_2;
}

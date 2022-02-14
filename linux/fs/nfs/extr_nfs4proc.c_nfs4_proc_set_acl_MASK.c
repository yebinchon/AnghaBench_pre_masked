
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_exception {scalar_t__ retry; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,void const*,size_t) ;
 int FUNC_2 (int ,int,struct nfs4_exception*) ;
 int FUNC_3 (struct inode*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, const void *VAR_1, size_t VAR_2)
{
 struct nfs4_exception VAR_3 = { };
 int VAR_4;
 do {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
  FUNC_3(VAR_0, VAR_4);
  VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_4,
    &VAR_3);
 } while (VAR_3.retry);
 return VAR_4;
}

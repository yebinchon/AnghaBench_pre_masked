
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_write_verifier {int data; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline int
FUNC_1(const struct nfs_write_verifier *VAR_0,
  const struct nfs_write_verifier *VAR_1)
{
 return FUNC_0(VAR_0->data, VAR_1->data, sizeof(VAR_0->data));
}

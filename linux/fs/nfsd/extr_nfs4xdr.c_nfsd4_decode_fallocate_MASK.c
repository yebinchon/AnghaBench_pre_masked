
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_fallocate {int falloc_length; int falloc_offset; int falloc_stateid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfsd4_compoundargs*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_4,
         struct nfsd4_fallocate *VAR_5)
{
 VAR_0;

 VAR_3 = FUNC_1(VAR_4, &VAR_5->falloc_stateid);
 if (VAR_3)
  return VAR_3;

 FUNC_0(16);
 VAR_2 = FUNC_2(VAR_2, &VAR_5->falloc_offset);
 FUNC_2(VAR_2, &VAR_5->falloc_length);

 VAR_1;
}

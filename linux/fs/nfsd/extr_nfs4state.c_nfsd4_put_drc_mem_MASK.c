
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_channel_attrs {int maxreqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfsd4_channel_attrs*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfsd4_channel_attrs *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_0);
 VAR_1 -= VAR_3 * VAR_2->maxreqs;
 FUNC_2(&VAR_0);
}

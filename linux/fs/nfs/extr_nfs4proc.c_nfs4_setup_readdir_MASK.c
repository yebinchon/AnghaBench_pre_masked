
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfs4_readdir_arg {int cookie; char verifier; int pgbase; int count; int * pages; } ;
struct dentry {struct dentry* d_parent; } ;
typedef char __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 char* FUNC_7 (char*,int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_8(u64 VAR_6, __be32 *VAR_7, struct dentry *VAR_8,
  struct nfs4_readdir_arg *VAR_9)
{
 unsigned int VAR_10 = VAR_0 | VAR_1;
 __be32 *VAR_11, *VAR_12;

 if (VAR_6 > 2) {
  VAR_9->cookie = VAR_6;
  FUNC_5(&VAR_9->verifier, VAR_7, sizeof(VAR_9->verifier));
  return;
 }

 VAR_9->cookie = 0;
 FUNC_6(&VAR_9->verifier, 0, sizeof(VAR_9->verifier));
 if (VAR_6 == 2)
  return;
 VAR_11 = VAR_12 = FUNC_3(*VAR_9->pages);

 if (VAR_6 == 0) {
  *VAR_12++ = VAR_3;
  *VAR_12++ = VAR_5;
  *VAR_12++ = VAR_3;
  *VAR_12++ = VAR_3;
  FUNC_5(VAR_12, ".\0\0\0", 4);
  VAR_12++;
  *VAR_12++ = VAR_3;
  *VAR_12++ = FUNC_2(VAR_10);
  *VAR_12++ = FUNC_2(12);
  *VAR_12++ = FUNC_2(VAR_2);
  VAR_12 = FUNC_7(VAR_12, FUNC_0(FUNC_1(VAR_8)));
 }

 *VAR_12++ = VAR_3;
 *VAR_12++ = VAR_5;
 *VAR_12++ = VAR_4;
 *VAR_12++ = VAR_4;
 FUNC_5(VAR_12, "..\0\0", 4);
 VAR_12++;
 *VAR_12++ = VAR_3;
 *VAR_12++ = FUNC_2(VAR_10);
 *VAR_12++ = FUNC_2(12);
 *VAR_12++ = FUNC_2(VAR_2);
 VAR_12 = FUNC_7(VAR_12, FUNC_0(FUNC_1(VAR_8->d_parent)));

 VAR_9->pgbase = (char *)VAR_12 - (char *)VAR_11;
 VAR_9->count -= VAR_9->pgbase;
 FUNC_4(VAR_11);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_cpp_mutex {int cpp; int key; int address; int target; int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct nfp_cpp_mutex*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;

int FUNC_6(struct nfp_cpp_mutex *VAR_7)
{
 unsigned long VAR_8 = VAR_6 + VAR_4 * VAR_2;
 unsigned long VAR_9 = VAR_6 + VAR_3 * VAR_2;
 unsigned int VAR_10 = 1;
 int VAR_11;






 for (;;) {
  VAR_11 = FUNC_1(VAR_7);
  if (VAR_11 != -VAR_0)
   break;

  VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 != 0) {
   FUNC_3(VAR_7->cpp,
     "interrupted waiting for NFP mutex\n");
   return -VAR_1;
  }

  if (FUNC_5(VAR_8)) {
   VAR_8 = VAR_6 + VAR_5 * VAR_2;
   FUNC_4(VAR_7->cpp,
     "Warning: waiting for NFP mutex [depth:%hd target:%d addr:%llx key:%08x]\n",
     VAR_7->depth,
     VAR_7->target, VAR_7->address, VAR_7->key);
  }
  if (FUNC_5(VAR_9)) {
   FUNC_2(VAR_7->cpp, "Error: mutex wait timed out\n");
   return -VAR_0;
  }
 }

 return VAR_11;
}

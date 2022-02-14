
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct afs_call {int unmarshall; int count; int count2; int tmp; int iter; } ;
typedef int __be32 ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,int) ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct afs_call *VAR_0)
{
 u32 VAR_1;
 int VAR_2;

 FUNC_0("{%u,%zu}", VAR_0->unmarshall, FUNC_5(&VAR_0->iter));

 switch (VAR_0->unmarshall) {
 case 0:
  FUNC_4(VAR_0);
  VAR_0->unmarshall++;



 case 1:
  VAR_2 = FUNC_2(VAR_0, 1);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_1 = FUNC_6(VAR_0->tmp);

  VAR_0->count = VAR_1;
  VAR_0->count2 = VAR_1;
  FUNC_3(VAR_0, VAR_1 * sizeof(__be32));
  VAR_0->unmarshall++;



 case 2:
  VAR_2 = FUNC_2(VAR_0, 0);
  if (VAR_2 < 0)
   return VAR_2;



  VAR_0->unmarshall++;
  break;
 }

 FUNC_1(" = 0 [done]");
 return 0;
}

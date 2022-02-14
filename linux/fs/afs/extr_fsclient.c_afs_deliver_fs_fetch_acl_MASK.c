
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_call {int unmarshall; unsigned int count2; int out_volsync; int out_scb; int * buffer; struct afs_acl* ret_acl; int tmp; } ;
struct afs_acl {unsigned int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,int ,unsigned int) ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,int) ;
 int FUNC_5 (struct afs_call*) ;
 int VAR_2 ;
 struct afs_acl* FUNC_6 (int ,int ) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (unsigned int,int) ;
 int FUNC_9 (struct afs_acl*,int ,unsigned int) ;
 int FUNC_10 (int const**,struct afs_call*,int ) ;
 int FUNC_11 (int const**,int ) ;

__attribute__((used)) static int FUNC_12(struct afs_call *VAR_3)
{
 struct afs_acl *VAR_4;
 const __be32 *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0("{%u}", VAR_3->unmarshall);

 switch (VAR_3->unmarshall) {
 case 0:
  FUNC_5(VAR_3);
  VAR_3->unmarshall++;



 case 1:
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6 = VAR_3->count2 = FUNC_7(VAR_3->tmp);
  VAR_6 = FUNC_8(VAR_6, 4);

  VAR_4 = FUNC_6(FUNC_9(VAR_4, VAR_2, VAR_6), VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_3->ret_acl = VAR_4;
  VAR_4->size = VAR_3->count2;
  FUNC_2(VAR_3, VAR_4->data, VAR_6);
  VAR_3->unmarshall++;



 case 2:
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_4(VAR_3, (21 + 6) * 4);
  VAR_3->unmarshall++;



 case 3:
  VAR_7 = FUNC_3(VAR_3, 0);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 = VAR_3->buffer;
  VAR_7 = FUNC_10(&VAR_5, VAR_3, VAR_3->out_scb);
  if (VAR_7 < 0)
   return VAR_7;
  FUNC_11(&VAR_5, VAR_3->out_volsync);

  VAR_3->unmarshall++;

 case 4:
  break;
 }

 FUNC_1(" = 0 [done]");
 return 0;
}

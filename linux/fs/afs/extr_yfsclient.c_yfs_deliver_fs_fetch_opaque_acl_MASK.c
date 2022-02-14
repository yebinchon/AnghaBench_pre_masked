
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSVolSync {int dummy; } ;
struct yfs_xdr_YFSFetchStatus {int dummy; } ;
struct yfs_acl {int flags; void* num_cleaned; void* inherit_flag; struct afs_acl* vol_acl; struct afs_acl* acl; } ;
struct afs_call {int unmarshall; unsigned int count2; int out_volsync; int out_scb; int * buffer; int tmp; struct yfs_acl* out_yacl; } ;
struct afs_acl {unsigned int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct afs_call*,int ,unsigned int) ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,unsigned int) ;
 int FUNC_5 (struct afs_call*,int) ;
 int FUNC_6 (struct afs_call*) ;
 int VAR_4 ;
 struct afs_acl* FUNC_7 (int ,int ) ;
 void* FUNC_8 (int ) ;
 unsigned int FUNC_9 (unsigned int,int) ;
 int FUNC_10 (struct afs_acl*,int ,unsigned int) ;
 int FUNC_11 (int const**,struct afs_call*,int ) ;
 int FUNC_12 (int const**,int ) ;

__attribute__((used)) static int FUNC_13(struct afs_call *VAR_5)
{
 struct yfs_acl *VAR_6 = VAR_5->out_yacl;
 struct afs_acl *VAR_7;
 const __be32 *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 FUNC_0("{%u}", VAR_5->unmarshall);

 switch (VAR_5->unmarshall) {
 case 0:
  FUNC_6(VAR_5);
  VAR_5->unmarshall++;



 case 1:
  VAR_10 = FUNC_3(VAR_5, 1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = VAR_5->count2 = FUNC_8(VAR_5->tmp);
  VAR_9 = FUNC_9(VAR_9, 4);

  if (VAR_6->flags & VAR_2) {
   VAR_7 = FUNC_7(FUNC_10(VAR_7, VAR_4, VAR_9), VAR_1);
   if (!VAR_7)
    return -VAR_0;
   VAR_6->acl = VAR_7;
   VAR_7->size = VAR_5->count2;
   FUNC_2(VAR_5, VAR_7->data, VAR_9);
  } else {
   FUNC_4(VAR_5, VAR_9);
  }
  VAR_5->unmarshall++;



 case 2:
  VAR_10 = FUNC_3(VAR_5, 1);
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_6(VAR_5);
  VAR_5->unmarshall++;



 case 3:
  VAR_10 = FUNC_3(VAR_5, 1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = VAR_5->count2 = FUNC_8(VAR_5->tmp);
  VAR_9 = FUNC_9(VAR_9, 4);

  if (VAR_6->flags & VAR_3) {
   VAR_7 = FUNC_7(FUNC_10(VAR_7, VAR_4, VAR_9), VAR_1);
   if (!VAR_7)
    return -VAR_0;
   VAR_6->vol_acl = VAR_7;
   VAR_7->size = VAR_5->count2;
   FUNC_2(VAR_5, VAR_7->data, VAR_9);
  } else {
   FUNC_4(VAR_5, VAR_9);
  }
  VAR_5->unmarshall++;



 case 4:
  VAR_10 = FUNC_3(VAR_5, 1);
  if (VAR_10 < 0)
   return VAR_10;

  FUNC_5(VAR_5,
       sizeof(__be32) * 2 +
       sizeof(struct yfs_xdr_YFSFetchStatus) +
       sizeof(struct yfs_xdr_YFSVolSync));
  VAR_5->unmarshall++;



 case 5:
  VAR_10 = FUNC_3(VAR_5, 0);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_8 = VAR_5->buffer;
  VAR_6->inherit_flag = FUNC_8(*VAR_8++);
  VAR_6->num_cleaned = FUNC_8(*VAR_8++);
  VAR_10 = FUNC_11(&VAR_8, VAR_5, VAR_5->out_scb);
  if (VAR_10 < 0)
   return VAR_10;
  FUNC_12(&VAR_8, VAR_5->out_volsync);

  VAR_5->unmarshall++;


 case 6:
  break;
 }

 FUNC_1(" = 0 [done]");
 return 0;
}

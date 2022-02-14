
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct afs_status_cb {int dummy; } ;
struct afs_call {int unmarshall; size_t count2; size_t count; int out_volsync; int * buffer; struct afs_status_cb* out_scb; int tmp; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,int) ;
 int FUNC_5 (struct afs_call*) ;
 int FUNC_6 (struct afs_call*,int ,int ) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int const**,struct afs_call*,struct afs_status_cb*) ;
 int FUNC_9 (int const**,struct afs_call*,struct afs_status_cb*) ;
 int FUNC_10 (int const**,int ) ;

__attribute__((used)) static int FUNC_11(struct afs_call *VAR_3)
{
 struct afs_status_cb *VAR_4;
 const __be32 *VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_1("{%u}", VAR_3->unmarshall);

 switch (VAR_3->unmarshall) {
 case 0:
  FUNC_5(VAR_3);
  VAR_3->unmarshall++;



 case 1:
  FUNC_0("extract status count");
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6 = FUNC_7(VAR_3->tmp);
  FUNC_0("status count: %u/%u", VAR_6, VAR_3->count2);
  if (VAR_6 != VAR_3->count2)
   return FUNC_6(VAR_3, -VAR_0,
        VAR_2);

  VAR_3->count = 0;
  VAR_3->unmarshall++;
 more_counts:
  FUNC_4(VAR_3, 21 * sizeof(__be32));


 case 2:
  FUNC_0("extract status array %u", VAR_3->count);
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 = VAR_3->buffer;
  VAR_4 = &VAR_3->out_scb[VAR_3->count];
  VAR_7 = FUNC_9(&VAR_5, VAR_3, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_3->count++;
  if (VAR_3->count < VAR_3->count2)
   goto more_counts;

  VAR_3->count = 0;
  VAR_3->unmarshall++;
  FUNC_5(VAR_3);



 case 3:
  FUNC_0("extract CB count");
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6 = FUNC_7(VAR_3->tmp);
  FUNC_0("CB count: %u", VAR_6);
  if (VAR_6 != VAR_3->count2)
   return FUNC_6(VAR_3, -VAR_0,
        VAR_1);
  VAR_3->count = 0;
  VAR_3->unmarshall++;
 more_cbs:
  FUNC_4(VAR_3, 3 * sizeof(__be32));


 case 4:
  FUNC_0("extract CB array");
  VAR_7 = FUNC_3(VAR_3, 1);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_0("unmarshall CB array");
  VAR_5 = VAR_3->buffer;
  VAR_4 = &VAR_3->out_scb[VAR_3->count];
  FUNC_8(&VAR_5, VAR_3, VAR_4);
  VAR_3->count++;
  if (VAR_3->count < VAR_3->count2)
   goto more_cbs;

  FUNC_4(VAR_3, 6 * sizeof(__be32));
  VAR_3->unmarshall++;


 case 5:
  VAR_7 = FUNC_3(VAR_3, 0);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_5 = VAR_3->buffer;
  FUNC_10(&VAR_5, VAR_3->out_volsync);

  VAR_3->unmarshall++;

 case 6:
  break;
 }

 FUNC_2(" = 0 [done]");
 return 0;
}

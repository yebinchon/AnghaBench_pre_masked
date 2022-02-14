
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int u32 ;
struct afs_call {int unmarshall; int count2; int count; int * buffer; struct afs_addr_list* ret_alist; int _iter; } ;
struct afs_addr_list {int version; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (char*) ;
 struct afs_addr_list* FUNC_2 (int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,int ) ;
 int FUNC_5 (struct afs_call*,int) ;
 int FUNC_6 (struct afs_addr_list*,int ,int) ;
 int FUNC_7 (struct afs_addr_list*,int *,int) ;
 int FUNC_8 (struct afs_call*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct afs_call *VAR_12)
{
 struct afs_addr_list *VAR_13;
 __be32 *VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17;

 FUNC_0("{%u,%zu,%u}",
        VAR_12->unmarshall, FUNC_9(VAR_12->_iter), VAR_12->count2);

 switch (VAR_12->unmarshall) {
 case 0:
  FUNC_5(VAR_12, sizeof(uuid_t) + 3 * sizeof(__be32));
  VAR_12->unmarshall = 1;





 case 1:
  VAR_17 = FUNC_3(VAR_12, 1);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_14 = VAR_12->buffer + sizeof(uuid_t);
  VAR_15 = FUNC_10(*VAR_14++);
  VAR_12->count = FUNC_10(*VAR_14++);
  VAR_12->count2 = FUNC_10(*VAR_14);

  if (VAR_12->count > VAR_4)
   return FUNC_8(VAR_12, -VAR_1,
        VAR_7);

  VAR_13 = FUNC_2(VAR_12->count, VAR_3, VAR_0);
  if (!VAR_13)
   return -VAR_2;
  VAR_13->version = VAR_15;
  VAR_12->ret_alist = VAR_13;

  if (VAR_12->count == 0)
   goto extract_volendpoints;

 next_fsendpoint:
  switch (VAR_12->count2) {
  case 129:
   VAR_16 = sizeof(__be32) * (1 + 1 + 1);
   break;
  case 128:
   VAR_16 = sizeof(__be32) * (1 + 4 + 1);
   break;
  default:
   return FUNC_8(VAR_12, -VAR_1,
        VAR_8);
  }

  VAR_16 += sizeof(__be32);
  FUNC_5(VAR_12, VAR_16);
  VAR_12->unmarshall = 2;


 case 2:
  VAR_17 = FUNC_3(VAR_12, 1);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_13 = VAR_12->ret_alist;
  VAR_14 = VAR_12->buffer;
  switch (VAR_12->count2) {
  case 129:
   if (FUNC_10(VAR_14[0]) != sizeof(__be32) * 2)
    return FUNC_8(VAR_12, -VAR_1,
         VAR_5);
   FUNC_6(VAR_13, VAR_14[1], FUNC_10(VAR_14[2]));
   VAR_14 += 3;
   break;
  case 128:
   if (FUNC_10(VAR_14[0]) != sizeof(__be32) * 5)
    return FUNC_8(VAR_12, -VAR_1,
         VAR_6);
   FUNC_7(VAR_13, VAR_14 + 1, FUNC_10(VAR_14[5]));
   VAR_14 += 6;
   break;
  default:
   return FUNC_8(VAR_12, -VAR_1,
        VAR_8);
  }




  VAR_12->count2 = FUNC_10(*VAR_14++);

  VAR_12->count--;
  if (VAR_12->count > 0)
   goto next_fsendpoint;

 extract_volendpoints:

  VAR_12->count = VAR_12->count2;
  if (!VAR_12->count)
   goto end;
  if (VAR_12->count > VAR_4)
   return FUNC_8(VAR_12, -VAR_1,
        VAR_11);

  FUNC_5(VAR_12, 1 * sizeof(__be32));
  VAR_12->unmarshall = 3;






 case 3:
  VAR_17 = FUNC_3(VAR_12, 1);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_14 = VAR_12->buffer;

 next_volendpoint:
  VAR_12->count2 = FUNC_10(*VAR_14++);
  switch (VAR_12->count2) {
  case 129:
   VAR_16 = sizeof(__be32) * (1 + 1 + 1);
   break;
  case 128:
   VAR_16 = sizeof(__be32) * (1 + 4 + 1);
   break;
  default:
   return FUNC_8(VAR_12, -VAR_1,
        VAR_11);
  }

  if (VAR_12->count > 1)
   VAR_16 += sizeof(__be32);
  FUNC_5(VAR_12, VAR_16);
  VAR_12->unmarshall = 4;


 case 4:
  VAR_17 = FUNC_3(VAR_12, 1);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_14 = VAR_12->buffer;
  switch (VAR_12->count2) {
  case 129:
   if (FUNC_10(VAR_14[0]) != sizeof(__be32) * 2)
    return FUNC_8(VAR_12, -VAR_1,
         VAR_9);
   VAR_14 += 3;
   break;
  case 128:
   if (FUNC_10(VAR_14[0]) != sizeof(__be32) * 5)
    return FUNC_8(VAR_12, -VAR_1,
         VAR_10);
   VAR_14 += 6;
   break;
  default:
   return FUNC_8(VAR_12, -VAR_1,
        VAR_11);
  }




  VAR_12->count--;
  if (VAR_12->count > 0)
   goto next_volendpoint;

 end:
  FUNC_4(VAR_12, 0);
  VAR_12->unmarshall = 5;


 case 5:
  VAR_17 = FUNC_3(VAR_12, 0);
  if (VAR_17 < 0)
   return VAR_17;
  VAR_12->unmarshall = 6;

 case 6:
  break;
 }

 FUNC_1(" = 0 [done]");
 return 0;
}

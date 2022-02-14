
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct afs_uuid__xdr {int dummy; } ;
struct afs_call {int unmarshall; int count; int count2; int * buffer; struct afs_addr_list* ret_alist; int _iter; } ;
struct afs_addr_list {int version; int nr_addrs; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (char*) ;
 struct afs_addr_list* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct afs_call*,int) ;
 int FUNC_4 (struct afs_call*,int) ;
 int FUNC_5 (struct afs_addr_list*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,unsigned int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct afs_call *VAR_3)
{
 struct afs_addr_list *VAR_4;
 __be32 *VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 FUNC_0("{%u,%zu/%u}",
        VAR_3->unmarshall, FUNC_6(VAR_3->_iter), VAR_3->count);

 switch (VAR_3->unmarshall) {
 case 0:
  FUNC_4(VAR_3,
       sizeof(struct afs_uuid__xdr) + 3 * sizeof(__be32));
  VAR_3->unmarshall++;




 case 1:
  VAR_10 = FUNC_3(VAR_3, 1);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_5 = VAR_3->buffer + sizeof(struct afs_uuid__xdr);
  VAR_6 = FUNC_8(*VAR_5++);
  VAR_7 = FUNC_8(*VAR_5++);
  VAR_8 = FUNC_8(*VAR_5);

  VAR_7 = FUNC_7(VAR_7, VAR_8);
  VAR_4 = FUNC_2(VAR_7, VAR_2, VAR_0);
  if (!VAR_4)
   return -VAR_1;
  VAR_4->version = VAR_6;
  VAR_3->ret_alist = VAR_4;
  VAR_3->count = VAR_8;
  VAR_3->count2 = VAR_7;
  VAR_3->unmarshall++;

 more_entries:
  VAR_8 = FUNC_7(VAR_3->count, 4U);
  FUNC_4(VAR_3, VAR_8 * sizeof(__be32));


 case 2:
  VAR_10 = FUNC_3(VAR_3, VAR_3->count > 4);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_4 = VAR_3->ret_alist;
  VAR_5 = VAR_3->buffer;
  VAR_8 = FUNC_7(VAR_3->count, 4U);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   if (VAR_4->nr_addrs < VAR_3->count2)
    FUNC_5(VAR_4, *VAR_5++, VAR_0);

  VAR_3->count -= VAR_8;
  if (VAR_3->count > 0)
   goto more_entries;
  VAR_3->unmarshall++;
  break;
 }

 FUNC_1(" = 0 [done]");
 return 0;
}

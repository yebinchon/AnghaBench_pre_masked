
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dns_server_list_v1_address {int address_type; } ;
struct afs_addr_list {scalar_t__ nr_ipv4; scalar_t__ nr_addrs; scalar_t__ preferred; } ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct afs_addr_list* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 struct afs_addr_list* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct afs_addr_list*,int ,int ) ;
 int FUNC_4 (struct afs_addr_list*,int *,int ) ;
 int FUNC_5 (struct afs_addr_list*) ;
 int FUNC_6 (int *,int const*,int) ;

__attribute__((used)) static struct afs_addr_list *FUNC_7(const u8 **VAR_4, const u8 *VAR_5,
        u8 VAR_6, u16 VAR_7)
{
 struct afs_addr_list *VAR_8;
 const u8 *VAR_9 = *VAR_4;
 int VAR_10 = -VAR_1;

 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_7);
 if (!VAR_8)
  return FUNC_0(-VAR_2);
 if (VAR_6 == 0)
  return VAR_8;

 for (; VAR_6 > 0 && VAR_5 - VAR_9 >= VAR_6; VAR_6--) {
  struct dns_server_list_v1_address VAR_11;
  __be32 VAR_12[4];

  VAR_11.address_type = *VAR_9++;

  switch (VAR_11.address_type) {
  case 129:
   if (VAR_5 - VAR_9 < 4) {
    FUNC_1(" = -EINVAL [short inet]");
    goto error;
   }
   FUNC_6(VAR_12, VAR_9, 4);
   FUNC_3(VAR_8, VAR_12[0], VAR_7);
   VAR_9 += 4;
   break;

  case 128:
   if (VAR_5 - VAR_9 < 16) {
    FUNC_1(" = -EINVAL [short inet6]");
    goto error;
   }
   FUNC_6(VAR_12, VAR_9, 16);
   FUNC_4(VAR_8, VAR_12, VAR_7);
   VAR_9 += 16;
   break;

  default:
   FUNC_1(" = -EADDRNOTAVAIL [unknown af %u]",
          VAR_11.address_type);
   VAR_10 = -VAR_0;
   goto error;
  }
 }


 if (VAR_8->nr_ipv4 < VAR_8->nr_addrs)
  VAR_8->preferred = VAR_8->nr_ipv4;

 *VAR_4 = VAR_9;
 return VAR_8;

error:
 *VAR_4 = VAR_9;
 FUNC_5(VAR_8);
 return FUNC_0(VAR_10);
}

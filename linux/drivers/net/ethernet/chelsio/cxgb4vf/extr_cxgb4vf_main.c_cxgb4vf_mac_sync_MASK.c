
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct port_info {int viid; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct hash_mac_addr {int list; int addr; } ;
struct adapter {int mac_hlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port_info*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int const*) ;
 struct hash_mac_addr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct port_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,int ,int,int,int const**,int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, const u8 *VAR_3)
{
 struct port_info *VAR_4 = FUNC_5(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 int VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;
 bool VAR_9 = 0;
 bool VAR_10 = FUNC_2(VAR_3);
 const u8 *VAR_11[1] = {VAR_3};
 struct hash_mac_addr *VAR_12;

 VAR_6 = FUNC_6(VAR_5, VAR_4->viid, VAR_9, 1, VAR_11,
      ((void*)0), VAR_10 ? &VAR_8 : &VAR_7, 0);
 if (VAR_6 < 0)
  goto out;




 if (VAR_8 || VAR_7) {
  VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;
  FUNC_1(VAR_12->addr, VAR_3);
  FUNC_4(&VAR_12->list, &VAR_5->mac_hlist);
  VAR_6 = FUNC_0(VAR_4);
 }
out:
 return VAR_6 < 0 ? VAR_6 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct port_info {int viid; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct hash_mac_addr {int list; int addr; } ;
struct adapter {int mac_hlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int,int,int const**,int *,scalar_t__*,int) ;
 int FUNC_1 (struct port_info*) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int const*) ;
 struct hash_mac_addr* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct port_info* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, const u8 *VAR_3)
{
 struct port_info *VAR_4 = FUNC_6(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 int VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;





 u16 VAR_9[1] = {};
 bool VAR_10 = 0;
 bool VAR_11 = FUNC_3(VAR_3);
 const u8 *VAR_12[1] = {VAR_3};
 struct hash_mac_addr *VAR_13;

 VAR_6 = FUNC_0(VAR_5, VAR_4->viid, VAR_10, 1, VAR_12,
       VAR_9, VAR_11 ? &VAR_8 : &VAR_7, 0);
 if (VAR_6 < 0)
  goto out;




 if (VAR_8 || VAR_7) {
  VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_1);
  if (!VAR_13)
   return -VAR_0;
  FUNC_2(VAR_13->addr, VAR_3);
  FUNC_5(&VAR_13->list, &VAR_5->mac_hlist);
  VAR_6 = FUNC_1(VAR_4);
 }
out:
 return VAR_6 < 0 ? VAR_6 : 0;
}

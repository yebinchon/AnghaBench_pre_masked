
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct in6_addr {scalar_t__ s6_addr; } ;
struct fw_clip_cmd {int ip_lo; int ip_hi; void* alloc_to_len16; void* op_to_write; } ;
struct adapter {int mbox; } ;
typedef int c ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fw_clip_cmd) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct fw_clip_cmd*,int ,int) ;
 struct adapter* FUNC_4 (struct net_device const*) ;
 int FUNC_5 (struct adapter*,int ,struct fw_clip_cmd*,int,struct fw_clip_cmd*,int) ;

__attribute__((used)) static int FUNC_6(const struct net_device *VAR_4,
         const struct in6_addr *VAR_5)
{
 struct adapter *VAR_6 = FUNC_4(VAR_4);
 struct fw_clip_cmd VAR_7;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_write = FUNC_2(FUNC_0(VAR_0) |
         VAR_3 | VAR_2);
 VAR_7.alloc_to_len16 = FUNC_2(VAR_1 | FUNC_1(VAR_7));
 *(__be64 *)&VAR_7.ip_hi = *(__be64 *)(VAR_5->s6_addr);
 *(__be64 *)&VAR_7.ip_lo = *(__be64 *)(VAR_5->s6_addr + 8);
 return FUNC_5(VAR_6, VAR_6->mbox, &VAR_7, sizeof(VAR_7), &VAR_7, 0);
}

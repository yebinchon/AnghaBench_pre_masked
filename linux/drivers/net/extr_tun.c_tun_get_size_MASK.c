
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
typedef int gid_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct net_device *VAR_0)
{
 FUNC_0(sizeof(u32) != sizeof(uid_t));
 FUNC_0(sizeof(u32) != sizeof(gid_t));

 return FUNC_1(sizeof(uid_t)) +
        FUNC_1(sizeof(gid_t)) +
        FUNC_1(sizeof(u8)) +
        FUNC_1(sizeof(u8)) +
        FUNC_1(sizeof(u8)) +
        FUNC_1(sizeof(u8)) +
        FUNC_1(sizeof(u8)) +
        FUNC_1(sizeof(u32)) +
        FUNC_1(sizeof(u32)) +
        0;
}

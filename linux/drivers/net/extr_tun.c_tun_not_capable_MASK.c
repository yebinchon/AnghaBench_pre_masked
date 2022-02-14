
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int group; int owner; int dev; } ;
struct net {int user_ns; } ;
struct cred {int euid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 () ;
 struct net* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline bool FUNC_7(struct tun_struct *VAR_1)
{
 const struct cred *VAR_2 = FUNC_0();
 struct net *VAR_3 = FUNC_1(VAR_1->dev);

 return ((FUNC_6(VAR_1->owner) && !FUNC_5(VAR_2->euid, VAR_1->owner)) ||
    (FUNC_2(VAR_1->group) && !FUNC_3(VAR_1->group))) &&
  !FUNC_4(VAR_3->user_ns, VAR_0);
}

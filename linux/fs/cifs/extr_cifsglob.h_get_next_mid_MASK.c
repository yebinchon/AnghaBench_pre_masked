
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {TYPE_1__* ops; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_2__ {int (* get_next_mid ) (struct TCP_Server_Info*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct TCP_Server_Info*) ;

__attribute__((used)) static inline __le16
FUNC_2(struct TCP_Server_Info *VAR_0)
{
 __u16 VAR_1 = VAR_0->ops->get_next_mid(VAR_0);




 return FUNC_0(VAR_1);
}

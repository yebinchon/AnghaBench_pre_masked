
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* create ) (struct net*,struct socket*,int) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_4 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct net*,struct socket*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_5, struct socket *VAR_6, int VAR_7,
   int VAR_8)
{
 int VAR_9 = -VAR_1;

 if (VAR_7 < 0 || VAR_7 > VAR_3)
  goto out;

 VAR_9 = -VAR_0;
 if (!VAR_4[VAR_7])
  FUNC_1("net-pf-%d-proto-%d", VAR_2, VAR_7);
 if (!VAR_4[VAR_7] ||
     !FUNC_3(VAR_4[VAR_7]->owner))
  goto out;

 VAR_9 = VAR_4[VAR_7]->create(VAR_5, VAR_6, VAR_8);

 FUNC_0(VAR_4[VAR_7]->owner);
out:
 return VAR_9;
}

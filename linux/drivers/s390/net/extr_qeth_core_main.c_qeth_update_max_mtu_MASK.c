
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int in_buf_size; } ;
struct qeth_card {TYPE_1__ qdio; struct net_device* dev; } ;
struct net_device {unsigned int mtu; unsigned int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int VAR_3 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_4, unsigned int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 unsigned int VAR_7;

 if (!VAR_5) {

  if (FUNC_0(VAR_4))
   return -VAR_0;

  VAR_5 = VAR_2;
 }

 FUNC_4();
 if (FUNC_0(VAR_4)) {

  VAR_7 = (VAR_6->mtu == VAR_6->max_mtu) ? VAR_5 : VAR_6->mtu;


  VAR_4->qdio.in_buf_size = VAR_5 + 2 * VAR_3;
  if (VAR_6->max_mtu && VAR_6->max_mtu != VAR_5)
   FUNC_3(VAR_4);
 } else {
  if (VAR_6->mtu)
   VAR_7 = VAR_6->mtu;

  else if (FUNC_1(VAR_4))
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_1 - 8;
 }

 VAR_6->max_mtu = VAR_5;
 VAR_6->mtu = FUNC_2(VAR_7, VAR_5);
 FUNC_5();
 return 0;
}

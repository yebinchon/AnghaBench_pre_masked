
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ route4; } ;
struct qeth_card {TYPE_2__ options; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (int,char*,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct qeth_card*,int *,int ) ;
 int FUNC_4 (struct qeth_card*,int ,int ) ;

int FUNC_5(struct qeth_card *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, 3, "setrtg4");

 VAR_3 = FUNC_3(VAR_2, &VAR_2->options.route4.type,
      VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_2->options.route4.type,
      VAR_1);
 if (VAR_3) {
  VAR_2->options.route4.type = VAR_0;
  FUNC_2(2, "Error (%#06x) while setting routing type on device %x. Type set to 'no router'.\n",
     VAR_3, FUNC_0(VAR_2));
 }
 return VAR_3;
}

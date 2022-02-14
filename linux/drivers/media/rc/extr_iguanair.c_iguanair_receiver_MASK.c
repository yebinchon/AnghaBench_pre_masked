
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iguanair {int rc; TYPE_2__* packet; } ;
struct TYPE_3__ {int cmd; int direction; scalar_t__ start; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iguanair*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iguanair *VAR_3, bool VAR_4)
{
 VAR_3->packet->header.start = 0;
 VAR_3->packet->header.direction = VAR_2;
 VAR_3->packet->header.cmd = VAR_4 ? VAR_1 : VAR_0;

 if (VAR_4)
  FUNC_1(VAR_3->rc);

 return FUNC_0(VAR_3, sizeof(VAR_3->packet->header));
}

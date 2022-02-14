
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int dummy; } ;
struct team {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;
typedef int rx_handler_result_t ;
struct TYPE_2__ {unsigned char* h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static rx_handler_result_t FUNC_4(struct team *VAR_3, struct team_port *VAR_4,
          struct sk_buff *VAR_5)
{
 if (FUNC_3(VAR_5->protocol == FUNC_1(VAR_0))) {

  const unsigned char *VAR_6 = FUNC_0(VAR_5)->h_dest;

  if (FUNC_2(VAR_6) && VAR_6[5] == 0x02)
   return VAR_2;
 }
 return VAR_1;
}

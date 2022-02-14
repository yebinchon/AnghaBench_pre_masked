
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct sky2_port *VAR_3, u64 * VAR_4, unsigned VAR_5)
{
 struct sky2_hw *VAR_6 = VAR_3->hw;
 unsigned VAR_7 = VAR_3->port;
 int VAR_8;

 VAR_4[0] = FUNC_1(VAR_6, VAR_7, VAR_1);
 VAR_4[1] = FUNC_1(VAR_6, VAR_7, VAR_0);

 for (VAR_8 = 2; VAR_8 < VAR_5; VAR_8++)
  VAR_4[VAR_8] = FUNC_0(VAR_6, VAR_7, VAR_2[VAR_8].offset);
}

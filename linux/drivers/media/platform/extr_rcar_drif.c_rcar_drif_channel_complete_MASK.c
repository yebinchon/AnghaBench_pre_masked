
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct rcar_drif {TYPE_1__* buf; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct rcar_drif*,int ) ;
 int FUNC_1 (struct rcar_drif*,int ,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static void FUNC_3(struct rcar_drif *VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 VAR_4->buf[VAR_5].status |= VAR_0;


 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (FUNC_2(VAR_6 & VAR_2)) {

  FUNC_1(VAR_4, VAR_3, VAR_6);


  VAR_4->buf[VAR_5].status |= VAR_1;
 }
}

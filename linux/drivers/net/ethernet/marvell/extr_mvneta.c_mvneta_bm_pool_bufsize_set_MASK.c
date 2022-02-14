
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mvneta_port {TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct mvneta_port*,int ) ;
 int FUNC_5 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static inline void FUNC_6(struct mvneta_port *VAR_1,
           int VAR_2,
           u8 VAR_3)
{
 u32 VAR_4;

 if (!FUNC_1(VAR_2, 8)) {
  FUNC_3(VAR_1->dev->dev.parent,
    "illegal buf_size value %d, round to %d\n",
    VAR_2, FUNC_0(VAR_2, 8));
  VAR_2 = FUNC_0(VAR_2, 8);
 }

 VAR_4 = FUNC_4(VAR_1, FUNC_2(VAR_3));
 VAR_4 |= VAR_2 & VAR_0;
 FUNC_5(VAR_1, FUNC_2(VAR_3), VAR_4);
}

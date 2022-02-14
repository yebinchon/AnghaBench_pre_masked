
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_priv {scalar_t__ ale_ports; int ale; int host_port; scalar_t__ enable_ale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gbe_priv*,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct gbe_priv*) ;
 scalar_t__ FUNC_3 (struct gbe_priv*) ;
 int VAR_9 ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct gbe_priv *VAR_13)
{
 int VAR_14 = 1;


 if (FUNC_2(VAR_13) || FUNC_3(VAR_13))
  FUNC_6(VAR_8,
         FUNC_1(VAR_13, VAR_10, VAR_12));


 FUNC_6(VAR_9, FUNC_1(VAR_13, VAR_10,
        VAR_11));

 FUNC_5(VAR_13->ale);

 if (VAR_13->enable_ale)
  VAR_14 = 0;

 FUNC_4(VAR_13->ale, 0, VAR_0, VAR_14);

 FUNC_4(VAR_13->ale, 0, VAR_1, 1);

 FUNC_4(VAR_13->ale, VAR_13->host_port,
        VAR_2, VAR_3);

 FUNC_4(VAR_13->ale, 0,
        VAR_6,
        FUNC_0(VAR_13->ale_ports));

 FUNC_4(VAR_13->ale, 0,
        VAR_4,
        FUNC_0(VAR_13->ale_ports - 1));

 FUNC_4(VAR_13->ale, 0,
        VAR_5,
        FUNC_0(VAR_13->ale_ports));

 FUNC_4(VAR_13->ale, 0,
        VAR_7,
        FUNC_0(VAR_13->ale_ports));
}

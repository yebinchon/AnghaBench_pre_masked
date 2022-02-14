
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_priv {int dataport_mutex; } ;
struct lan78xx_net {int intf; scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int*) ;
 int FUNC_2 (struct lan78xx_net*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct lan78xx_net *VAR_6, u32 VAR_7,
      u32 VAR_8, u32 VAR_9, u32 *VAR_10)
{
 struct lan78xx_priv *VAR_11 = (struct lan78xx_priv *)(VAR_6->data[0]);
 u32 VAR_12;
 int VAR_13, VAR_14;

 if (FUNC_5(VAR_6->intf) < 0)
   return 0;

 FUNC_3(&VAR_11->dataport_mutex);

 VAR_14 = FUNC_0(VAR_6);
 if (VAR_14 < 0)
  goto done;

 VAR_14 = FUNC_1(VAR_6, VAR_4, &VAR_12);

 VAR_12 &= ~VAR_5;
 VAR_12 |= VAR_7;
 VAR_14 = FUNC_2(VAR_6, VAR_4, VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_14 = FUNC_2(VAR_6, VAR_0, VAR_8 + VAR_13);

  VAR_14 = FUNC_2(VAR_6, VAR_3, VAR_10[VAR_13]);

  VAR_14 = FUNC_2(VAR_6, VAR_1, VAR_2);

  VAR_14 = FUNC_0(VAR_6);
  if (VAR_14 < 0)
   goto done;
 }

done:
 FUNC_4(&VAR_11->dataport_mutex);
 FUNC_6(VAR_6->intf);

 return VAR_14;
}

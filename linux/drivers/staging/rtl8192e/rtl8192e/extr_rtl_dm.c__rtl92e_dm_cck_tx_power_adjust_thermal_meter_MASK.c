
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {size_t CCK_index; } ;
struct net_device {int dummy; } ;


 int** VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9,
        bool VAR_10)
{
 u32 VAR_11;
 struct r8192_priv *VAR_12 = FUNC_2(VAR_9);

 VAR_11 = 0;
 if (!VAR_10) {
  VAR_11 = VAR_1[VAR_12->CCK_index][0] +
     (VAR_1[VAR_12->CCK_index][1] << 8);
  FUNC_1(VAR_9, VAR_7, VAR_4, VAR_11);
  FUNC_0(VAR_2,
    "CCK not chnl 14, reg 0x%x = 0x%x\n", VAR_7,
    VAR_11);
  VAR_11 = VAR_1[VAR_12->CCK_index][2] +
     (VAR_1[VAR_12->CCK_index][3] << 8) +
     (VAR_1[VAR_12->CCK_index][4] << 16)+
     (VAR_1[VAR_12->CCK_index][5] << 24);
  FUNC_1(VAR_9, VAR_8, VAR_3, VAR_11);
  FUNC_0(VAR_2,
    "CCK not chnl 14, reg 0x%x = 0x%x\n", VAR_8,
    VAR_11);
  VAR_11 = VAR_1[VAR_12->CCK_index][6] +
     (VAR_1[VAR_12->CCK_index][7] << 8);

  FUNC_1(VAR_9, VAR_6, VAR_5, VAR_11);
  FUNC_0(VAR_2,
    "CCK not chnl 14, reg 0x%x = 0x%x\n", VAR_6,
    VAR_11);
 } else {
  VAR_11 = VAR_0[VAR_12->CCK_index][0] +
     (VAR_0[VAR_12->CCK_index][1] << 8);

  FUNC_1(VAR_9, VAR_7, VAR_4, VAR_11);
  FUNC_0(VAR_2, "CCK chnl 14, reg 0x%x = 0x%x\n",
   VAR_7, VAR_11);
  VAR_11 = VAR_0[VAR_12->CCK_index][2] +
     (VAR_0[VAR_12->CCK_index][3] << 8) +
     (VAR_0[VAR_12->CCK_index][4] << 16)+
     (VAR_0[VAR_12->CCK_index][5] << 24);
  FUNC_1(VAR_9, VAR_8, VAR_3, VAR_11);
  FUNC_0(VAR_2, "CCK chnl 14, reg 0x%x = 0x%x\n",
   VAR_8, VAR_11);
  VAR_11 = VAR_0[VAR_12->CCK_index][6] +
     (VAR_0[VAR_12->CCK_index][7]<<8);

  FUNC_1(VAR_9, VAR_6, VAR_5, VAR_11);
  FUNC_0(VAR_2, "CCK chnl 14, reg 0x%x = 0x%x\n",
   VAR_6, VAR_11);
 }
}

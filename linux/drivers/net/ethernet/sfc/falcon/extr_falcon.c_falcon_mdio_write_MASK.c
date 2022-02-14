
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct falcon_nic_data {int mdio_lock; } ;
struct ef4_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int ef4_oword_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ef4_nic*,int *,int ) ;
 int FUNC_3 (struct ef4_nic*) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ef4_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ef4_nic*,int ,int ,char*,int,int,int ,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_11,
        int VAR_12, int VAR_13, u16 VAR_14, u16 VAR_15)
{
 struct ef4_nic *VAR_16 = FUNC_6(VAR_11);
 struct falcon_nic_data *VAR_17 = VAR_16->nic_data;
 ef4_oword_t VAR_18;
 int VAR_19;

 FUNC_7(VAR_16, VAR_10, VAR_16->net_dev,
     "writing MDIO %d register %d.%d with 0x%04x\n",
      VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_4(&VAR_17->mdio_lock);


 VAR_19 = FUNC_3(VAR_16);
 if (VAR_19)
  goto out;


 FUNC_0(VAR_18, VAR_2, VAR_14);
 FUNC_2(VAR_16, &VAR_18, VAR_8);

 FUNC_1(VAR_18, VAR_3, VAR_12,
        VAR_0, VAR_13);
 FUNC_2(VAR_16, &VAR_18, VAR_7);


 FUNC_0(VAR_18, VAR_4, VAR_15);
 FUNC_2(VAR_16, &VAR_18, VAR_9);

 FUNC_1(VAR_18,
        VAR_5, 1,
        VAR_1, 0);
 FUNC_2(VAR_16, &VAR_18, VAR_6);


 VAR_19 = FUNC_3(VAR_16);
 if (VAR_19) {

  FUNC_1(VAR_18,
         VAR_5, 0,
         VAR_1, 1);
  FUNC_2(VAR_16, &VAR_18, VAR_6);
  FUNC_8(10);
 }

out:
 FUNC_5(&VAR_17->mdio_lock);
 return VAR_19;
}

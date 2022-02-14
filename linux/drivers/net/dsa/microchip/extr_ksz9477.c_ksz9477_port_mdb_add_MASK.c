
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct switchdev_obj_port_mdb {int* addr; int vid; } ;
struct ksz_device {int num_statics; int alu_mutex; int dev; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ksz_device*,int*) ;
 scalar_t__ FUNC_3 (struct ksz_device*) ;
 int FUNC_4 (struct ksz_device*,int*) ;
 int FUNC_5 (struct ksz_device*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dsa_switch *VAR_8, int VAR_9,
     const struct switchdev_obj_port_mdb *VAR_10)
{
 struct ksz_device *VAR_11 = VAR_8->priv;
 u32 VAR_12[4];
 u32 VAR_13;
 int VAR_14;
 u32 VAR_15, VAR_16;

 VAR_15 = ((VAR_10->addr[0] << 8) | VAR_10->addr[1]);
 VAR_16 = ((VAR_10->addr[2] << 24) | (VAR_10->addr[3] << 16));
 VAR_16 |= ((VAR_10->addr[4] << 8) | VAR_10->addr[5]);

 FUNC_6(&VAR_11->alu_mutex);

 for (VAR_14 = 0; VAR_14 < VAR_11->num_statics; VAR_14++) {

  VAR_13 = (VAR_14 << VAR_0) |
   VAR_1 | VAR_2;
  FUNC_5(VAR_11, VAR_7, VAR_13);


  if (FUNC_3(VAR_11)) {
   FUNC_1(VAR_11->dev, "Failed to read ALU STATIC\n");
   goto exit;
  }


  FUNC_2(VAR_11, VAR_12);

  if (VAR_12[0] & VAR_5) {

   if (((VAR_12[2] >> VAR_3) == VAR_10->vid) &&
       ((VAR_12[2] & VAR_4) == VAR_15) &&
       VAR_12[3] == VAR_16) {

    break;
   }
  } else {

   break;
  }
 }


 if (VAR_14 == VAR_11->num_statics)
  goto exit;


 VAR_12[0] = VAR_5;
 VAR_12[1] |= FUNC_0(VAR_9);
 if (VAR_10->vid)
  VAR_12[1] |= VAR_6;
 VAR_12[2] = (VAR_10->vid << VAR_3);
 VAR_12[2] |= VAR_15;
 VAR_12[3] = VAR_16;

 FUNC_4(VAR_11, VAR_12);

 VAR_13 = (VAR_14 << VAR_0) | VAR_2;
 FUNC_5(VAR_11, VAR_7, VAR_13);


 if (FUNC_3(VAR_11))
  FUNC_1(VAR_11->dev, "Failed to read ALU STATIC\n");

exit:
 FUNC_7(&VAR_11->alu_mutex);
}

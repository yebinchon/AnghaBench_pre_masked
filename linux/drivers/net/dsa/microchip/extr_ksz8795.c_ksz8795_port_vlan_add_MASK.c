
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct switchdev_obj_port_vlan {int flags; int vid_begin; int vid_end; } ;
struct ksz_device {int dummy; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int*,int*,int*) ;
 int FUNC_2 (struct ksz_device*,int,int*) ;
 int FUNC_3 (int,int,int,int*) ;
 int FUNC_4 (struct ksz_device*,int,int) ;
 int FUNC_5 (struct ksz_device*,int,int ,int ,int) ;
 int FUNC_6 (struct ksz_device*,int,int ,int*) ;
 int FUNC_7 (struct ksz_device*,int,int ,int) ;

__attribute__((used)) static void FUNC_8(struct dsa_switch *VAR_5, int VAR_6,
      const struct switchdev_obj_port_vlan *VAR_7)
{
 bool VAR_8 = VAR_7->flags & VAR_1;
 struct ksz_device *VAR_9 = VAR_5->priv;
 u16 VAR_10, VAR_11, VAR_12 = 0;
 u8 VAR_13, VAR_14, VAR_15;

 FUNC_5(VAR_9, VAR_6, VAR_3, VAR_2, VAR_8);

 for (VAR_11 = VAR_7->vid_begin; VAR_11 <= VAR_7->vid_end; VAR_11++) {
  FUNC_2(VAR_9, VAR_11, &VAR_10);
  FUNC_1(VAR_10, &VAR_13, &VAR_14, &VAR_15);


  if (!VAR_15) {

   VAR_13 = 1;
   VAR_15 = 1;
  }
  VAR_14 |= FUNC_0(VAR_6);

  FUNC_3(VAR_13, VAR_14, VAR_15, &VAR_10);
  FUNC_4(VAR_9, VAR_11, VAR_10);


  if (VAR_7->flags & VAR_0)
   VAR_12 = VAR_11;
 }

 if (VAR_12) {
  FUNC_6(VAR_9, VAR_6, VAR_4, &VAR_11);
  VAR_11 &= 0xfff;
  VAR_11 |= VAR_12;
  FUNC_7(VAR_9, VAR_6, VAR_4, VAR_11);
 }
}
